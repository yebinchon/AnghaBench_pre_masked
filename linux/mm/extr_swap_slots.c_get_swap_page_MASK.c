
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ val; } ;
typedef TYPE_1__ swp_entry_t ;
struct swap_slots_cache {int alloc_lock; scalar_t__ nr; int cur; TYPE_1__* slots; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct page*,TYPE_1__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct page*,TYPE_1__) ;
 struct swap_slots_cache* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct swap_slots_cache*) ;
 int VAR_2 ;

swp_entry_t FUNC_11(struct page *VAR_3)
{
 swp_entry_t VAR_4, *VAR_5;
 struct swap_slots_cache *VAR_6;

 VAR_4.val = 0;

 if (FUNC_1(VAR_3)) {
  if (FUNC_0(VAR_0))
   FUNC_3(1, &VAR_4, VAR_1);
  goto out;
 }
 VAR_6 = FUNC_9(&VAR_2);

 if (FUNC_4(FUNC_2() && VAR_6->slots)) {
  FUNC_6(&VAR_6->alloc_lock);
  if (VAR_6->slots) {
repeat:
   if (VAR_6->nr) {
    VAR_5 = &VAR_6->slots[VAR_6->cur++];
    VAR_4 = *VAR_5;
    VAR_5->val = 0;
    VAR_6->nr--;
   } else {
    if (FUNC_10(VAR_6))
     goto repeat;
   }
  }
  FUNC_7(&VAR_6->alloc_lock);
  if (VAR_4.val)
   goto out;
 }

 FUNC_3(1, &VAR_4, 1);
out:
 if (FUNC_5(VAR_3, VAR_4)) {
  FUNC_8(VAR_3, VAR_4);
  VAR_4.val = 0;
 }
 return VAR_4;
}
