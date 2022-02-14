
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_9__ {scalar_t__ accessed; scalar_t__ checked; scalar_t__ fails; } ;
typedef TYPE_2__ ngx_stream_upstream_rr_peer_t ;
struct TYPE_10__ {int peers; TYPE_2__* current; } ;
typedef TYPE_3__ ngx_stream_upstream_rr_peer_data_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_peer_connection_t ;
struct TYPE_8__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(ngx_peer_connection_t *VAR_2,
    void *VAR_3, ngx_uint_t VAR_4)
{
    ngx_stream_upstream_rr_peer_data_t *VAR_5 = VAR_3;

    ngx_stream_upstream_rr_peer_t *VAR_6;

    VAR_6 = VAR_5->current;

    if (VAR_4 == VAR_0
        && VAR_2->connection->type == VAR_1)
    {
        FUNC_2(VAR_5->peers);
        FUNC_0(VAR_5->peers, VAR_6);

        if (VAR_6->accessed < VAR_6->checked) {
            VAR_6->fails = 0;
        }

        FUNC_1(VAR_5->peers, VAR_6);
        FUNC_3(VAR_5->peers);
    }
}
