
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct redis_stat {scalar_t__ st_size; } ;
struct TYPE_7__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_8__ {scalar_t__ replstate; int slave_capa; int repl_put_online_on_ack; int repldbfd; int conn; scalar_t__ repldbsize; int replpreamble; scalar_t__ repldboff; int repl_ack_time; } ;
typedef TYPE_2__ client ;
struct TYPE_9__ {int rdb_filename; int unixtime; int slaves; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int *) ;
 int VAR_10 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,struct redis_stat*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,char*,unsigned long long) ;
 int FUNC_8 () ;
 int * VAR_11 ;
 TYPE_3__ VAR_12 ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;

void FUNC_12(int VAR_13, int VAR_14) {
    listNode *VAR_15;
    int VAR_16 = 0;
    int VAR_17 = -1;
    listIter VAR_18;

    FUNC_3(VAR_12.slaves,&VAR_18);
    while((VAR_15 = FUNC_2(&VAR_18))) {
        client *VAR_19 = VAR_15->value;

        if (VAR_19->replstate == VAR_9) {
            VAR_16 = 1;
            VAR_17 = (VAR_17 == -1) ? VAR_19->slave_capa :
                                        (VAR_17 & VAR_19->slave_capa);
        } else if (VAR_19->replstate == VAR_8) {
            struct redis_stat VAR_20;






            if (VAR_14 == VAR_5) {
                FUNC_9(VAR_2,
                    "Streamed RDB transfer with replica %s succeeded (socket). Waiting for REPLCONF ACK from slave to enable streaming",
                        FUNC_6(VAR_19));
                VAR_19->replstate = VAR_6;
                VAR_19->repl_put_online_on_ack = 1;
                VAR_19->repl_ack_time = VAR_12.unixtime;
            } else {
                if (VAR_13 != VAR_1) {
                    FUNC_1(VAR_19);
                    FUNC_9(VAR_3,"SYNC failed. BGSAVE child returned an error");
                    continue;
                }
                if ((VAR_19->repldbfd = FUNC_4(VAR_12.rdb_filename,VAR_4)) == -1 ||
                    FUNC_5(VAR_19->repldbfd,&VAR_20) == -1) {
                    FUNC_1(VAR_19);
                    FUNC_9(VAR_3,"SYNC failed. Can't open/stat DB after BGSAVE: %s", FUNC_11(VAR_10));
                    continue;
                }
                VAR_19->repldboff = 0;
                VAR_19->repldbsize = VAR_20.st_size;
                VAR_19->replstate = VAR_7;
                VAR_19->replpreamble = FUNC_7(FUNC_8(),"$%lld\r\n",
                    (unsigned long long) VAR_19->repldbsize);

                FUNC_0(VAR_19->conn,((void*)0));
                if (FUNC_0(VAR_19->conn,VAR_11) == VAR_0) {
                    FUNC_1(VAR_19);
                    continue;
                }
            }
        }
    }
    if (VAR_16) FUNC_10(VAR_17);
}
