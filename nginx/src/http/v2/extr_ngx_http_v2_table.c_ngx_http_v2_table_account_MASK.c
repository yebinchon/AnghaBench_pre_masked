
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


typedef int ngx_int_t ;
struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_9__ {scalar_t__ len; } ;
struct TYPE_12__ {TYPE_3__ value; TYPE_2__ name; } ;
typedef TYPE_5__ ngx_http_v2_header_t ;
struct TYPE_11__ {size_t free; size_t size; size_t allocated; int deleted; TYPE_5__** entries; int added; } ;
struct TYPE_13__ {TYPE_4__ hpack; TYPE_1__* connection; } ;
typedef TYPE_6__ ngx_http_v2_connection_t ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,size_t,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_v2_connection_t *VAR_3, size_t VAR_4)
{
    ngx_http_v2_header_t *VAR_5;

    VAR_4 += 32;

    FUNC_0(VAR_1, VAR_3->connection->log, 0,
                   "http2 table account: %uz free:%uz",
                   VAR_4, VAR_3->hpack.free);

    if (VAR_4 <= VAR_3->hpack.free) {
        VAR_3->hpack.free -= VAR_4;
        return VAR_2;
    }

    if (VAR_4 > VAR_3->hpack.size) {
        VAR_3->hpack.deleted = VAR_3->hpack.added;
        VAR_3->hpack.free = VAR_3->hpack.size;
        return VAR_0;
    }

    do {
        VAR_5 = VAR_3->hpack.entries[VAR_3->hpack.deleted++ % VAR_3->hpack.allocated];
        VAR_3->hpack.free += 32 + VAR_5->name.len + VAR_5->value.len;
    } while (VAR_4 > VAR_3->hpack.free);

    VAR_3->hpack.free -= VAR_4;

    return VAR_2;
}
