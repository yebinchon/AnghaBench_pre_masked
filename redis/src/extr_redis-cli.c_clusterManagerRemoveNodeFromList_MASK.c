
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int list ;
typedef int clusterManagerNode ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(list *VAR_0,
                                             clusterManagerNode *VAR_1) {
    listIter VAR_2;
    listNode *VAR_3;
    FUNC_2(VAR_0, &VAR_2);
    while ((VAR_3 = FUNC_1(&VAR_2)) != ((void*)0)) {
        if (VAR_1 == VAR_3->value) {
            FUNC_0(VAR_0, VAR_3);
            break;
        }
    }
}
