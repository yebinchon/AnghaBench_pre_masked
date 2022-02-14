
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sds ;
struct TYPE_4__ {int value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int list ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int dict ;
struct TYPE_5__ {int nodes; } ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 TYPE_3__ VAR_1 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 float FUNC_12 (int ) ;
 TYPE_1__* FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 scalar_t__ FUNC_15 (int ,char**,int*,int*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_19(void) {
    FUNC_16("Waiting for the cluster to join\n");
    int VAR_3 = 0,
        VAR_4 = VAR_0 +
                      (int)(FUNC_12(VAR_1.nodes) * 0.15f);
    while(!FUNC_1()) {
        FUNC_16(".");
        FUNC_10(VAR_2);
        FUNC_18(1);
        if (++VAR_3 > VAR_4) {
            dict *VAR_5 = FUNC_0();
            dictIterator *VAR_6 = ((void*)0);
            if (VAR_5 != ((void*)0) && FUNC_9(VAR_5) > 0) {
                FUNC_16("\n");
                FUNC_2("Warning: %d node(s) may "
                                     "be unreachable\n", FUNC_9(VAR_5));
                VAR_6 = FUNC_3(VAR_5);
                dictEntry *VAR_7;
                while ((VAR_7 = FUNC_6(VAR_6)) != ((void*)0)) {
                    sds VAR_8 = (sds) FUNC_4(VAR_7);
                    char *VAR_9 = ((void*)0);
                    int VAR_10 = 0, VAR_11 = 0;
                    list *VAR_12 = (list *) FUNC_5(VAR_7);
                    if (FUNC_15(VAR_8, &VAR_9,
                        &VAR_10, &VAR_11) && VAR_11) {
                        FUNC_2(" - The port %d of node %s may "
                                             "be unreachable from:\n",
                                             VAR_11, VAR_9);
                    } else {
                        FUNC_2(" - Node %s may be unreachable "
                                             "from:\n", VAR_8);
                    }
                    listIter VAR_13;
                    listNode *VAR_14;
                    FUNC_14(VAR_12, &VAR_13);
                    while ((VAR_14 = FUNC_13(&VAR_13)) != ((void*)0)) {
                        sds VAR_15 = VAR_14->value;
                        FUNC_2("   %s\n", VAR_15);
                        FUNC_17(VAR_15);
                    }
                    FUNC_2("Cluster bus ports must be reachable "
                                         "by every node.\nRemember that "
                                         "cluster bus ports are different "
                                         "from standard instance ports.\n");
                    FUNC_11(VAR_12);
                }
            }
            if (VAR_6 != ((void*)0)) FUNC_8(VAR_6);
            if (VAR_5 != ((void*)0)) FUNC_7(VAR_5);
            VAR_3 = 0;
        }
    }
    FUNC_16("\n");
}
