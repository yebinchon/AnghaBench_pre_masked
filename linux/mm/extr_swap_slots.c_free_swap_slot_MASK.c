
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_slots_cache {scalar_t__ n_ret; int free_lock; int * slots_ret; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct swap_slots_cache* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_5(swp_entry_t VAR_3)
{
 struct swap_slots_cache *VAR_4;

 VAR_4 = FUNC_1(&VAR_1);
 if (FUNC_0(VAR_2 && VAR_4->slots_ret)) {
  FUNC_2(&VAR_4->free_lock);

  if (!VAR_2 || !VAR_4->slots_ret) {
   FUNC_3(&VAR_4->free_lock);
   goto direct_free;
  }
  if (VAR_4->n_ret >= VAR_0) {






   FUNC_4(VAR_4->slots_ret, VAR_4->n_ret);
   VAR_4->n_ret = 0;
  }
  VAR_4->slots_ret[VAR_4->n_ret++] = VAR_3;
  FUNC_3(&VAR_4->free_lock);
 } else {
direct_free:
  FUNC_4(&VAR_3, 1);
 }

 return 0;
}
