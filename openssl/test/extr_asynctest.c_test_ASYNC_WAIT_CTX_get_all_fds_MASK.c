
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OSSL_ASYNC_FD ;
typedef int ASYNC_WAIT_CTX ;
typedef int ASYNC_JOB ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__*,size_t*) ;
 int FUNC_2 (int *,scalar_t__*,size_t*,scalar_t__*,size_t*) ;
 int * FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int **,int *,int*,int ,int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(void)
{
    ASYNC_JOB *VAR_6 = ((void*)0);
    int VAR_7;
    ASYNC_WAIT_CTX *VAR_8 = ((void*)0);
    OSSL_ASYNC_FD VAR_9 = VAR_3, VAR_10 = VAR_3;
    size_t VAR_11, VAR_12;

    if ( !FUNC_5(1, 0)
            || (VAR_8 = FUNC_3()) == ((void*)0)

            || FUNC_6(&VAR_6, VAR_8, &VAR_7, VAR_5, ((void*)0), 0)
                != VAR_1
            || !FUNC_1(VAR_8, ((void*)0), &VAR_11)
            || VAR_11 != 0
            || !FUNC_2(VAR_8, ((void*)0), &VAR_11, ((void*)0),
                                               &VAR_12)
            || VAR_11 != 0
            || VAR_12 != 0

            || FUNC_6(&VAR_6, VAR_8, &VAR_7, VAR_5, ((void*)0), 0)
                != VAR_1
            || !FUNC_1(VAR_8, ((void*)0), &VAR_11)
            || VAR_11 != 1
            || !FUNC_1(VAR_8, &VAR_9, &VAR_11)
            || VAR_9 != VAR_2
            || (VAR_9 = VAR_3, 0)
            || !FUNC_2(VAR_8, ((void*)0), &VAR_11, ((void*)0),
                                               &VAR_12)
            || VAR_11 != 1
            || VAR_12 != 0
            || !FUNC_2(VAR_8, &VAR_9, &VAR_11, ((void*)0),
                                               &VAR_12)
            || VAR_9 != VAR_2

            || FUNC_6(&VAR_6, VAR_8, &VAR_7, VAR_5, ((void*)0), 0)
                != VAR_1
            || !FUNC_1(VAR_8, ((void*)0), &VAR_11)
            || VAR_11 != 0
            || !FUNC_2(VAR_8, ((void*)0), &VAR_11, ((void*)0),
                                               &VAR_12)
            || VAR_11 != 0
            || VAR_12 != 1
            || !FUNC_2(VAR_8, ((void*)0), &VAR_11, &VAR_10,
                                               &VAR_12)
            || VAR_10 != VAR_2

            || FUNC_6(&VAR_6, VAR_8, &VAR_7, VAR_5, ((void*)0), 0)
                != VAR_0
            || !FUNC_1(VAR_8, ((void*)0), &VAR_11)
            || VAR_11 != 0
            || !FUNC_2(VAR_8, ((void*)0), &VAR_11, ((void*)0),
                                               &VAR_12)
            || VAR_11 != 0
            || VAR_12 != 0
            || VAR_7 != 1) {
        FUNC_7(VAR_4, "test_ASYNC_get_wait_fd() failed\n");
        FUNC_0(VAR_8);
        FUNC_4();
        return 0;
    }

    FUNC_0(VAR_8);
    FUNC_4();
    return 1;
}
