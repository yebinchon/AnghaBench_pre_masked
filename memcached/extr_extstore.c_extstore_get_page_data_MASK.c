
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct extstore_stats {int page_data; } ;
struct extstore_page_data {int dummy; } ;
struct TYPE_5__ {int page_data; } ;
struct TYPE_6__ {int page_count; TYPE_1__ stats; } ;
typedef TYPE_2__ store_engine ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(void *VAR_0, struct extstore_stats *VAR_1) {
    store_engine *VAR_2 = (store_engine *)VAR_0;
    FUNC_0(VAR_2);
    FUNC_2(VAR_1->page_data, VAR_2->stats.page_data,
            sizeof(struct extstore_page_data) * VAR_2->page_count);
    FUNC_1(VAR_2);
}
