
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct crawler_expired_data {int is_external; int lock; TYPE_2__* crawlerstats; void* start_time; } ;
typedef int crawlerstats_t ;
struct TYPE_4__ {struct crawler_expired_data* data; } ;
typedef TYPE_1__ crawler_module_t ;
struct TYPE_5__ {int run_complete; void* start_time; } ;


 int VAR_0 ;
 struct crawler_expired_data* FUNC_0 (int,int) ;
 void* VAR_1 ;
 int FUNC_1 (TYPE_2__**,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(crawler_module_t *VAR_2, void *VAR_3) {
    struct crawler_expired_data *VAR_4;
    if (VAR_3 != ((void*)0)) {
        VAR_4 = VAR_3;
        VAR_4->is_external = 1;
        VAR_2->data = VAR_3;
    } else {

        VAR_4 = FUNC_0(1, sizeof(struct crawler_expired_data));
        if (VAR_4 == ((void*)0)) {
            return -1;
        }

        FUNC_2(&VAR_4->lock, ((void*)0));
        VAR_4->is_external = 0;
        VAR_4->start_time = VAR_1;

        VAR_2->data = VAR_4;
    }
    FUNC_3(&VAR_4->lock);
    FUNC_1(&VAR_4->crawlerstats, 0, sizeof(crawlerstats_t) * VAR_0);
    for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        VAR_4->crawlerstats[VAR_5].start_time = VAR_1;
        VAR_4->crawlerstats[VAR_5].run_complete = 0;
    }
    FUNC_4(&VAR_4->lock);
    return 0;
}
