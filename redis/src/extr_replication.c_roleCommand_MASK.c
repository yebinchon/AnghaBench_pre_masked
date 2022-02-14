
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
typedef int ip ;
struct TYPE_16__ {char* slave_ip; scalar_t__ replstate; int repl_ack_off; int slave_listening_port; int conn; } ;
typedef TYPE_3__ client ;
struct TYPE_17__ {char* masterhost; int master_repl_offset; int masterport; int repl_state; TYPE_1__* master; int slaves; } ;
struct TYPE_14__ {int reploff; } ;


 int VAR_0 ;





 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 void* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int ,char*,int,int *) ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 TYPE_5__ VAR_2 ;
 int FUNC_9 (TYPE_3__*,void*,int) ;
 scalar_t__ FUNC_10 () ;

void FUNC_11(client *VAR_3) {
    if (VAR_2.masterhost == ((void*)0)) {
        listIter VAR_4;
        listNode *VAR_5;
        void *VAR_6;
        int VAR_7 = 0;

        FUNC_0(VAR_3,3);
        FUNC_1(VAR_3,"master",6);
        FUNC_5(VAR_3,VAR_2.master_repl_offset);
        VAR_6 = FUNC_4(VAR_3);
        FUNC_8(VAR_2.slaves,&VAR_4);
        while((VAR_5 = FUNC_7(&VAR_4))) {
            client *VAR_8 = VAR_5->value;
            char VAR_9[VAR_0], *VAR_10 = VAR_8->slave_ip;

            if (VAR_10[0] == '\0') {
                if (FUNC_6(VAR_8->conn,VAR_9,sizeof(VAR_9),((void*)0)) == -1)
                    continue;
                VAR_10 = VAR_9;
            }
            if (VAR_8->replstate != VAR_1) continue;
            FUNC_0(VAR_3,3);
            FUNC_2(VAR_3,VAR_10);
            FUNC_3(VAR_3,VAR_8->slave_listening_port);
            FUNC_3(VAR_3,VAR_8->repl_ack_off);
            VAR_7++;
        }
        FUNC_9(VAR_3,VAR_6,VAR_7);
    } else {
        char *VAR_11 = ((void*)0);

        FUNC_0(VAR_3,5);
        FUNC_1(VAR_3,"slave",5);
        FUNC_2(VAR_3,VAR_2.masterhost);
        FUNC_5(VAR_3,VAR_2.masterport);
        if (FUNC_10()) {
            VAR_11 = "handshake";
        } else {
            switch(VAR_2.repl_state) {
            case 129: VAR_11 = "none"; break;
            case 132: VAR_11 = "connect"; break;
            case 130: VAR_11 = "connecting"; break;
            case 128: VAR_11 = "sync"; break;
            case 131: VAR_11 = "connected"; break;
            default: VAR_11 = "unknown"; break;
            }
        }
        FUNC_2(VAR_3,VAR_11);
        FUNC_5(VAR_3,VAR_2.master ? VAR_2.master->reploff : -1);
    }
}
