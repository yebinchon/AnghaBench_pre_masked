
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int clusterManagerNodeArray ;
struct TYPE_10__ {char* replicate; int dirty; } ;
typedef TYPE_2__ clusterManagerNode ;
struct TYPE_12__ {TYPE_5__* nodes; } ;
struct TYPE_11__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,TYPE_2__***,int*) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (char*) ;
 TYPE_7__ VAR_2 ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 TYPE_2__** FUNC_8 (int) ;
 int FUNC_9 (TYPE_2__**) ;

__attribute__((used)) static void FUNC_10(clusterManagerNodeArray *VAR_3,
    int VAR_4)
{
    clusterManagerNode **VAR_5 = ((void*)0);
    int VAR_6 = FUNC_0(VAR_3, VAR_4,
                                                   ((void*)0), ((void*)0));
    if (VAR_6 == 0) goto cleanup;
    FUNC_2(">>> Trying to optimize slaves allocation "
                          "for anti-affinity\n");
    int VAR_7 = VAR_2.nodes->len;
    int VAR_8 = 500 * VAR_7;
    FUNC_6(FUNC_7(((void*)0)));
    while (VAR_8 > 0) {
        int VAR_9 = 0;
        if (VAR_5 != ((void*)0)) {
            FUNC_9(VAR_5);
            VAR_5 = ((void*)0);
        }
        VAR_6 = FUNC_0(VAR_3,
                                                   VAR_4,
                                                   &VAR_5,
                                                   &VAR_9);
        if (VAR_6 == 0) break;



        int VAR_10 = FUNC_5() % VAR_9;
        clusterManagerNode *VAR_11 = VAR_5[VAR_10],
                           *VAR_12 = ((void*)0);
        clusterManagerNode **VAR_13 = FUNC_8((VAR_7 - 1) *
                                                      sizeof(*VAR_13));
        int VAR_14 = 0;
        listIter VAR_15;
        listNode *VAR_16;
        FUNC_4(VAR_2.nodes, &VAR_15);
        while ((VAR_16 = FUNC_3(&VAR_15)) != ((void*)0)) {
            clusterManagerNode *VAR_17 = VAR_16->value;
            if (VAR_17 != VAR_11 && VAR_17->replicate != ((void*)0))
                VAR_13[VAR_14++] = VAR_17;
        }
        if (VAR_14 == 0) {
            FUNC_9(VAR_13);
            break;
        }
        VAR_10 = FUNC_5() % VAR_14;
        VAR_12 = VAR_13[VAR_10];
        char *VAR_18 = VAR_11->replicate,
             *VAR_19 = VAR_12->replicate;
        VAR_11->replicate = VAR_19, VAR_11->dirty = 1;
        VAR_12->replicate = VAR_18, VAR_12->dirty = 1;
        int VAR_20 = FUNC_0(VAR_3,
                                                           VAR_4,
                                                           ((void*)0), ((void*)0));



        if (VAR_20 > VAR_6) {
            VAR_11->replicate = VAR_18;
            VAR_12->replicate = VAR_19;
        }
        FUNC_9(VAR_13);
        VAR_8--;
    }
    VAR_6 = FUNC_0(VAR_3, VAR_4, ((void*)0), ((void*)0));
    char *VAR_21;
    int VAR_22 = (VAR_6 == 0);
    int VAR_23 = (VAR_22 ? VAR_0 :
                               VAR_1);
    if (VAR_22) VAR_21 = "[OK] Perfect anti-affinity obtained!";
    else if (VAR_6 >= 10000)
        VAR_21 = ("[WARNING] Some slaves are in the same host as their master");
    else
        VAR_21=("[WARNING] Some slaves of the same master are in the same host");
    FUNC_1(VAR_23, "%s\n", VAR_21);
cleanup:
    FUNC_9(VAR_5);
}
