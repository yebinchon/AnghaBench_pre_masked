
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ssl_enable; int ssl_passwords; int ssl_certificate_key; int ssl_certificate; int ssl_crl; int ssl_trusted_certificate; int ssl_verify_depth; scalar_t__ ssl_verify; scalar_t__ ssl_server_name; int * ssl_name; int ssl_ciphers; int ssl_protocols; scalar_t__ ssl_session_reuse; scalar_t__ socket_keepalive; int local; scalar_t__ proxy_protocol; scalar_t__ next_upstream; int next_upstream_tries; int responses; int requests; int * download_rate; int * upload_rate; int buffer_size; int next_upstream_timeout; int timeout; int connect_timeout; } ;
typedef TYPE_1__ ngx_stream_proxy_srv_conf_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static char *
FUNC_8(ngx_conf_t *VAR_8, void *VAR_9, void *VAR_10)
{
    ngx_stream_proxy_srv_conf_t *VAR_11 = VAR_9;
    ngx_stream_proxy_srv_conf_t *VAR_12 = VAR_10;

    FUNC_1(VAR_12->connect_timeout,
                              VAR_11->connect_timeout, 60000);

    FUNC_1(VAR_12->timeout,
                              VAR_11->timeout, 10 * 60000);

    FUNC_1(VAR_12->next_upstream_timeout,
                              VAR_11->next_upstream_timeout, 0);

    FUNC_3(VAR_12->buffer_size,
                              VAR_11->buffer_size, 16384);

    if (VAR_12->upload_rate == ((void*)0)) {
        VAR_12->upload_rate = VAR_11->upload_rate;
    }

    if (VAR_12->download_rate == ((void*)0)) {
        VAR_12->download_rate = VAR_11->download_rate;
    }

    FUNC_5(VAR_12->requests,
                              VAR_11->requests, 0);

    FUNC_5(VAR_12->responses,
                              VAR_11->responses, VAR_3);

    FUNC_5(VAR_12->next_upstream_tries,
                              VAR_11->next_upstream_tries, 0);

    FUNC_6(VAR_12->next_upstream, VAR_11->next_upstream, 1);

    FUNC_6(VAR_12->proxy_protocol, VAR_11->proxy_protocol, 0);

    FUNC_2(VAR_12->local, VAR_11->local, ((void*)0));

    FUNC_6(VAR_12->socket_keepalive,
                              VAR_11->socket_keepalive, 0);
    return VAR_2;
}
