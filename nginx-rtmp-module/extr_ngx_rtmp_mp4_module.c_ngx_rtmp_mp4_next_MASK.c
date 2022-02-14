
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
struct TYPE_9__ {int valid; } ;
struct TYPE_10__ {TYPE_1__ cursor; } ;
typedef TYPE_2__ ngx_rtmp_mp4_track_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_2, ngx_rtmp_mp4_track_t *VAR_3)
{
    if (FUNC_4(VAR_2, VAR_3) != VAR_1 ||
        FUNC_2(VAR_2, VAR_3) != VAR_1 ||
        FUNC_0(VAR_2, VAR_3) != VAR_1 ||
        FUNC_3(VAR_2, VAR_3) != VAR_1 ||
        FUNC_1(VAR_2, VAR_3) != VAR_1)
    {
        VAR_3->cursor.valid = 0;
        return VAR_0;
    }

    VAR_3->cursor.valid = 1;
    return VAR_1;
}
