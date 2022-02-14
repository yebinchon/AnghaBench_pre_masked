
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_6__ {scalar_t__ data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_7__ {int ctx; int log; } ;
typedef TYPE_2__ ngx_ssl_t ;
typedef int ngx_int_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_1__*) ;
 int VAR_4 ;

ngx_int_t
FUNC_4(ngx_conf_t *VAR_5, ngx_ssl_t *VAR_6, ngx_str_t *VAR_7,
    ngx_uint_t VAR_8)
{
    if (FUNC_0(VAR_6->ctx, (char *) VAR_7->data) == 0) {
        FUNC_3(VAR_1, VAR_6->log, 0,
                      "SSL_CTX_set_cipher_list(\"%V\") failed",
                      VAR_7);
        return VAR_0;
    }

    if (VAR_8) {
        FUNC_1(VAR_6->ctx, VAR_3);
    }



    FUNC_2(VAR_6->ctx, VAR_4);


    return VAR_2;
}
