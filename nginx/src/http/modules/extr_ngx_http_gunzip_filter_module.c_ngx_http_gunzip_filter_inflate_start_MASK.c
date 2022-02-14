
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {TYPE_3__* opaque; int zfree; int zalloc; scalar_t__ avail_in; int next_in; } ;
struct TYPE_9__ {int started; int flush; int out; int * last_out; TYPE_6__ zstream; } ;
typedef TYPE_3__ ngx_http_gunzip_ctx_t ;
struct TYPE_7__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_6__*,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_9,
    ngx_http_gunzip_ctx_t *VAR_10)
{
    int VAR_11;

    VAR_10->zstream.next_in = VAR_5;
    VAR_10->zstream.avail_in = 0;

    VAR_10->zstream.zalloc = VAR_7;
    VAR_10->zstream.zfree = VAR_8;
    VAR_10->zstream.opaque = VAR_10;


    VAR_11 = FUNC_0(&VAR_10->zstream, VAR_0 + 16);

    if (VAR_11 != VAR_6) {
        FUNC_1(VAR_2, VAR_9->connection->log, 0,
                      "inflateInit2() failed: %d", VAR_11);
        return VAR_1;
    }

    VAR_10->started = 1;

    VAR_10->last_out = &VAR_10->out;
    VAR_10->flush = VAR_4;

    return VAR_3;
}
