
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {scalar_t__ fd; scalar_t__ size; int * log; } ;
typedef TYPE_1__ ngx_rtmp_mpegts_file_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_1 (int ,int *,int ,char*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

ngx_int_t
FUNC_4(ngx_rtmp_mpegts_file_t *VAR_8, u_char *VAR_9,
    ngx_log_t *VAR_10)
{
    VAR_8->log = VAR_10;

    VAR_8->fd = FUNC_2(VAR_9, VAR_3, VAR_2,
                             VAR_1);

    if (VAR_8->fd == VAR_4) {
        FUNC_1(VAR_5, VAR_10, VAR_7,
                      "hls: error creating fragment file");
        return VAR_0;
    }

    VAR_8->size = 0;

    if (FUNC_3(VAR_8) != VAR_6) {
        FUNC_1(VAR_5, VAR_10, VAR_7,
                      "hls: error writing fragment header");
        FUNC_0(VAR_8->fd);
        return VAR_0;
    }

    return VAR_6;
}
