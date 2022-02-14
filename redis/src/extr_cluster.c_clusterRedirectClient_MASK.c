
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port; int ip; } ;
typedef TYPE_1__ clusterNode ;
typedef int client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,char*,int,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

void FUNC_5(client *VAR_6, clusterNode *VAR_7, int VAR_8, int VAR_9) {
    if (VAR_9 == VAR_1) {
        FUNC_0(VAR_6,FUNC_3("-CROSSSLOT Keys in request don't hash to the same slot\r\n"));
    } else if (VAR_9 == VAR_5) {



        FUNC_0(VAR_6,FUNC_3("-TRYAGAIN Multiple keys request during rehashing of slot\r\n"));
    } else if (VAR_9 == VAR_2) {
        FUNC_0(VAR_6,FUNC_3("-CLUSTERDOWN The cluster is down\r\n"));
    } else if (VAR_9 == VAR_3) {
        FUNC_0(VAR_6,FUNC_3("-CLUSTERDOWN Hash slot not served\r\n"));
    } else if (VAR_9 == VAR_4 ||
               VAR_9 == VAR_0)
    {
        FUNC_0(VAR_6,FUNC_1(FUNC_2(),
            "-%s %d %s:%d\r\n",
            (VAR_9 == VAR_0) ? "ASK" : "MOVED",
            VAR_8,VAR_7->ip,VAR_7->port));
    } else {
        FUNC_4("getNodeByQuery() unknown error.");
    }
}
