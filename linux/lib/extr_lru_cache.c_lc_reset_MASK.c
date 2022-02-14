
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lru_cache {void* lc_slot; int nr_elements; int element_size; int free; int element_off; struct lc_element** lc_element; scalar_t__ flags; scalar_t__ pending_changes; scalar_t__ changed; scalar_t__ locked; scalar_t__ starving; scalar_t__ misses; scalar_t__ hits; scalar_t__ used; int to_be_changed; int lru; int in_use; } ;
struct lc_element {unsigned int lc_index; int list; void* lc_new_number; void* lc_number; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (int *) ;
 void* VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (void*,int ,int) ;

void FUNC_3(struct lru_cache *VAR_1)
{
 unsigned VAR_2;

 FUNC_0(&VAR_1->in_use);
 FUNC_0(&VAR_1->lru);
 FUNC_0(&VAR_1->free);
 FUNC_0(&VAR_1->to_be_changed);
 VAR_1->used = 0;
 VAR_1->hits = 0;
 VAR_1->misses = 0;
 VAR_1->starving = 0;
 VAR_1->locked = 0;
 VAR_1->changed = 0;
 VAR_1->pending_changes = 0;
 VAR_1->flags = 0;
 FUNC_2(VAR_1->lc_slot, 0, sizeof(struct hlist_head) * VAR_1->nr_elements);

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_elements; VAR_2++) {
  struct lc_element *VAR_3 = VAR_1->lc_element[VAR_2];
  void *VAR_4 = VAR_3;
  VAR_4 -= VAR_1->element_off;
  FUNC_2(VAR_4, 0, VAR_1->element_size);

  VAR_3->lc_index = VAR_2;
  VAR_3->lc_number = VAR_0;
  VAR_3->lc_new_number = VAR_0;
  FUNC_1(&VAR_3->list, &VAR_1->free);
 }
}
