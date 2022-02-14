
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
struct TYPE_5__ {int file; TYPE_1__* fmt; } ;
typedef TYPE_2__ ngx_rtmp_play_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_4__ {scalar_t__ (* done ) (int *,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_3)
{
    ngx_rtmp_play_ctx_t *VAR_4;

    VAR_4 = FUNC_0(VAR_3, VAR_2);

    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_4->fmt && VAR_4->fmt->done &&
        VAR_4->fmt->done(VAR_3, &VAR_4->file) != VAR_1)
    {
        return VAR_0;
    }

    return VAR_1;
}
