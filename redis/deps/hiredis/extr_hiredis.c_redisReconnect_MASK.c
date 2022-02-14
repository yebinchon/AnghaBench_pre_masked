
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int path; } ;
struct TYPE_11__ {int source_addr; int port; int host; } ;
struct TYPE_13__ {scalar_t__ connection_type; int timeout; TYPE_3__ unix_sock; TYPE_2__ tcp; int reader; int obuf; int * privdata; TYPE_1__* funcs; int errstr; scalar_t__ err; } ;
typedef TYPE_4__ redisContext ;
struct TYPE_10__ {int (* free_privdata ) (int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (int ,char,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

int FUNC_11(redisContext *VAR_4) {
    VAR_4->err = 0;
    FUNC_1(VAR_4->errstr, '\0', FUNC_9(VAR_4->errstr));

    if (VAR_4->privdata && VAR_4->funcs->free_privdata) {
        VAR_4->funcs->free_privdata(VAR_4->privdata);
        VAR_4->privdata = ((void*)0);
    }

    FUNC_4(VAR_4);

    FUNC_8(VAR_4->obuf);
    FUNC_6(VAR_4->reader);

    VAR_4->obuf = FUNC_7();
    VAR_4->reader = FUNC_5();

    if (VAR_4->connection_type == VAR_0) {
        return FUNC_2(VAR_4, VAR_4->tcp.host, VAR_4->tcp.port,
                VAR_4->timeout, VAR_4->tcp.source_addr);
    } else if (VAR_4->connection_type == VAR_1) {
        return FUNC_3(VAR_4, VAR_4->unix_sock.path, VAR_4->timeout);
    } else {


        FUNC_0(VAR_4,VAR_3,"Not enough information to reconnect");
    }

    return VAR_2;
}
