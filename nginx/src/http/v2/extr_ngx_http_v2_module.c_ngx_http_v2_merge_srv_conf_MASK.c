
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idle_timeout; int recv_timeout; int streams_index_mask; int preread_size; int max_header_size; int max_field_size; int max_requests; int concurrent_pushes; int concurrent_streams; int pool_size; } ;
typedef TYPE_1__ ngx_http_v2_srv_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    ngx_http_v2_srv_conf_t *VAR_4 = VAR_2;
    ngx_http_v2_srv_conf_t *VAR_5 = VAR_3;

    FUNC_1(VAR_5->pool_size, VAR_4->pool_size, 4096);

    FUNC_2(VAR_5->concurrent_streams,
                              VAR_4->concurrent_streams, 128);
    FUNC_2(VAR_5->concurrent_pushes,
                              VAR_4->concurrent_pushes, 10);
    FUNC_2(VAR_5->max_requests, VAR_4->max_requests, 1000);

    FUNC_1(VAR_5->max_field_size, VAR_4->max_field_size,
                              4096);
    FUNC_1(VAR_5->max_header_size, VAR_4->max_header_size,
                              16384);

    FUNC_1(VAR_5->preread_size, VAR_4->preread_size, 65536);

    FUNC_2(VAR_5->streams_index_mask,
                              VAR_4->streams_index_mask, 32 - 1);

    FUNC_0(VAR_5->recv_timeout,
                              VAR_4->recv_timeout, 30000);
    FUNC_0(VAR_5->idle_timeout,
                              VAR_4->idle_timeout, 180000);

    return VAR_0;
}
