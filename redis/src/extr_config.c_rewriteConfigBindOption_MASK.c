
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rewriteConfigState {int dummy; } ;
typedef int sds ;
struct TYPE_2__ {scalar_t__ bindaddr_count; int bindaddr; } ;


 int FUNC_0 (struct rewriteConfigState*,char*) ;
 int FUNC_1 (struct rewriteConfigState*,char*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,char*) ;
 int FUNC_6 (char*) ;
 TYPE_1__ VAR_0 ;

void FUNC_7(struct rewriteConfigState *VAR_1) {
    int VAR_2 = 1;
    sds VAR_3, VAR_4;
    char *VAR_5 = "bind";


    if (VAR_0.bindaddr_count == 0) {
        FUNC_0(VAR_1,VAR_5);
        return;
    }


    VAR_4 = FUNC_5(VAR_0.bindaddr,VAR_0.bindaddr_count," ");
    VAR_3 = FUNC_6(VAR_5);
    VAR_3 = FUNC_2(VAR_3, " ", 1);
    VAR_3 = FUNC_3(VAR_3, VAR_4);
    FUNC_4(VAR_4);

    FUNC_1(VAR_1,VAR_5,VAR_3,VAR_2);
}
