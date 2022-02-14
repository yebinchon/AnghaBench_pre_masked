
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {struct TYPE_3__* Next; int lpExeName; } ;
typedef TYPE_1__* PALIAS_HEADER ;


 int FUNC_0 (int ) ;

UINT
FUNC_1(PALIAS_HEADER VAR_0)
{
    UINT VAR_1 = 0;

    while (VAR_0)
    {
        VAR_1 += (FUNC_0(VAR_0->lpExeName) + 1) * sizeof(WCHAR);
        VAR_0 = VAR_0->Next;
    }
    if (VAR_1)
        VAR_1 += sizeof(WCHAR);

    return VAR_1;
}
