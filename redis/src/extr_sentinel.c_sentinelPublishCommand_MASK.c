
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_6__ {int ptr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

void FUNC_5(client *VAR_1) {
    if (FUNC_4(VAR_1->argv[1]->ptr,VAR_0)) {
        FUNC_0(VAR_1, "Only HELLO messages are accepted by Sentinel instances.");
        return;
    }
    FUNC_3(VAR_1->argv[2]->ptr,FUNC_2(VAR_1->argv[2]->ptr));
    FUNC_1(VAR_1,1);
}
