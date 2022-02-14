
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Next; int lpExeName; } ;
typedef TYPE_1__* PALIAS_HEADER ;
typedef int LPCWSTR ;
typedef scalar_t__ INT ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static
PALIAS_HEADER
FUNC_1(PALIAS_HEADER VAR_0, LPCWSTR VAR_1)
{
    while (VAR_0)
    {
        INT VAR_2 = FUNC_0(VAR_0->lpExeName, VAR_1);
        if (!VAR_2) return VAR_0;
        if (VAR_2 > 0) break;

        VAR_0 = VAR_0->Next;
    }
    return ((void*)0);
}
