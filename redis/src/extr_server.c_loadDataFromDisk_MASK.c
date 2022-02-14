
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int repl_offset; int repl_stream_db; int repl_id; scalar_t__ repl_id_is_set; } ;
typedef TYPE_2__ rdbSaveInfo ;
struct TYPE_8__ {scalar_t__ aof_state; int master_repl_offset; int cached_master; int replid; TYPE_1__* cluster; scalar_t__ cluster_enabled; scalar_t__ masterhost; int rdb_filename; int aof_filename; } ;
struct TYPE_6__ {int myself; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 TYPE_3__ VAR_8 ;
 int FUNC_7 (int ,char*,float) ;
 float FUNC_8 (scalar_t__) ;
 long long FUNC_9 () ;

void FUNC_10(void) {
    long long VAR_9 = FUNC_9();
    if (VAR_8.aof_state == VAR_0) {
        if (FUNC_1(VAR_8.aof_filename) == VAR_1)
            FUNC_7(VAR_3,"DB loaded from append only file: %.3f seconds",(float)(FUNC_9()-VAR_9)/1000000);
    } else {
        rdbSaveInfo VAR_10 = VAR_6;
        if (FUNC_4(VAR_8.rdb_filename,&VAR_10,VAR_5) == VAR_1) {
            FUNC_7(VAR_3,"DB loaded from disk: %.3f seconds",
                (float)(FUNC_9()-VAR_9)/1000000);


            if ((VAR_8.masterhost ||
                (VAR_8.cluster_enabled &&
                FUNC_3(VAR_8.cluster->myself))) &&
                VAR_10.repl_id_is_set &&
                VAR_10.repl_offset != -1 &&



                VAR_10.repl_stream_db != -1)
            {
                FUNC_2(VAR_8.replid,VAR_10.repl_id,sizeof(VAR_8.replid));
                VAR_8.master_repl_offset = VAR_10.repl_offset;



                FUNC_5();
                FUNC_6(VAR_8.cached_master,VAR_10.repl_stream_db);
            }
        } else if (VAR_7 != VAR_2) {
            FUNC_7(VAR_4,"Fatal error loading the DB: %s. Exiting.",FUNC_8(VAR_7));
            FUNC_0(1);
        }
    }
}
