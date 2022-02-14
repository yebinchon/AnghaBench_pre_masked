
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * polesite; int * pstg; int * poleobj; } ;
typedef TYPE_1__ REOBJECT ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3(REOBJECT *VAR_3, const REOBJECT *VAR_4, DWORD VAR_5)
{
    *VAR_3 = *VAR_4;
    VAR_3->poleobj = ((void*)0);
    VAR_3->pstg = ((void*)0);
    VAR_3->polesite = ((void*)0);

    if ((VAR_5 & VAR_0) && VAR_4->poleobj)
    {
        VAR_3->poleobj = VAR_4->poleobj;
        FUNC_1(VAR_3->poleobj);
    }
    if ((VAR_5 & VAR_2) && VAR_4->pstg)
    {
        VAR_3->pstg = VAR_4->pstg;
        FUNC_2(VAR_3->pstg);
    }
    if ((VAR_5 & VAR_1) && VAR_4->polesite)
    {
        VAR_3->polesite = VAR_4->polesite;
        FUNC_0(VAR_3->polesite);
    }
}
