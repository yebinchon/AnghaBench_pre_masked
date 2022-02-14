
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int listNode ;
typedef int id ;
struct TYPE_6__ {int flags; scalar_t__ replstate; int * conn; int * client_list_node; int id; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {int rdb_pipe_numconns; int unblocked_clients; int clients_pending_read; int clients_pending_write; int ** rdb_pipe_conns; int clients; int clients_index; TYPE_1__* current_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,unsigned char*,int,int *) ;
 int FUNC_6 (int *) ;
 TYPE_3__ VAR_6 ;
 int FUNC_7 (int ) ;

void FUNC_8(client *VAR_7) {
    listNode *VAR_8;


    if (VAR_6.current_client == VAR_7) VAR_6.current_client = ((void*)0);




    if (VAR_7->conn) {

        if (VAR_7->client_list_node) {
            uint64_t VAR_9 = FUNC_2(VAR_7->id);
            FUNC_5(VAR_6.clients_index,(unsigned char*)&VAR_9,sizeof(VAR_9),((void*)0));
            FUNC_3(VAR_6.clients,VAR_7->client_list_node);
            VAR_7->client_list_node = ((void*)0);
        }



        if (VAR_7->flags & VAR_2 &&
            VAR_7->replstate == VAR_5 &&
            VAR_6.rdb_pipe_conns)
        {
            int VAR_10;
            for (VAR_10=0; VAR_10 < VAR_6.rdb_pipe_numconns; VAR_10++) {
                if (VAR_6.rdb_pipe_conns[VAR_10] == VAR_7->conn) {
                    FUNC_6(VAR_7->conn);
                    VAR_6.rdb_pipe_conns[VAR_10] = ((void*)0);
                    break;
                }
            }
        }
        FUNC_0(VAR_7->conn);
        VAR_7->conn = ((void*)0);
    }


    if (VAR_7->flags & VAR_1) {
        VAR_8 = FUNC_4(VAR_6.clients_pending_write,VAR_7);
        FUNC_7(VAR_8 != ((void*)0));
        FUNC_3(VAR_6.clients_pending_write,VAR_8);
        VAR_7->flags &= ~VAR_1;
    }


    if (VAR_7->flags & VAR_0) {
        VAR_8 = FUNC_4(VAR_6.clients_pending_read,VAR_7);
        FUNC_7(VAR_8 != ((void*)0));
        FUNC_3(VAR_6.clients_pending_read,VAR_8);
        VAR_7->flags &= ~VAR_0;
    }



    if (VAR_7->flags & VAR_4) {
        VAR_8 = FUNC_4(VAR_6.unblocked_clients,VAR_7);
        FUNC_7(VAR_8 != ((void*)0));
        FUNC_3(VAR_6.unblocked_clients,VAR_8);
        VAR_7->flags &= ~VAR_4;
    }


    if (VAR_7->flags & VAR_3) FUNC_1(VAR_7);
}
