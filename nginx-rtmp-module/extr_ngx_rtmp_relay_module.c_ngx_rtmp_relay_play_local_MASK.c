
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
struct TYPE_7__ {int len; int data; } ;
struct TYPE_8__ {TYPE_1__ name; } ;
typedef TYPE_2__ ngx_rtmp_relay_ctx_t ;
struct TYPE_9__ {int silent; int name; } ;
typedef TYPE_3__ ngx_rtmp_play_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int,int ) ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_2)
{
    ngx_rtmp_play_t VAR_3;
    ngx_rtmp_relay_ctx_t *VAR_4;

    VAR_4 = FUNC_3(VAR_2, VAR_1);
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_1(&VAR_3, sizeof(ngx_rtmp_play_t));
    VAR_3.silent = 1;
    *(FUNC_0(VAR_3.name, VAR_4->name.data,
            FUNC_2(sizeof(VAR_3.name) - 1, VAR_4->name.len))) = 0;

    return FUNC_4(VAR_2, &VAR_3);
}
