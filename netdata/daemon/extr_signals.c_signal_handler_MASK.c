
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ action; int signo; int name; int count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (char*,int,char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(int VAR_4) {

    int VAR_5;
    for(VAR_5 = 0; VAR_3[VAR_5].action != VAR_0 ; VAR_5++) {
        if(FUNC_2(VAR_3[VAR_5].signo == VAR_4)) {
            VAR_3[VAR_5].count++;

            if(VAR_3[VAR_5].action == VAR_1) {
                char VAR_6[200 + 1];
                FUNC_0(VAR_6, 200, "\nSIGNAL HANLDER: received: %s. Oops! This is bad!\n", VAR_3[VAR_5].name);
                if(FUNC_3(VAR_2, VAR_6, FUNC_1(VAR_6)) == -1) {

                    ;
                }
            }

            return;
        }
    }
}
