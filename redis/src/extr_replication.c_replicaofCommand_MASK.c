
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sds ;
struct TYPE_11__ {int flags; TYPE_6__** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_14__ {char* ptr; } ;
struct TYPE_13__ {char* masterhost; scalar_t__ aof_state; long masterport; scalar_t__ aof_enabled; scalar_t__ cluster_enabled; } ;
struct TYPE_12__ {int ok; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_6__*,long*,int *) ;
 int FUNC_5 (char*,long) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 TYPE_3__ VAR_4 ;
 int FUNC_11 (int ,char*,...) ;
 TYPE_2__ VAR_5 ;
 int FUNC_12 (char*,char*) ;

void FUNC_13(client *VAR_6) {


    if (VAR_4.cluster_enabled) {
        FUNC_1(VAR_6,"REPLICAOF not allowed in cluster mode.");
        return;
    }



    if (!FUNC_12(VAR_6->argv[1]->ptr,"no") &&
        !FUNC_12(VAR_6->argv[2]->ptr,"one")) {
        if (VAR_4.masterhost) {
            FUNC_6();
            sds VAR_7 = FUNC_3(FUNC_8(),VAR_6);
            FUNC_11(VAR_3,"MASTER MODE enabled (user request from '%s')",
                VAR_7);
            FUNC_9(VAR_7);


            if (VAR_4.aof_enabled && VAR_4.aof_state == VAR_0) FUNC_7();
        }
    } else {
        long VAR_8;

        if (VAR_6->flags & VAR_1)
        {



            FUNC_1(VAR_6, "Command is not valid when client is a replica.");
            return;
        }

        if ((FUNC_4(VAR_6, VAR_6->argv[2], &VAR_8, ((void*)0)) != VAR_2))
            return;


        if (VAR_4.masterhost && !FUNC_12(VAR_4.masterhost,VAR_6->argv[1]->ptr)
            && VAR_4.masterport == VAR_8) {
            FUNC_11(VAR_3,"REPLICAOF would result into synchronization "
                                "with the master we are already connected "
                                "with. No operation performed.");
            FUNC_2(VAR_6,FUNC_10("+OK Already connected to specified "
                                 "master\r\n"));
            return;
        }


        FUNC_5(VAR_6->argv[1]->ptr, VAR_8);
        sds VAR_9 = FUNC_3(FUNC_8(),VAR_6);
        FUNC_11(VAR_3,"REPLICAOF %s:%d enabled (user request from '%s')",
            VAR_4.masterhost, VAR_4.masterport, VAR_9);
        FUNC_9(VAR_9);
    }
    FUNC_0(VAR_6,VAR_5.ok);
}
