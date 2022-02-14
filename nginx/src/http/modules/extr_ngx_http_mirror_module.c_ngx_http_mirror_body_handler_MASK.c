
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int preserve_body; int (* write_event_handler ) (TYPE_1__*) ;} ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_9__ {int status; } ;
typedef TYPE_2__ ngx_http_mirror_ctx_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(ngx_http_request_t *VAR_1)
{
    ngx_http_mirror_ctx_t *VAR_2;

    VAR_2 = FUNC_1(VAR_1, VAR_0);

    VAR_2->status = FUNC_2(VAR_1);

    VAR_1->preserve_body = 1;

    VAR_1->write_event_handler = FUNC_0;
    FUNC_0(VAR_1);
}
