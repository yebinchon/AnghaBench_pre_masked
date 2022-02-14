
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
struct TYPE_5__ {int * nodes; } ;


 int * FUNC_0 (int *) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void) {
    if (VAR_0.nodes == ((void*)0)) return 0;
    int VAR_1 = (FUNC_1(VAR_0.nodes) <= 1);

    if (VAR_1) return 1;
    sds VAR_2 = ((void*)0);
    listIter VAR_3;
    listNode *VAR_4;
    FUNC_3(VAR_0.nodes, &VAR_3);
    while ((VAR_4 = FUNC_2(&VAR_3)) != ((void*)0)) {
        clusterManagerNode *VAR_5 = VAR_4->value;
        sds VAR_6 = FUNC_0(VAR_5);
        if (VAR_6 == ((void*)0)) {
            VAR_1 = 0;
            break;
        }
        if (VAR_2 == ((void*)0)) VAR_2 = VAR_6;
        else {
            VAR_1 = !FUNC_4(VAR_2, VAR_6);
            FUNC_5(VAR_6);
            if (!VAR_1) break;
        }
    }
    if (VAR_2 != ((void*)0)) FUNC_5(VAR_2);
    return VAR_1;
}
