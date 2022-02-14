
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct crush_bucket_list* items; } ;
struct crush_bucket_list {TYPE_1__ h; struct crush_bucket_list* sum_weights; struct crush_bucket_list* item_weights; } ;


 int FUNC_0 (struct crush_bucket_list*) ;

void FUNC_1(struct crush_bucket_list *VAR_0)
{
 FUNC_0(VAR_0->item_weights);
 FUNC_0(VAR_0->sum_weights);
 FUNC_0(VAR_0->h.items);
 FUNC_0(VAR_0);
}
