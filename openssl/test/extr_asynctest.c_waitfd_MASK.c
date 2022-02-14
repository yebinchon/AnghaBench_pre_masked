
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASYNC_WAIT_CTX ;
typedef int ASYNC_JOB ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int ,int *,int *) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int *) ;
 int FUNC_4 () ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(void *VAR_1)
{
    ASYNC_JOB *VAR_2;
    ASYNC_WAIT_CTX *VAR_3;
    VAR_2 = FUNC_2();
    if (VAR_2 == ((void*)0))
        return 0;
    VAR_3 = FUNC_3(VAR_2);
    if (VAR_3 == ((void*)0))
        return 0;


    FUNC_4();


    if (!FUNC_1(VAR_3, VAR_3, VAR_0, ((void*)0), ((void*)0)))
        return 0;
    FUNC_4();


    if (!FUNC_0(VAR_3, VAR_3))
        return 0;
    FUNC_4();


    if (!FUNC_1(VAR_3, VAR_3, VAR_0, ((void*)0), ((void*)0)))
        return 0;
    if (!FUNC_0(VAR_3, VAR_3))
        return 0;

    return 1;
}
