
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sds ;
struct TYPE_5__ {int value; } ;
typedef TYPE_1__ listNode ;
struct TYPE_6__ {int conn; int logs; } ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_4__ VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,char*,int) ;

void FUNC_11(void) {
    sds VAR_1 = FUNC_7();
    VAR_1 = FUNC_4(VAR_1,"*%i\r\n", (int)FUNC_3(VAR_0.logs));
    while(FUNC_3(VAR_0.logs)) {
        listNode *VAR_2 = FUNC_2(VAR_0.logs);
        VAR_1 = FUNC_5(VAR_1,"+",1);
        FUNC_10(VAR_2->value,"\r\n","  ",2);
        VAR_1 = FUNC_6(VAR_1,VAR_2->value);
        VAR_1 = FUNC_5(VAR_1,"\r\n",2);
        FUNC_1(VAR_0.logs,VAR_2);
    }
    if (FUNC_0(VAR_0.conn,VAR_1,FUNC_9(VAR_1)) == -1) {



    }
    FUNC_8(VAR_1);
}
