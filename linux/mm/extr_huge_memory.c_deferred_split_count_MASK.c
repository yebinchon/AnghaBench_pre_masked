
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shrinker {int dummy; } ;
struct shrink_control {TYPE_1__* memcg; int nid; } ;
struct deferred_split {int split_queue_len; } ;
struct pglist_data {struct deferred_split deferred_split_queue; } ;
struct TYPE_2__ {struct deferred_split deferred_split_queue; } ;


 struct pglist_data* FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct shrinker *VAR_0,
  struct shrink_control *VAR_1)
{
 struct pglist_data *VAR_2 = FUNC_0(VAR_1->nid);
 struct deferred_split *VAR_3 = &VAR_2->deferred_split_queue;





 return FUNC_1(VAR_3->split_queue_len);
}
