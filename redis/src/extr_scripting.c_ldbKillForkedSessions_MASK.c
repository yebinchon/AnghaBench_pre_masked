
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long pid_t ;
struct TYPE_4__ {scalar_t__ value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_5__ {int children; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*,long) ;

void FUNC_6(void) {
    listIter VAR_3;
    listNode *VAR_4;

    FUNC_4(VAR_2.children,&VAR_3);
    while((VAR_4 = FUNC_2(&VAR_3))) {
        pid_t VAR_5 = (unsigned long) VAR_4->value;
        FUNC_5(VAR_0,"Killing debugging session %ld",(long)VAR_5);
        FUNC_0(VAR_5,VAR_1);
    }
    FUNC_3(VAR_2.children);
    VAR_2.children = FUNC_1();
}
