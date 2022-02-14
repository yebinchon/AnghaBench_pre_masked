
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_10__ {TYPE_3__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int dict ;
struct TYPE_11__ {int len; TYPE_3__** nodes; } ;
typedef TYPE_2__ clusterManagerNodeArray ;
struct TYPE_12__ {char* ip; char* replicate; char* name; } ;
typedef TYPE_3__ clusterManagerNode ;
struct TYPE_14__ {TYPE_5__* nodes; } ;
struct TYPE_13__ {int len; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_7__ VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,char*) ;
 TYPE_1__* FUNC_10 (int *) ;
 int FUNC_11 (TYPE_5__*,int *) ;
 char* FUNC_12 (char*,char*) ;
 char* FUNC_13 (char*,char*,char*) ;
 char* FUNC_14 (char*) ;
 char* FUNC_15 () ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,char*) ;
 TYPE_3__** FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(clusterManagerNodeArray *VAR_2,
    int VAR_3, clusterManagerNode ***VAR_4, int *VAR_5)
{
    int VAR_6 = 0, VAR_7, VAR_8;
    int VAR_9 = VAR_1.nodes->len;
    clusterManagerNode **VAR_10 = ((void*)0);
    if (VAR_4 != ((void*)0)) {
        *VAR_4 = FUNC_18(VAR_9 * sizeof(clusterManagerNode*));
        VAR_10 = *VAR_4;
    }



    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
        clusterManagerNodeArray *VAR_11 = &(VAR_2[VAR_7]);
        dict *VAR_12 = FUNC_1(&VAR_0, ((void*)0));
        char *VAR_13 = ((void*)0);
        for (VAR_8 = 0; VAR_8 < VAR_11->len; VAR_8++) {
            clusterManagerNode *VAR_14 = VAR_11->nodes[VAR_8];
            if (VAR_14 == ((void*)0)) continue;
            if (!VAR_13) VAR_13 = VAR_14->ip;
            sds VAR_15;

            sds VAR_16 = (!VAR_14->replicate ? VAR_14->name : VAR_14->replicate);
            FUNC_0(VAR_16 != ((void*)0));
            dictEntry *VAR_17 = FUNC_2(VAR_12, VAR_16);
            if (VAR_17) VAR_15 = FUNC_14((sds) FUNC_5(VAR_17));
            else VAR_15 = FUNC_15();


            if (!VAR_14->replicate) VAR_15 = FUNC_13(VAR_15, "m%s", VAR_15);
            else VAR_15 = FUNC_12(VAR_15, "s");
            FUNC_9(VAR_12, VAR_16, VAR_15);
        }


        dictIterator *VAR_18 = FUNC_3(VAR_12);
        dictEntry *VAR_19;
        while ((VAR_19 = FUNC_6(VAR_18)) != ((void*)0)) {
            sds VAR_20 = (sds) FUNC_5(VAR_19);
            sds VAR_21 = (sds) FUNC_4(VAR_19);
            int VAR_22 = FUNC_16(VAR_20);
            if (VAR_22 < 2) continue;
            if (VAR_20[0] == 'm') VAR_6 += (10000 * (VAR_22 - 1));
            else VAR_6 += (1 * VAR_22);
            if (VAR_4 == ((void*)0)) continue;

            listIter VAR_23;
            listNode *VAR_24;
            FUNC_11(VAR_1.nodes, &VAR_23);
            while ((VAR_24 = FUNC_10(&VAR_23)) != ((void*)0)) {
                clusterManagerNode *VAR_25 = VAR_24->value;
                if (VAR_25->replicate == ((void*)0)) continue;
                if (!FUNC_17(VAR_25->replicate, VAR_21) && !FUNC_17(VAR_25->ip, VAR_13)) {
                    *(VAR_10++) = VAR_25;
                    if (VAR_5 != ((void*)0)) (*VAR_5)++;
                    break;
                }
            }
        }

        FUNC_8(VAR_18);
        FUNC_7(VAR_12);
    }
    return VAR_6;
}
