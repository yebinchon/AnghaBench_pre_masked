
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; } ;
typedef TYPE_1__ listNode ;
typedef int client ;
struct TYPE_5__ {int slaves; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__ VAR_0 ;

void FUNC_3(void) {
    while (FUNC_2(VAR_0.slaves)) {
        listNode *VAR_1 = FUNC_1(VAR_0.slaves);
        FUNC_0((client*)VAR_1->value);
    }
}
