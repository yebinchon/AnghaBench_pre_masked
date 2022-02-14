
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rewriteConfigState {int dummy; } ;
typedef int sds ;
struct TYPE_2__ {int masterport; int * masterhost; scalar_t__ cluster_enabled; } ;


 int FUNC_0 (struct rewriteConfigState*,char*) ;
 int FUNC_1 (struct rewriteConfigState*,char*,int ,int) ;
 int FUNC_2 (int ,char*,char*,int *,int ) ;
 int FUNC_3 () ;
 TYPE_1__ VAR_0 ;

void FUNC_4(struct rewriteConfigState *VAR_1, char *VAR_2) {
    sds VAR_3;




    if (VAR_0.cluster_enabled || VAR_0.masterhost == ((void*)0)) {
        FUNC_0(VAR_1,VAR_2);
        return;
    }
    VAR_3 = FUNC_2(FUNC_3(),"%s %s %d", VAR_2,
        VAR_0.masterhost, VAR_0.masterport);
    FUNC_1(VAR_1,VAR_2,VAR_3,1);
}
