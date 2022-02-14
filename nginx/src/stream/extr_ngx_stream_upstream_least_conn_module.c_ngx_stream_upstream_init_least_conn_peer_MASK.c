
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_stream_upstream_srv_conf_t ;
struct TYPE_10__ {TYPE_3__* upstream; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_stream_session_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {int get; } ;
struct TYPE_9__ {TYPE_2__ peer; } ;
struct TYPE_7__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_stream_session_t *VAR_4,
    ngx_stream_upstream_srv_conf_t *VAR_5)
{
    FUNC_0(VAR_1, VAR_4->connection->log, 0,
                   "init least conn peer");

    if (FUNC_1(VAR_4, VAR_5) != VAR_2) {
        return VAR_0;
    }

    VAR_4->upstream->peer.get = VAR_3;

    return VAR_2;
}
