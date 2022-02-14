
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASYNC_WAIT_CTX ;
typedef int ASYNC_JOB ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int **,int *,int*,int ,int *,int ) ;
 int * VAR_2 ;
 int FUNC_5 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(void)
{
    ASYNC_JOB *VAR_5 = ((void*)0);
    int VAR_6;
    ASYNC_WAIT_CTX *VAR_7 = ((void*)0);

    VAR_2 = ((void*)0);

    if ( !FUNC_3(1, 0)
            || (VAR_7 = FUNC_1()) == ((void*)0)
            || FUNC_4(&VAR_5, VAR_7, &VAR_6, VAR_3, ((void*)0), 0)
                != VAR_1
            || VAR_2 != VAR_5
            || FUNC_4(&VAR_5, VAR_7, &VAR_6, VAR_3, ((void*)0), 0)
                != VAR_0
            || VAR_6 != 1) {
        FUNC_5(VAR_4, "test_ASYNC_get_current_job() failed\n");
        FUNC_0(VAR_7);
        FUNC_2();
        return 0;
    }

    FUNC_0(VAR_7);
    FUNC_2();
    return 1;
}
