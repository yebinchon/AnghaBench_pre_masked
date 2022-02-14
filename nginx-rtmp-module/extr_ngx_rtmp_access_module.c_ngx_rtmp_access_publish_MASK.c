
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ auto_pushed; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_publish_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_3, ngx_rtmp_publish_t *VAR_4)
{
    if (VAR_3->auto_pushed) {
        goto next;
    }

    if (FUNC_1(VAR_3, VAR_2) != VAR_1) {
        return VAR_0;
    }

next:
    return FUNC_0(VAR_3, VAR_4);
}
