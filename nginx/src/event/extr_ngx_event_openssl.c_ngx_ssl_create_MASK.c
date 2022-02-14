
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_3__ {int * ctx; int buffer_size; int log; } ;
typedef TYPE_1__ ngx_ssl_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,void*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_9 () ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_10 (int ,int ,int ,char*) ;
 int VAR_34 ;
 int VAR_35 ;

ngx_int_t
FUNC_11(ngx_ssl_t *VAR_36, ngx_uint_t VAR_37, void *VAR_38)
{
    VAR_36->ctx = FUNC_1(FUNC_9());

    if (VAR_36->ctx == ((void*)0)) {
        FUNC_10(VAR_1, VAR_36->log, 0, "SSL_CTX_new() failed");
        return VAR_0;
    }

    if (FUNC_2(VAR_36->ctx, VAR_35, VAR_38) == 0) {
        FUNC_10(VAR_1, VAR_36->log, 0,
                      "SSL_CTX_set_ex_data() failed");
        return VAR_0;
    }

    if (FUNC_2(VAR_36->ctx, VAR_33, ((void*)0)) == 0) {
        FUNC_10(VAR_1, VAR_36->log, 0,
                      "SSL_CTX_set_ex_data() failed");
        return VAR_0;
    }

    VAR_36->buffer_size = VAR_3;
    FUNC_7(VAR_36->ctx, VAR_26);







    if (!(VAR_37 & VAR_4)) {
        FUNC_7(VAR_36->ctx, VAR_20);
    }
    if (!(VAR_37 & VAR_5)) {
        FUNC_7(VAR_36->ctx, VAR_21);
    }
    if (!(VAR_37 & VAR_6)) {
        FUNC_7(VAR_36->ctx, VAR_22);
    }
    FUNC_8(VAR_36->ctx, 1);

    FUNC_3(VAR_36->ctx, VAR_34);

    return VAR_2;
}
