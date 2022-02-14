
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sds ;
struct TYPE_8__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int list ;
typedef int dictEntry ;
typedef int dict ;
struct TYPE_9__ {int node_addr; int node_name; int port; int ip; } ;
typedef TYPE_2__ clusterManagerNode ;
typedef TYPE_2__ clusterManagerLink ;
struct TYPE_10__ {int * nodes; } ;


 int * FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 () ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,char*,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static dict *FUNC_15(void) {
    if (VAR_1.nodes == ((void*)0)) return ((void*)0);
    dict *VAR_2 = FUNC_2(&VAR_0, ((void*)0));
    listIter VAR_3;
    listNode *VAR_4;
    FUNC_9(VAR_1.nodes, &VAR_3);
    while ((VAR_4 = FUNC_7(&VAR_3)) != ((void*)0)) {
        clusterManagerNode *VAR_5 = VAR_4->value;
        list *VAR_6 = FUNC_0(VAR_5);
        if (VAR_6) {
            listIter VAR_7;
            listNode *VAR_8;
            FUNC_9(VAR_6, &VAR_7);
            while ((VAR_8 = FUNC_7(&VAR_7)) != ((void*)0)) {
                clusterManagerLink *VAR_9 = VAR_8->value;
                list *VAR_10 = ((void*)0);
                dictEntry *VAR_11 = FUNC_3(VAR_2, VAR_9->node_addr);
                if (VAR_11) VAR_10 = FUNC_4(VAR_11);
                else {
                    VAR_10 = FUNC_6();
                    FUNC_1(VAR_2, FUNC_11(VAR_9->node_addr), VAR_10);
                }
                sds VAR_12 = FUNC_12();
                VAR_12 = FUNC_10(VAR_12, "%s:%u", VAR_5->ip, VAR_5->port);
                FUNC_5(VAR_10, VAR_12);
                FUNC_13(VAR_9->node_name);
                FUNC_13(VAR_9->node_addr);
                FUNC_14(VAR_9);
            }
            FUNC_8(VAR_6);
        }
    }
    return VAR_2;
}
