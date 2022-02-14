
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* ASYNC_callback_fn ) (void*) ;
typedef int ASYNC_WAIT_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int (*) (void*),void**) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int (*) (void*),void*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,char*) ;
 int VAR_0 ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;

__attribute__((used)) static int FUNC_11(void)
{
    ASYNC_WAIT_CTX *VAR_1 = ((void*)0);
    int VAR_2 = 100;
    ASYNC_callback_fn VAR_3;
    void *VAR_4;
    int VAR_5 = 1;

    if ( !FUNC_7(1, 0)
            || (VAR_1 = FUNC_3()) == ((void*)0)
            || FUNC_4(VAR_1, FUNC_10, (void*)&VAR_2)
               != 1
            || FUNC_1(VAR_1, VAR_3, &VAR_4)
               != 1
            || FUNC_10 != VAR_3
            || VAR_4 != (void*)&VAR_2
            || (*VAR_3)(VAR_4) != 1
            || FUNC_5(VAR_1, VAR_5) != 1
            || VAR_5 != FUNC_2(VAR_1)) {
        FUNC_8(VAR_0, "test_ASYNC_callback_status() failed\n");
        FUNC_0(VAR_1);
        FUNC_6();
        return 0;
    }

    FUNC_0(VAR_1);
    FUNC_6();
    return 1;

}
