
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sds ;
struct TYPE_4__ {int * value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int clusterManagerNode ;
struct TYPE_5__ {int nodes; } ;


 scalar_t__ FUNC_0 (int *,int ) ;
 TYPE_3__ VAR_0 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(void) {
    listIter VAR_1;
    listNode *VAR_2;
    FUNC_2(VAR_0.nodes, &VAR_1);
    while ((VAR_2 = FUNC_1(&VAR_1)) != ((void*)0)) {
        clusterManagerNode *VAR_3 = VAR_2->value;
        sds VAR_4 = FUNC_0(VAR_3, 0);
        FUNC_3("%s\n", (char *) VAR_4);
        FUNC_4(VAR_4);
    }
}
