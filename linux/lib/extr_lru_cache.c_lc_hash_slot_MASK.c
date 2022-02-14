
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lru_cache {unsigned int nr_elements; struct hlist_head* lc_slot; } ;
struct hlist_head {int dummy; } ;



__attribute__((used)) static struct hlist_head *FUNC_0(struct lru_cache *VAR_0, unsigned int VAR_1)
{
 return VAR_0->lc_slot + (VAR_1 % VAR_0->nr_elements);
}
