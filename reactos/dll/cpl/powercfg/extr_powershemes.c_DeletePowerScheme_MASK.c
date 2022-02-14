
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {struct TYPE_4__* pszDescription; struct TYPE_4__* pszName; int ListEntry; } ;
typedef TYPE_1__* PPOWER_SCHEME ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
VOID
FUNC_3(
    PPOWER_SCHEME VAR_0)
{
    FUNC_2(&VAR_0->ListEntry);

    if (VAR_0->pszName)
        FUNC_1(FUNC_0(), 0, VAR_0->pszName);

    if (VAR_0->pszDescription)
        FUNC_1(FUNC_0(), 0, VAR_0->pszDescription);

    FUNC_1(FUNC_0(), 0, VAR_0);
}
