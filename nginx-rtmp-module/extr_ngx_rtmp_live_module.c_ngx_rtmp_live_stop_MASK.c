
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
struct TYPE_3__ {scalar_t__ publish_notify; scalar_t__ play_restart; } ;
typedef TYPE_1__ ngx_rtmp_live_app_conf_t ;
typedef int ngx_rtmp_core_srv_conf_t ;
typedef int ngx_chain_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,char*,char*,char*) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *,int **,size_t,int ) ;

__attribute__((used)) static void
FUNC_6(ngx_rtmp_session_t *VAR_3)
{
    ngx_rtmp_core_srv_conf_t *VAR_4;
    ngx_rtmp_live_app_conf_t *VAR_5;
    ngx_chain_t *VAR_6;
    ngx_chain_t *VAR_7[3];
    size_t VAR_8, VAR_9;

    VAR_4 = FUNC_4(VAR_3, VAR_1);

    VAR_5 = FUNC_3(VAR_3, VAR_2);

    VAR_6 = FUNC_1(VAR_3, VAR_0);

    VAR_9 = 0;

    if (VAR_5->play_restart) {
        VAR_7[VAR_9++] = FUNC_0(VAR_3, "NetStream.Play.Stop",
                                                   "status", "Stop live");
    }

    if (VAR_5->publish_notify) {
        VAR_7[VAR_9++] = FUNC_0(VAR_3,
                                               "NetStream.Play.UnpublishNotify",
                                               "status", "Stop publishing");
    }

    FUNC_5(VAR_3, VAR_6, VAR_7, VAR_9, 0);

    if (VAR_6) {
        FUNC_2(VAR_4, VAR_6);
    }

    for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
        FUNC_2(VAR_4, VAR_7[VAR_8]);
    }
}
