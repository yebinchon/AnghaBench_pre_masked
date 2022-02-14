
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
struct TYPE_12__ {int valid; } ;
struct TYPE_11__ {TYPE_2__ cursor; } ;
typedef TYPE_1__ ngx_rtmp_mp4_track_t ;
typedef TYPE_2__ ngx_rtmp_mp4_cursor_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_rtmp_session_t *VAR_2, ngx_rtmp_mp4_track_t *VAR_3,
                        ngx_int_t VAR_4)
{
    ngx_rtmp_mp4_cursor_t *VAR_5;

    VAR_5 = &VAR_3->cursor;
    FUNC_0(VAR_5, sizeof(*VAR_5));

    if (FUNC_6(VAR_2, VAR_3, FUNC_1(
                          VAR_3, VAR_4)) != VAR_1 ||
        FUNC_4(VAR_2, VAR_3) != VAR_1 ||
        FUNC_2(VAR_2, VAR_3) != VAR_1 ||
        FUNC_5(VAR_2, VAR_3) != VAR_1 ||
        FUNC_3(VAR_2, VAR_3) != VAR_1)
    {
        return VAR_0;
    }

    VAR_5->valid = 1;
    return VAR_1;
}
