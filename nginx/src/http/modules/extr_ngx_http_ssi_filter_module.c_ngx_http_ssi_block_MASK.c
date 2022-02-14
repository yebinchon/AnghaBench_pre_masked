
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int block; scalar_t__ output; int * blocks; } ;
typedef TYPE_2__ ngx_http_ssi_ctx_t ;
struct TYPE_11__ {scalar_t__ count; int * bufs; int name; } ;
typedef TYPE_3__ ngx_http_ssi_block_t ;
struct TYPE_12__ {int pool; int main; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_9__ {int log; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_3__* FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_5, ngx_http_ssi_ctx_t *VAR_6,
    ngx_str_t **VAR_7)
{
    ngx_http_ssi_ctx_t *VAR_8;
    ngx_http_ssi_block_t *VAR_9;

    FUNC_3(VAR_2, VAR_5->connection->log, 0,
                   "ssi block");

    VAR_8 = FUNC_2(VAR_5->main, VAR_4);

    if (VAR_8->blocks == ((void*)0)) {
        VAR_8->blocks = FUNC_0(VAR_5->pool, 4,
                                        sizeof(ngx_http_ssi_block_t));
        if (VAR_8->blocks == ((void*)0)) {
            return VAR_1;
        }
    }

    VAR_9 = FUNC_1(VAR_8->blocks);
    if (VAR_9 == ((void*)0)) {
        return VAR_1;
    }

    VAR_9->name = *VAR_7[VAR_0];
    VAR_9->bufs = ((void*)0);
    VAR_9->count = 0;

    VAR_6->output = 0;
    VAR_6->block = 1;

    return VAR_3;
}
