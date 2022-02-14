
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long long psync_initial_offset; int flags; int conn; int replstate; } ;
typedef TYPE_1__ client ;
typedef int buf ;
struct TYPE_6__ {int slaveseldb; char* replid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (char*,int,char*,char*,long long) ;

int FUNC_3(client *VAR_5, long long VAR_6) {
    char VAR_7[128];
    int VAR_8;

    VAR_5->psync_initial_offset = VAR_6;
    VAR_5->replstate = VAR_3;



    VAR_4.slaveseldb = -1;



    if (!(VAR_5->flags & VAR_0)) {
        VAR_8 = FUNC_2(VAR_7,sizeof(VAR_7),"+FULLRESYNC %s %lld\r\n",
                          VAR_4.replid,VAR_6);
        if (FUNC_0(VAR_5->conn,VAR_7,VAR_8) != VAR_8) {
            FUNC_1(VAR_5);
            return VAR_1;
        }
    }
    return VAR_2;
}
