
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* apps; } ;
struct TYPE_7__ {TYPE_1__* charts; struct TYPE_7__* next; } ;
struct TYPE_6__ {int dimensions_linked_count; struct TYPE_6__* next; } ;
typedef TYPE_1__ STATSD_APP_CHART ;
typedef TYPE_2__ STATSD_APP ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(void) {


    STATSD_APP *VAR_1;
    for(VAR_1 = VAR_0.apps; VAR_1 ;VAR_1 = VAR_1->next) {


        STATSD_APP_CHART *VAR_2;
        for(VAR_2 = VAR_1->charts; VAR_2 ;VAR_2 = VAR_2->next) {
            if(FUNC_1(VAR_2->dimensions_linked_count)) {
                FUNC_0(VAR_1, VAR_2);
            }
        }
    }


}
