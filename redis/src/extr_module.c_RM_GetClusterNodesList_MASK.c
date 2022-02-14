
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_6__ {int flags; int name; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_7__ {TYPE_1__* cluster; int cluster_enabled; } ;
struct TYPE_5__ {int nodes; } ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,size_t) ;
 TYPE_3__ VAR_3 ;
 void* FUNC_7 (size_t) ;

char **FUNC_8(RedisModuleCtx *VAR_4, size_t *VAR_5) {
    FUNC_0(VAR_4);

    if (!VAR_3.cluster_enabled) return ((void*)0);
    size_t VAR_6 = FUNC_5(VAR_3.cluster->nodes);
    char **VAR_7 = FUNC_7((VAR_6+1)*VAR_2);
    dictIterator *VAR_8 = FUNC_1(VAR_3.cluster->nodes);
    dictEntry *VAR_9;
    int VAR_10 = 0;
    while((VAR_9 = FUNC_3(VAR_8)) != ((void*)0)) {
        clusterNode *VAR_11 = FUNC_2(VAR_9);
        if (VAR_11->flags & (VAR_1|VAR_0)) continue;
        VAR_7[VAR_10] = FUNC_7(VAR_2);
        FUNC_6(VAR_7[VAR_10],VAR_11->name,VAR_2);
        VAR_10++;
    }
    *VAR_5 = VAR_10;
    VAR_7[VAR_10] = ((void*)0);

    FUNC_4(VAR_8);
    return VAR_7;
}
