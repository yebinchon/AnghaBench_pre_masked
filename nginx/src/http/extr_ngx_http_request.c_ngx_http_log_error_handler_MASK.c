
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef scalar_t__ u_char ;
struct TYPE_18__ {scalar_t__ name; TYPE_2__* sockaddr; } ;
struct TYPE_22__ {int uri; TYPE_3__ peer; int schema; } ;
typedef TYPE_7__ ngx_http_upstream_t ;
struct TYPE_21__ {TYPE_5__* referer; TYPE_4__* host; } ;
struct TYPE_15__ {scalar_t__* data; int len; } ;
struct TYPE_23__ {scalar_t__* request_start; TYPE_6__ headers_in; TYPE_7__* upstream; TYPE_10__ uri; TYPE_10__ request_line; TYPE_1__* header_in; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_24__ {TYPE_10__ server_name; } ;
typedef TYPE_9__ ngx_http_core_srv_conf_t ;
struct TYPE_20__ {TYPE_10__ value; } ;
struct TYPE_19__ {TYPE_10__ value; } ;
struct TYPE_17__ {scalar_t__ sa_family; } ;
struct TYPE_16__ {scalar_t__* last; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_9__* FUNC_0 (TYPE_8__*,int ) ;
 scalar_t__* FUNC_1 (scalar_t__*,size_t,char*,TYPE_10__*,...) ;

__attribute__((used)) static u_char *
FUNC_2(ngx_http_request_t *VAR_4, ngx_http_request_t *VAR_5,
    u_char *VAR_6, size_t VAR_7)
{
    char *VAR_8;
    u_char *VAR_9;
    ngx_http_upstream_t *VAR_10;
    ngx_http_core_srv_conf_t *VAR_11;

    VAR_11 = FUNC_0(VAR_4, VAR_3);

    VAR_9 = FUNC_1(VAR_6, VAR_7, ", server: %V", &VAR_11->server_name);
    VAR_7 -= VAR_9 - VAR_6;
    VAR_6 = VAR_9;

    if (VAR_4->request_line.data == ((void*)0) && VAR_4->request_start) {
        for (VAR_9 = VAR_4->request_start; VAR_9 < VAR_4->header_in->last; VAR_9++) {
            if (*VAR_9 == VAR_1 || *VAR_9 == VAR_2) {
                break;
            }
        }

        VAR_4->request_line.len = VAR_9 - VAR_4->request_start;
        VAR_4->request_line.data = VAR_4->request_start;
    }

    if (VAR_4->request_line.len) {
        VAR_9 = FUNC_1(VAR_6, VAR_7, ", request: \"%V\"", &VAR_4->request_line);
        VAR_7 -= VAR_9 - VAR_6;
        VAR_6 = VAR_9;
    }

    if (VAR_4 != VAR_5) {
        VAR_9 = FUNC_1(VAR_6, VAR_7, ", subrequest: \"%V\"", &VAR_5->uri);
        VAR_7 -= VAR_9 - VAR_6;
        VAR_6 = VAR_9;
    }

    VAR_10 = VAR_5->upstream;

    if (VAR_10 && VAR_10->peer.name) {

        VAR_8 = "";







        VAR_9 = FUNC_1(VAR_6, VAR_7, ", upstream: \"%V%V%s%V\"",
                         &VAR_10->schema, VAR_10->peer.name,
                         VAR_8, &VAR_10->uri);
        VAR_7 -= VAR_9 - VAR_6;
        VAR_6 = VAR_9;
    }

    if (VAR_4->headers_in.host) {
        VAR_9 = FUNC_1(VAR_6, VAR_7, ", host: \"%V\"",
                         &VAR_4->headers_in.host->value);
        VAR_7 -= VAR_9 - VAR_6;
        VAR_6 = VAR_9;
    }

    if (VAR_4->headers_in.referer) {
        VAR_9 = FUNC_1(VAR_6, VAR_7, ", referrer: \"%V\"",
                         &VAR_4->headers_in.referer->value);
        VAR_6 = VAR_9;
    }

    return VAR_6;
}
