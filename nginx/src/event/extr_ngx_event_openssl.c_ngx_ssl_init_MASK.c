
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_log_t ;
typedef int ngx_int_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *,int *,int *,int *) ;
 int FUNC_6 (int ,int *,int *,int *,int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *,int *,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ,int *,int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int VAR_13 ;

ngx_int_t
FUNC_14(ngx_log_t *VAR_14)
{
    FUNC_1(((void*)0));

    FUNC_7();
    FUNC_8();

    FUNC_3();




    {




    int VAR_15;
    FUNC_9(VAR_4) *VAR_13;

    VAR_13 = FUNC_4();
    VAR_15 = FUNC_12(VAR_13);

    while (VAR_15--) {
        (void) FUNC_13(VAR_13);
    }
    }


    VAR_7 = FUNC_6(0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

    if (VAR_7 == -1) {
        FUNC_11(VAR_1, VAR_14, 0, "SSL_get_ex_new_index() failed");
        return VAR_0;
    }

    VAR_9 = FUNC_5(0, ((void*)0), ((void*)0), ((void*)0),
                                                         ((void*)0));
    if (VAR_9 == -1) {
        FUNC_11(VAR_1, VAR_14, 0,
                      "SSL_CTX_get_ex_new_index() failed");
        return VAR_0;
    }

    VAR_10 = FUNC_5(0, ((void*)0), ((void*)0), ((void*)0),
                                                           ((void*)0));
    if (VAR_10 == -1) {
        FUNC_11(VAR_1, VAR_14, 0,
                      "SSL_CTX_get_ex_new_index() failed");
        return VAR_0;
    }

    VAR_11 = FUNC_5(0, ((void*)0), ((void*)0),
                                                                 ((void*)0), ((void*)0));
    if (VAR_11 == -1) {
        FUNC_11(VAR_1, VAR_14, 0,
                      "SSL_CTX_get_ex_new_index() failed");
        return VAR_0;
    }

    VAR_5 = FUNC_5(0, ((void*)0), ((void*)0), ((void*)0),
                                                         ((void*)0));
    if (VAR_5 == -1) {
        FUNC_11(VAR_1, VAR_14, 0,
                      "SSL_CTX_get_ex_new_index() failed");
        return VAR_0;
    }

    VAR_8 = FUNC_10(0, ((void*)0), ((void*)0), ((void*)0),
                                                           ((void*)0));
    if (VAR_8 == -1) {
        FUNC_11(VAR_1, VAR_14, 0, "X509_get_ex_new_index() failed");
        return VAR_0;
    }

    VAR_6 = FUNC_10(0, ((void*)0), ((void*)0), ((void*)0),
                                                           ((void*)0));

    if (VAR_6 == -1) {
        FUNC_11(VAR_1, VAR_14, 0, "X509_get_ex_new_index() failed");
        return VAR_0;
    }

    VAR_12 = FUNC_10(0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

    if (VAR_12 == -1) {
        FUNC_11(VAR_1, VAR_14, 0, "X509_get_ex_new_index() failed");
        return VAR_0;
    }

    return VAR_2;
}
