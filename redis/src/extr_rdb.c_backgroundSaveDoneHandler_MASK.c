
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rdb_child_type; } ;




 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (char*) ;

void FUNC_3(int VAR_1, int VAR_2) {
    switch(VAR_0.rdb_child_type) {
    case 129:
        FUNC_0(VAR_1,VAR_2);
        break;
    case 128:
        FUNC_1(VAR_1,VAR_2);
        break;
    default:
        FUNC_2("Unknown RDB child type.");
        break;
    }
}
