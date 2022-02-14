
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t cEntries; struct TYPE_4__* pse; struct TYPE_4__* pszValue; struct TYPE_4__* pszName; } ;
typedef TYPE_1__ STRTABLEW ;
typedef size_t DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(STRTABLEW *VAR_0)
{
    DWORD VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->cEntries; VAR_1++)
    {
        FUNC_1(FUNC_0(), 0, VAR_0->pse[VAR_1].pszName);
        FUNC_1(FUNC_0(), 0, VAR_0->pse[VAR_1].pszValue);
    }

    FUNC_1(FUNC_0(), 0, VAR_0->pse);
    FUNC_1(FUNC_0(), 0, VAR_0);
}
