
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
 int VAR_2 ;
 int FUNC_5 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(void)
{
    ASYNC_JOB *VAR_4 = ((void*)0);
    int VAR_5;
    ASYNC_WAIT_CTX *VAR_6 = ((void*)0);

    if ( !FUNC_3(1, 0)
            || (VAR_6 = FUNC_1()) == ((void*)0)
            || FUNC_4(&VAR_4, VAR_6, &VAR_5, VAR_2, ((void*)0), 0)
                != VAR_1
            || FUNC_4(&VAR_4, VAR_6, &VAR_5, VAR_2, ((void*)0), 0)
                != VAR_0
            || VAR_5 != 1) {
        FUNC_5(VAR_3, "test_ASYNC_block_pause() failed\n");
        FUNC_0(VAR_6);
        FUNC_2();
        return 0;
    }

    FUNC_0(VAR_6);
    FUNC_2();
    return 1;
}
