
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_9__ {scalar_t__ len; } ;
struct TYPE_12__ {TYPE_3__ value; TYPE_2__ name; } ;
typedef TYPE_5__ ngx_http_v2_header_t ;
struct TYPE_11__ {size_t size; scalar_t__ free; size_t allocated; int deleted; TYPE_5__** entries; } ;
struct TYPE_13__ {TYPE_4__ hpack; TYPE_1__* connection; } ;
typedef TYPE_6__ ngx_http_v2_connection_t ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,size_t,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,size_t) ;

ngx_int_t
FUNC_2(ngx_http_v2_connection_t *VAR_5, size_t VAR_6)
{
    ssize_t VAR_7;
    ngx_http_v2_header_t *VAR_8;

    if (VAR_6 > VAR_1) {
        FUNC_1(VAR_3, VAR_5->connection->log, 0,
                      "client sent invalid table size update: %uz", VAR_6);

        return VAR_0;
    }

    FUNC_0(VAR_2, VAR_5->connection->log, 0,
                   "http2 new hpack table size: %uz was:%uz",
                   VAR_6, VAR_5->hpack.size);

    VAR_7 = VAR_5->hpack.size - VAR_6;

    while (VAR_7 > (ssize_t) VAR_5->hpack.free) {
        VAR_8 = VAR_5->hpack.entries[VAR_5->hpack.deleted++ % VAR_5->hpack.allocated];
        VAR_5->hpack.free += 32 + VAR_8->name.len + VAR_8->value.len;
    }

    VAR_5->hpack.size = VAR_6;
    VAR_5->hpack.free -= VAR_7;

    return VAR_4;
}
