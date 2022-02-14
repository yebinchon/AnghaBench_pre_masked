
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_ASYNC_FD ;
typedef int DWORD ;
typedef int (* ASYNC_callback_fn ) (void*) ;
typedef int ASYNC_WAIT_CTX ;
typedef int ASYNC_JOB ;


 scalar_t__ FUNC_0 (int *,int (*) (void*),void**) ;
 scalar_t__ FUNC_1 (int *,int ,int *,void**) ;
 int FUNC_2 (int *,int ,int ,int *,int (*) (int *,int ,int ,int *)) ;
 int * FUNC_3 () ;
 int * FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,int *,int *,int) ;
 char VAR_0 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int) ;
 int FUNC_9 (int ,char*,int,int *,int *) ;
 int FUNC_10 (int ,char*,int,int *,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,char*,int) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_15 (int ,char*,int) ;

__attribute__((used)) static void FUNC_16(void) {
    ASYNC_JOB *VAR_2;
    ASYNC_WAIT_CTX *VAR_3;
    ASYNC_callback_fn VAR_4;
    void * VAR_5;
    OSSL_ASYNC_FD VAR_6[2] = {0, 0};
    OSSL_ASYNC_FD *VAR_7;







    if ((VAR_2 = FUNC_3()) == ((void*)0))
        return;

    VAR_3 = FUNC_4(VAR_2);

    if (FUNC_0(VAR_3, VAR_4, &VAR_5) && VAR_4 != ((void*)0)) {





        (*VAR_4)(VAR_5);
        FUNC_5();
        return;
    }


    if (FUNC_1(VAR_3, VAR_1, &VAR_6[0],
                              (void **)&VAR_7)) {
        VAR_6[1] = *VAR_7;
    } else {
        VAR_7 = FUNC_8(sizeof(*VAR_7));
        if (VAR_7 == ((void*)0))
            return;
        *VAR_7 = VAR_6[1];

        if (!FUNC_2(VAR_3, VAR_1, VAR_6[0],
                                        VAR_7, FUNC_14)) {
            FUNC_14(VAR_3, VAR_1, VAR_6[0], VAR_7);
            return;
        }
    }
    FUNC_5();
}
