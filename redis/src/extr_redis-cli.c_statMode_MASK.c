
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; char* str; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_6__ {int interval; } ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,long) ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,...) ;
 TYPE_1__* FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char*,long,...) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void) {
    redisReply *VAR_4;
    long VAR_5, VAR_6 = 0;
    int VAR_7 = 0;

    while(1) {
        char VAR_8[64];
        int VAR_9;

        VAR_4 = FUNC_5(VAR_3,"INFO");
        if (VAR_4->type == VAR_1) {
            FUNC_4("ERROR: %s\n", VAR_4->str);
            FUNC_1(1);
        }

        if ((VAR_7++ % 20) == 0) {
            FUNC_4(
"------- data ------ --------------------- load -------------------- - child -\n"
"keys       mem      clients blocked requests            connections          \n");
        }


        VAR_5 = 0;
        for (VAR_9 = 0; VAR_9 < 20; VAR_9++) {
            long VAR_10;

            FUNC_6(VAR_8,"db%d:keys",VAR_9);
            VAR_10 = FUNC_3(VAR_4->str,VAR_8);
            if (VAR_10 == VAR_0) continue;
            VAR_5 += VAR_10;
        }
        FUNC_6(VAR_8,"%ld",VAR_5);
        FUNC_4("%-11s",VAR_8);


        VAR_5 = FUNC_3(VAR_4->str,"used_memory");
        FUNC_0(VAR_8,VAR_5);
        FUNC_4("%-8s",VAR_8);


        VAR_5 = FUNC_3(VAR_4->str,"connected_clients");
        FUNC_6(VAR_8,"%ld",VAR_5);
        FUNC_4(" %-8s",VAR_8);


        VAR_5 = FUNC_3(VAR_4->str,"blocked_clients");
        FUNC_6(VAR_8,"%ld",VAR_5);
        FUNC_4("%-8s",VAR_8);


        VAR_5 = FUNC_3(VAR_4->str,"total_commands_processed");
        FUNC_6(VAR_8,"%ld (+%ld)",VAR_5,VAR_6 == 0 ? 0 : VAR_5-VAR_6);
        FUNC_4("%-19s",VAR_8);
        VAR_6 = VAR_5;


        VAR_5 = FUNC_3(VAR_4->str,"total_connections_received");
        FUNC_6(VAR_8,"%ld",VAR_5);
        FUNC_4(" %-12s",VAR_8);


        VAR_5 = FUNC_3(VAR_4->str,"bgsave_in_progress");
        VAR_5 |= FUNC_3(VAR_4->str,"aof_rewrite_in_progress") << 1;
        VAR_5 |= FUNC_3(VAR_4->str,"loading") << 2;
        switch(VAR_5) {
        case 0: break;
        case 1:
            FUNC_4("SAVE");
            break;
        case 2:
            FUNC_4("AOF");
            break;
        case 3:
            FUNC_4("SAVE+AOF");
            break;
        case 4:
            FUNC_4("LOAD");
            break;
        }

        FUNC_4("\n");
        FUNC_2(VAR_4);
        FUNC_7(VAR_2.interval);
    }
}
