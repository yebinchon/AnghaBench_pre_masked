
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int closed; scalar_t__ version; int mutex; } ;
typedef TYPE_1__ store_page ;
struct TYPE_5__ {TYPE_1__* pages; } ;
typedef TYPE_2__ store_engine ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void *VAR_0, unsigned int VAR_1, uint64_t VAR_2) {
    store_engine *VAR_3 = (store_engine *)VAR_0;
    store_page *VAR_4 = &VAR_3->pages[VAR_1];

    FUNC_1(&VAR_4->mutex);
    if (!VAR_4->closed && VAR_4->version == VAR_2) {
        VAR_4->closed = 1;
        FUNC_0(VAR_3);
    }
    FUNC_2(&VAR_4->mutex);
}
