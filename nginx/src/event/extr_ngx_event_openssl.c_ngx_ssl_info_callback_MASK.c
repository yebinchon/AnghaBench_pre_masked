
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_ssl_conn_t ;
struct TYPE_5__ {TYPE_1__* ssl; int log; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_4__ {int renegotiation; int handshake_buffer_set; scalar_t__ handshaked; } ;
typedef int BIO ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int const*) ;
 int * FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 TYPE_2__* FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(const ngx_ssl_conn_t *VAR_4, int VAR_5, int VAR_6)
{
    BIO *VAR_7, *VAR_8;
    ngx_connection_t *VAR_9;



    if ((VAR_5 & VAR_3)
        && FUNC_3((ngx_ssl_conn_t *) VAR_4))
    {
        VAR_9 = FUNC_5((ngx_ssl_conn_t *) VAR_4);

        if (VAR_9->ssl->handshaked) {
            VAR_9->ssl->renegotiation = 1;
            FUNC_4(VAR_0, VAR_9->log, 0, "SSL renegotiation");
        }
    }



    if ((VAR_5 & VAR_2) == VAR_2) {
        VAR_9 = FUNC_5((ngx_ssl_conn_t *) VAR_4);

        if (!VAR_9->ssl->handshake_buffer_set) {
            VAR_7 = FUNC_1(VAR_4);
            VAR_8 = FUNC_2(VAR_4);

            if (VAR_7 != VAR_8) {
                (void) FUNC_0(VAR_8, VAR_1);
                VAR_9->ssl->handshake_buffer_set = 1;
            }
        }
    }
}
