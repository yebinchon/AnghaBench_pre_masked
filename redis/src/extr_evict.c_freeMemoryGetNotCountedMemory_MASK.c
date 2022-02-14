
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int listNode ;
typedef int listIter ;
typedef int client ;
struct TYPE_2__ {scalar_t__ aof_state; int aof_buf; int slaves; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_1__ VAR_1 ;

size_t FUNC_7(void) {
    size_t VAR_2 = 0;
    int VAR_3 = FUNC_2(VAR_1.slaves);

    if (VAR_3) {
        listIter VAR_4;
        listNode *VAR_5;

        FUNC_5(VAR_1.slaves,&VAR_4);
        while((VAR_5 = FUNC_3(&VAR_4))) {
            client *VAR_6 = FUNC_4(VAR_5);
            VAR_2 += FUNC_1(VAR_6);
        }
    }
    if (VAR_1.aof_state != VAR_0) {
        VAR_2 += FUNC_6(VAR_1.aof_buf)+FUNC_0();
    }
    return VAR_2;
}
