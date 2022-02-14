
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct crawler_expired_data {int crawl_complete; int is_external; int lock; int end_time; } ;
struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ crawler_module_t ;


 int VAR_0 ;
 int FUNC_0 (struct crawler_expired_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(crawler_module_t *VAR_1) {
    struct crawler_expired_data *VAR_2 = (struct crawler_expired_data *) VAR_1->data;
    FUNC_1(&VAR_2->lock);
    VAR_2->end_time = VAR_0;
    VAR_2->crawl_complete = 1;
    FUNC_2(&VAR_2->lock);

    if (!VAR_2->is_external) {
        FUNC_0(VAR_2);
    }
}
