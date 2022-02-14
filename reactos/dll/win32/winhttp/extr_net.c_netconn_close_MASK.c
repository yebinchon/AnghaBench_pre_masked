
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int host; int socket; int ssl_ctx; struct TYPE_4__* extra_buf; struct TYPE_4__* ssl_buf; struct TYPE_4__* peek_msg_mem; scalar_t__ secure; } ;
typedef TYPE_1__ netconn_t ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

BOOL FUNC_6( netconn_t *VAR_3 )
{
    int VAR_4;

    if (VAR_3->secure)
    {
        FUNC_2( VAR_3->peek_msg_mem );
        FUNC_2(VAR_3->ssl_buf);
        FUNC_2(VAR_3->extra_buf);
        FUNC_0(&VAR_3->ssl_ctx);
    }
    VAR_4 = FUNC_1( VAR_3->socket );
    FUNC_3( VAR_3->host );
    FUNC_2(VAR_3);
    if (VAR_4 == -1)
    {
        FUNC_4( FUNC_5( VAR_2 ) );
        return VAR_0;
    }
    return VAR_1;
}
