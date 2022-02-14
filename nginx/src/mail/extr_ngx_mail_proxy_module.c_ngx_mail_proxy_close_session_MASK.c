
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_5__* connection; TYPE_2__* proxy; } ;
typedef TYPE_3__ ngx_mail_session_t ;
struct TYPE_11__ {int fd; } ;
struct TYPE_10__ {int log; } ;
struct TYPE_7__ {TYPE_6__* connection; } ;
struct TYPE_8__ {TYPE_1__ upstream; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_3(ngx_mail_session_t *VAR_1)
{
    if (VAR_1->proxy->upstream.connection) {
        FUNC_1(VAR_0, VAR_1->connection->log, 0,
                       "close mail proxy connection: %d",
                       VAR_1->proxy->upstream.connection->fd);

        FUNC_0(VAR_1->proxy->upstream.connection);
    }

    FUNC_2(VAR_1->connection);
}
