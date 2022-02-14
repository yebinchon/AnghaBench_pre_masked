
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct crawler_expired_data {int lock; TYPE_1__* crawlerstats; } ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_2__ crawler_module_t ;
struct TYPE_4__ {int run_complete; int end_time; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(crawler_module_t *VAR_1, int VAR_2) {
    struct crawler_expired_data *VAR_3 = (struct crawler_expired_data *) VAR_1->data;
    FUNC_0(&VAR_3->lock);
    VAR_3->crawlerstats[VAR_2].end_time = VAR_0;
    VAR_3->crawlerstats[VAR_2].run_complete = 1;
    FUNC_1(&VAR_3->lock);
}
