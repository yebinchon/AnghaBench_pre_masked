
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_6__ {scalar_t__* slots; } ;
typedef TYPE_2__ clusterManagerNode ;
struct TYPE_7__ {int * nodes; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(char *VAR_2) {
    if (VAR_1.nodes == ((void*)0)) return 0;
    listIter VAR_3;
    listNode *VAR_4;
    FUNC_1(VAR_1.nodes, &VAR_3);
    int VAR_5 = 0, VAR_6;
    while ((VAR_4 = FUNC_0(&VAR_3)) != ((void*)0)) {
        clusterManagerNode *VAR_7 = VAR_4->value;
        for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
            if (VAR_7->slots[VAR_6] && !VAR_2[VAR_6]) {
                VAR_2[VAR_6] = 1;
                VAR_5++;
            }
        }
    }
    return VAR_5;
}
