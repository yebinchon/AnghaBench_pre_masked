
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_9__ {int slot; TYPE_3__* source; } ;
typedef TYPE_2__ clusterManagerReshardTableItem ;
struct TYPE_10__ {float slots_count; int* slots; } ;
typedef TYPE_3__ clusterManagerNode ;


 int VAR_0 ;
 float FUNC_0 (float) ;
 int VAR_1 ;
 float FUNC_1 (float) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_3__**,int,int,int ) ;
 int FUNC_8 (TYPE_3__**) ;
 void* FUNC_9 (int) ;

__attribute__((used)) static list *FUNC_10(list *VAR_2, int VAR_3) {
    list *VAR_4 = FUNC_3();
    int VAR_5 = FUNC_4(VAR_2), VAR_6 = 0, VAR_7 = 0, VAR_8;
    clusterManagerNode **VAR_9 = FUNC_9(VAR_5 * sizeof(*VAR_9));
    listIter VAR_10;
    listNode *VAR_11;
    FUNC_6(VAR_2, &VAR_10);
    while ((VAR_11 = FUNC_5(&VAR_10)) != ((void*)0)) {
        clusterManagerNode *VAR_12 = VAR_11->value;
        VAR_7 += VAR_12->slots_count;
        VAR_9[VAR_6++] = VAR_12;
    }
    FUNC_7(VAR_9, VAR_5, sizeof(clusterManagerNode *),
          VAR_1);
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        clusterManagerNode *VAR_13 = VAR_9[VAR_6];
        float VAR_14 = ((float) VAR_3 / VAR_7 * VAR_13->slots_count);
        if (VAR_6 == 0) VAR_14 = FUNC_0(VAR_14);
        else VAR_14 = FUNC_1(VAR_14);
        int VAR_15 = (int) VAR_14, VAR_16 = 0;
        for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
            int VAR_17 = VAR_13->slots[VAR_8];
            if (!VAR_17) continue;
            if (VAR_16 >= VAR_15 || (int)FUNC_4(VAR_4) >= VAR_3) break;
            clusterManagerReshardTableItem *VAR_18 = FUNC_9(sizeof(*VAR_18));
            VAR_18->source = VAR_13;
            VAR_18->slot = VAR_8;
            FUNC_2(VAR_4, VAR_18);
            VAR_16++;
        }
    }
    FUNC_8(VAR_9);
    return VAR_4;
}
