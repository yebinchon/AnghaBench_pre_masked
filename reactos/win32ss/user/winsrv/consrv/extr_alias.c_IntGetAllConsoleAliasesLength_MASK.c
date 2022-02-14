
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_7__ {scalar_t__ Length; } ;
struct TYPE_6__ {scalar_t__ Length; } ;
struct TYPE_9__ {struct TYPE_9__* Next; TYPE_2__ Target; TYPE_1__ Source; } ;
struct TYPE_8__ {TYPE_4__* Data; } ;
typedef TYPE_3__* PALIAS_HEADER ;
typedef TYPE_4__* PALIAS_ENTRY ;
typedef int BOOLEAN ;



__attribute__((used)) static UINT
FUNC_0(PALIAS_HEADER VAR_0,
                              BOOLEAN VAR_1)
{
    UINT VAR_2 = 0;
    PALIAS_ENTRY VAR_3 = VAR_0->Data;

    while (VAR_3)
    {
        VAR_2 += VAR_3->Source.Length;
        VAR_2 += VAR_3->Target.Length;
        VAR_2 += 2 * sizeof(WCHAR);
        VAR_3 = VAR_3->Next;
    }





    if (!VAR_1)
        VAR_2 /= sizeof(WCHAR);

    return VAR_2;
}
