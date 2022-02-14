
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENGINE_CLEANUP_ITEM ;
typedef int ENGINE_CLEANUP_CB ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(ENGINE_CLEANUP_CB *VAR_1)
{
    ENGINE_CLEANUP_ITEM *VAR_2;
    if (!FUNC_1(1))
        return;
    VAR_2 = FUNC_2(VAR_1);
    if (VAR_2 != ((void*)0)) {
        if (FUNC_3(VAR_0, VAR_2) <= 0)
            FUNC_0(VAR_2);
    }
}
