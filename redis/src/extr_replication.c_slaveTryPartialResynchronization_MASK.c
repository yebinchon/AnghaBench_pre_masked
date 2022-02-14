
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char* sds ;
typedef int psync_offset ;
typedef int connection ;
struct TYPE_4__ {int master_initial_offset; char* master_replid; char* replid2; char* replid; int * repl_backlog; TYPE_1__* cached_master; scalar_t__ master_repl_offset; scalar_t__ second_replid_offset; } ;
struct TYPE_3__ {char* replid; scalar_t__ reploff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 char* FUNC_9 (int ,int *,char*,...) ;
 TYPE_2__ VAR_11 ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (char*,int,char*,scalar_t__) ;
 char* FUNC_12 (char*,char) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*,int *,int) ;

int FUNC_16(connection *VAR_12, int VAR_13) {
    char *VAR_14;
    char VAR_15[32];
    sds VAR_16;


    if (!VAR_13) {





        VAR_11.master_initial_offset = -1;

        if (VAR_11.cached_master) {
            VAR_14 = VAR_11.cached_master->replid;
            FUNC_11(VAR_15,sizeof(VAR_15),"%lld", VAR_11.cached_master->reploff+1);
            FUNC_10(VAR_1,"Trying a partial resynchronization (request %s:%s).", VAR_14, VAR_15);
        } else {
            FUNC_10(VAR_1,"Partial resynchronization not possible (no cached master)");
            VAR_14 = "?";
            FUNC_3(VAR_15,"-1",3);
        }


        VAR_16 = FUNC_9(VAR_10,VAR_12,"PSYNC",VAR_14,VAR_15,((void*)0));
        if (VAR_16 != ((void*)0)) {
            FUNC_10(VAR_2,"Unable to send PSYNC to master: %s",VAR_16);
            FUNC_7(VAR_16);
            FUNC_0(VAR_12, ((void*)0));
            return VAR_8;
        }
        return VAR_7;
    }


    VAR_16 = FUNC_9(VAR_9,VAR_12,((void*)0));
    if (FUNC_8(VAR_16) == 0) {


        FUNC_7(VAR_16);
        return VAR_7;
    }

    FUNC_0(VAR_12, ((void*)0));

    if (!FUNC_14(VAR_16,"+FULLRESYNC",11)) {
        char *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);



        VAR_17 = FUNC_12(VAR_16,' ');
        if (VAR_17) {
            VAR_17++;
            VAR_18 = FUNC_12(VAR_17,' ');
            if (VAR_18) VAR_18++;
        }
        if (!VAR_17 || !VAR_18 || (VAR_18-VAR_17-1) != VAR_0) {
            FUNC_10(VAR_2,
                "Master replied with wrong +FULLRESYNC syntax.");




            FUNC_4(VAR_11.master_replid,0,VAR_0+1);
        } else {
            FUNC_3(VAR_11.master_replid, VAR_17, VAR_18-VAR_17-1);
            VAR_11.master_replid[VAR_0] = '\0';
            VAR_11.master_initial_offset = FUNC_15(VAR_18,((void*)0),10);
            FUNC_10(VAR_1,"Full resync from master: %s:%lld",
                VAR_11.master_replid,
                VAR_11.master_initial_offset);
        }

        FUNC_5();
        FUNC_7(VAR_16);
        return VAR_4;
    }

    if (!FUNC_14(VAR_16,"+CONTINUE",9)) {

        FUNC_10(VAR_1,
            "Successful partial resynchronization with master.");






        char *VAR_19 = VAR_16+10;
        char *VAR_20 = VAR_16+9;
        while(VAR_20[0] != '\r' && VAR_20[0] != '\n' && VAR_20[0] != '\0') VAR_20++;
        if (VAR_20-VAR_19 == VAR_0) {
            char VAR_21[VAR_0+1];
            FUNC_3(VAR_21,VAR_19,VAR_0);
            VAR_21[VAR_0] = '\0';

            if (FUNC_13(VAR_21,VAR_11.cached_master->replid)) {

                FUNC_10(VAR_2,"Master replication ID changed to %s",VAR_21);


                FUNC_3(VAR_11.replid2,VAR_11.cached_master->replid,
                    sizeof(VAR_11.replid2));
                VAR_11.second_replid_offset = VAR_11.master_repl_offset+1;



                FUNC_3(VAR_11.replid,VAR_21,sizeof(VAR_11.replid));
                FUNC_3(VAR_11.cached_master->replid,VAR_21,sizeof(VAR_11.replid));


                FUNC_2();
            }
        }


        FUNC_7(VAR_16);
        FUNC_6(VAR_12);




        if (VAR_11.repl_backlog == ((void*)0)) FUNC_1();
        return VAR_3;
    }
    if (!FUNC_14(VAR_16,"-NOMASTERLINK",13) ||
        !FUNC_14(VAR_16,"-LOADING",8))
    {
        FUNC_10(VAR_1,
            "Master is currently unable to PSYNC "
            "but should be in the future: %s", VAR_16);
        FUNC_7(VAR_16);
        return VAR_6;
    }

    if (FUNC_14(VAR_16,"-ERR",4)) {

        FUNC_10(VAR_2,
            "Unexpected reply to PSYNC from master: %s", VAR_16);
    } else {
        FUNC_10(VAR_1,
            "Master does not support PSYNC or is in "
            "error state (reply: %s)", VAR_16);
    }
    FUNC_7(VAR_16);
    FUNC_5();
    return VAR_5;
}
