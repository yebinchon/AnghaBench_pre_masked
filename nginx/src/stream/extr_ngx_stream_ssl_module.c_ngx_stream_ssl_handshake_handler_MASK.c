
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_stream_session_t ;
struct TYPE_6__ {TYPE_4__* read; TYPE_1__* ssl; int * data; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_7__ {scalar_t__ timer_set; } ;
struct TYPE_5__ {int handshaked; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(ngx_connection_t *VAR_1)
{
    ngx_stream_session_t *VAR_2;

    VAR_2 = VAR_1->data;

    if (!VAR_1->ssl->handshaked) {
        FUNC_2(VAR_2, VAR_0);
        return;
    }

    if (VAR_1->read->timer_set) {
        FUNC_0(VAR_1->read);
    }

    FUNC_1(VAR_2);
}
