
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int dbnum; } ;
typedef TYPE_1__ RedisModuleFlushInfo ;
typedef int * RedisModuleEvent ;
typedef int RedisModuleCtx ;
typedef int RedisModuleCallReply ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int *,char*,char*) ;
 long long FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;

void FUNC_5(RedisModuleCtx *VAR_1, RedisModuleEvent VAR_2, uint64_t VAR_3, void *VAR_4)
{
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);

    RedisModuleFlushInfo *VAR_5 = VAR_4;
    if (VAR_3 == VAR_0) {
        if (VAR_5->dbnum != -1) {
            RedisModuleCallReply *VAR_6;
            VAR_6 = FUNC_1(VAR_1,"DBSIZE","");
            long long VAR_7 = FUNC_2(VAR_6);
            FUNC_4("FLUSHDB event of database %d started (%lld keys in DB)\n",
                VAR_5->dbnum, VAR_7);
            FUNC_3(VAR_6);
        } else {
            FUNC_4("FLUSHALL event started\n");
        }
    } else {
        if (VAR_5->dbnum != -1) {
            FUNC_4("FLUSHDB event of database %d ended\n",VAR_5->dbnum);
        } else {
            FUNC_4("FLUSHALL event ended\n");
        }
    }
}
