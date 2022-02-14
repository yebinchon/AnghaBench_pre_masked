
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_11__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_14__ {TYPE_3__* opaque; int zfree; int zalloc; } ;
struct TYPE_12__ {int flush; int out; int * last_out; int memlevel; scalar_t__ wbits; TYPE_9__ zstream; int * preallocated; int * free_mem; int allocated; } ;
typedef TYPE_3__ ngx_http_gzip_ctx_t ;
struct TYPE_13__ {scalar_t__ level; } ;
typedef TYPE_4__ ngx_http_gzip_conf_t ;
struct TYPE_10__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_9__*,int,int ,scalar_t__,int ,int ) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int ,char*,int) ;
 int * FUNC_3 (int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_10,
    ngx_http_gzip_ctx_t *VAR_11)
{
    int VAR_12;
    ngx_http_gzip_conf_t *VAR_13;

    VAR_13 = FUNC_1(VAR_10, VAR_9);

    VAR_11->preallocated = FUNC_3(VAR_10->pool, VAR_11->allocated);
    if (VAR_11->preallocated == ((void*)0)) {
        return VAR_0;
    }

    VAR_11->free_mem = VAR_11->preallocated;

    VAR_11->zstream.zalloc = VAR_7;
    VAR_11->zstream.zfree = VAR_8;
    VAR_11->zstream.opaque = VAR_11;

    VAR_12 = FUNC_0(&VAR_11->zstream, (int) VAR_13->level, VAR_4,
                      VAR_11->wbits + 16, VAR_11->memlevel, VAR_3);

    if (VAR_12 != VAR_6) {
        FUNC_2(VAR_1, VAR_10->connection->log, 0,
                      "deflateInit2() failed: %d", VAR_12);
        return VAR_0;
    }

    VAR_11->last_out = &VAR_11->out;
    VAR_11->flush = VAR_5;

    return VAR_2;
}
