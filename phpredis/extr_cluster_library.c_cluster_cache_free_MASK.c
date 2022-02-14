
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t count; struct TYPE_5__* master; int hash; } ;
typedef TYPE_1__ redisCachedCluster ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(redisCachedCluster *VAR_0) {
    size_t VAR_1;


    for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++) {
        FUNC_0(&VAR_0->master[VAR_1]);
    }


    FUNC_2(VAR_0->hash);
    FUNC_1(VAR_0->master, 1);
    FUNC_1(VAR_0, 1);
}
