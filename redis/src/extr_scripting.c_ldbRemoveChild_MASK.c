
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
typedef int listNode ;
struct TYPE_2__ {int children; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,void*) ;

int FUNC_2(pid_t VAR_1) {
    listNode *VAR_2 = FUNC_1(VAR_0.children,(void*)(unsigned long)VAR_1);
    if (VAR_2) {
        FUNC_0(VAR_0.children,VAR_2);
        return 1;
    }
    return 0;
}
