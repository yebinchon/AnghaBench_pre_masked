
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_11__ {scalar_t__ opened; int file; int frag; } ;
typedef TYPE_3__ ngx_rtmp_hls_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_3)
{
    ngx_rtmp_hls_ctx_t *VAR_4;

    VAR_4 = FUNC_1(VAR_3, VAR_2);
    if (VAR_4 == ((void*)0) || !VAR_4->opened) {
        return VAR_1;
    }

    FUNC_0(VAR_0, VAR_3->connection->log, 0,
                   "hls: close fragment n=%uL", VAR_4->frag);

    FUNC_4(&VAR_4->file);

    VAR_4->opened = 0;

    FUNC_2(VAR_3);

    FUNC_3(VAR_3);

    return VAR_1;
}
