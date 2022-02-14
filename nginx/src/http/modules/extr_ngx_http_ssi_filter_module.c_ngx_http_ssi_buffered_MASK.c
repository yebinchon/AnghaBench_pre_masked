
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ buf; scalar_t__ in; } ;
typedef TYPE_1__ ngx_http_ssi_ctx_t ;
struct TYPE_6__ {int buffered; } ;
typedef TYPE_2__ ngx_http_request_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(ngx_http_request_t *VAR_1, ngx_http_ssi_ctx_t *VAR_2)
{
    if (VAR_2->in || VAR_2->buf) {
        VAR_1->buffered |= VAR_0;

    } else {
        VAR_1->buffered &= ~VAR_0;
    }
}
