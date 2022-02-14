
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_4__ {scalar_t__ Length; } ;
struct TYPE_5__ {struct TYPE_5__* Next; TYPE_1__ ExeName; } ;
typedef TYPE_2__* PALIAS_HEADER ;
typedef int BOOLEAN ;



__attribute__((used)) static UINT
FUNC_0(PALIAS_HEADER VAR_0,
                               BOOLEAN VAR_1)
{
    UINT VAR_2 = 0;

    while (VAR_0)
    {
        VAR_2 += VAR_0->ExeName.Length + sizeof(WCHAR);
        VAR_0 = VAR_0->Next;
    }





    if (!VAR_1)
        VAR_2 /= sizeof(WCHAR);

    return VAR_2;
}
