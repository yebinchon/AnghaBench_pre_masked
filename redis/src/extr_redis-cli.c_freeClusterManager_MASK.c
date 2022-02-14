
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * sds ;
struct TYPE_4__ {int * value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int clusterManagerNode ;
struct TYPE_5__ {int * errors; int * nodes; } ;


 int * VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void) {
    listIter VAR_2;
    listNode *VAR_3;
    if (VAR_1.nodes != ((void*)0)) {
        FUNC_4(VAR_1.nodes,&VAR_2);
        while ((VAR_3 = FUNC_2(&VAR_2)) != ((void*)0)) {
            clusterManagerNode *VAR_4 = VAR_3->value;
            FUNC_1(VAR_4);
        }
        FUNC_3(VAR_1.nodes);
        VAR_1.nodes = ((void*)0);
    }
    if (VAR_1.errors != ((void*)0)) {
        FUNC_4(VAR_1.errors,&VAR_2);
        while ((VAR_3 = FUNC_2(&VAR_2)) != ((void*)0)) {
            sds VAR_5 = VAR_3->value;
            FUNC_5(VAR_5);
        }
        FUNC_3(VAR_1.errors);
        VAR_1.errors = ((void*)0);
    }
    if (VAR_0 != ((void*)0))
        FUNC_0(VAR_0);
}
