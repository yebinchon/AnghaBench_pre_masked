
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ERR_STATE ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

int FUNC_6(void **VAR_4)
{
    int VAR_5 = FUNC_4();
    if (!FUNC_2(VAR_0, ((void*)0)))
        return 0;

    if (!FUNC_3(&VAR_2, VAR_1))
        return 0;

    *VAR_4 = FUNC_0(&VAR_3);
    if (!FUNC_1(&VAR_3, (ERR_STATE*)-1))
        return 0;

    FUNC_5(VAR_5);
    return 1;
}
