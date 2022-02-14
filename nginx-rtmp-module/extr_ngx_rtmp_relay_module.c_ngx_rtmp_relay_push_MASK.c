
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_10__ {int url; } ;
struct TYPE_12__ {TYPE_2__ url; int play_path; int app; } ;
typedef TYPE_4__ ngx_rtmp_relay_target_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,int *,int *,int *,int *) ;
 int FUNC_1 (TYPE_3__*,int *,TYPE_4__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_3, ngx_str_t *VAR_4,
        ngx_rtmp_relay_target_t *VAR_5)
{
    FUNC_0(VAR_0, VAR_3->connection->log, 0,
            "relay: create push name='%V' app='%V' playpath='%V' url='%V'",
            VAR_4, &VAR_5->app, &VAR_5->play_path, &VAR_5->url.url);

    return FUNC_1(VAR_3, VAR_4, VAR_5,
            VAR_1,
            VAR_2);
}
