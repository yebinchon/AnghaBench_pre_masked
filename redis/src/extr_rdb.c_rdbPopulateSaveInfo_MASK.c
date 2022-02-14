
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int repl_stream_db; } ;
typedef TYPE_5__ rdbSaveInfo ;
struct TYPE_15__ {int slaveseldb; TYPE_3__* cached_master; TYPE_4__* master; scalar_t__ repl_backlog; int masterhost; } ;
struct TYPE_13__ {TYPE_1__* db; } ;
struct TYPE_12__ {TYPE_2__* db; } ;
struct TYPE_11__ {int id; } ;
struct TYPE_10__ {int id; } ;


 TYPE_5__ VAR_0 ;
 TYPE_6__ VAR_1 ;

rdbSaveInfo *FUNC_0(rdbSaveInfo *VAR_2) {
    rdbSaveInfo VAR_3 = VAR_0;
    *VAR_2 = VAR_3;
    if (!VAR_1.masterhost && VAR_1.repl_backlog) {





        VAR_2->repl_stream_db = VAR_1.slaveseldb == -1 ? 0 : VAR_1.slaveseldb;
        return VAR_2;
    }



    if (VAR_1.master) {
        VAR_2->repl_stream_db = VAR_1.master->db->id;
        return VAR_2;
    }






    if (VAR_1.cached_master) {
        VAR_2->repl_stream_db = VAR_1.cached_master->db->id;
        return VAR_2;
    }
    return ((void*)0);
}
