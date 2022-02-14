
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int conninfo ;
typedef int connection ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_5__ {scalar_t__ maxclients; int stat_rejected_conn; int clients; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int ) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_10 (int ,char*,int ,int ) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(connection *VAR_4, int VAR_5, char *VAR_6) {
    client *VAR_7;
    FUNC_0(VAR_6);





    if (FUNC_9(VAR_3.clients) >= VAR_3.maxclients) {
        char *VAR_8 = "-ERR max number of clients reached\r\n";





        if (FUNC_6(VAR_4,VAR_8,FUNC_11(VAR_8)) == -1) {

        }
        VAR_3.stat_rejected_conn++;
        FUNC_2(VAR_4);
        return;
    }


    if ((VAR_7 = FUNC_7(VAR_4)) == ((void*)0)) {
        char VAR_9[100];
        FUNC_10(VAR_1,
            "Error registering fd event for the new client: %s (conn: %s)",
            FUNC_4(VAR_4),
            FUNC_3(VAR_4, VAR_9, sizeof(VAR_9)));
        FUNC_2(VAR_4);
        return;
    }


    VAR_7->flags |= VAR_5;
    if (FUNC_1(VAR_4, VAR_2) == VAR_0) {
        char VAR_10[100];
        FUNC_10(VAR_1,
                "Error accepting a client connection: %s (conn: %s)",
                FUNC_4(VAR_4), FUNC_3(VAR_4, VAR_10, sizeof(VAR_10)));
        FUNC_8(FUNC_5(VAR_4));
        return;
    }
}
