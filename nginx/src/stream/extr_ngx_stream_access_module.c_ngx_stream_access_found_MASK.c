
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_5__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_stream_session_t ;
typedef int ngx_int_t ;
struct TYPE_4__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_stream_session_t *VAR_3, ngx_uint_t VAR_4)
{
    if (VAR_4) {
        FUNC_0(VAR_0, VAR_3->connection->log, 0,
                      "access forbidden by rule");
        return VAR_2;
    }

    return VAR_1;
}
