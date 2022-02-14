
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int (* handler ) () ;} ;
typedef TYPE_1__ OPENSSL_INIT_STOP ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_20 () ;
 scalar_t__ VAR_7 ;

void FUNC_21(void)
{
    OPENSSL_INIT_STOP *VAR_8, *VAR_9;







    if (!VAR_2)
        return;


    if (VAR_6)
        return;
    VAR_6 = 1;





    FUNC_3();

    VAR_8 = VAR_5;
    while (VAR_8 != ((void*)0)) {
        VAR_8->handler();
        VAR_9 = VAR_8;
        VAR_8 = VAR_8->next;
        FUNC_2(VAR_9);
    }
    VAR_5 = ((void*)0);

    FUNC_0(VAR_3);
    VAR_3 = ((void*)0);







    if (VAR_7) {
        FUNC_5(VAR_0, "OPENSSL_cleanup: comp_zlib_cleanup_int()\n");
        FUNC_8();
    }


    if (VAR_1) {
        FUNC_5(VAR_0, "OPENSSL_cleanup: async_deinit()\n");
        FUNC_6();
    }

    if (VAR_4) {
        FUNC_5(VAR_0, "OPENSSL_cleanup: err_free_strings_int()\n");
        FUNC_12();
    }
    FUNC_5(VAR_0, "OPENSSL_cleanup: rand_cleanup_int()\n");
    FUNC_19();

    FUNC_5(VAR_0, "OPENSSL_cleanup: conf_modules_free_int()\n");
    FUNC_9();


    FUNC_5(VAR_0, "OPENSSL_cleanup: engine_cleanup_int()\n");
    FUNC_10();

    FUNC_5(VAR_0, "OPENSSL_cleanup: ossl_store_cleanup_int()\n");
    FUNC_17();

    FUNC_5(VAR_0, "OPENSSL_cleanup: openssl_ctx_default_deinit()\n");
    FUNC_15();

    FUNC_16();

    FUNC_5(VAR_0, "OPENSSL_cleanup: bio_cleanup()\n");
    FUNC_7();

    FUNC_5(VAR_0, "OPENSSL_cleanup: evp_cleanup_int()\n");
    FUNC_13();

    FUNC_5(VAR_0, "OPENSSL_cleanup: obj_cleanup_int()\n");
    FUNC_14();

    FUNC_5(VAR_0, "OPENSSL_cleanup: err_int()\n");
    FUNC_11();

    FUNC_5(VAR_0, "OPENSSL_cleanup: CRYPTO_secure_malloc_done()\n");
    FUNC_1();


    FUNC_5(VAR_0, "OPENSSL_cleanup: OSSL_CMP_log_close()\n");
    FUNC_4();


    FUNC_5(VAR_0, "OPENSSL_cleanup: ossl_trace_cleanup()\n");
    FUNC_18();

    VAR_2 = 0;
}
