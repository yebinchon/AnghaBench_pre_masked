
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mpoa_client {int ingress_lock; TYPE_1__* in_cache; } ;
struct atm_vcc {int dummy; } ;
struct TYPE_3__ {struct TYPE_3__* next; int use; struct atm_vcc* shortcut; } ;
typedef TYPE_1__ in_cache_entry ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static in_cache_entry *FUNC_3(struct atm_vcc *VAR_0,
        struct mpoa_client *VAR_1)
{
 in_cache_entry *VAR_2;

 FUNC_0(&VAR_1->ingress_lock);
 VAR_2 = VAR_1->in_cache;
 while (VAR_2 != ((void*)0)) {
  if (VAR_2->shortcut == VAR_0) {
   FUNC_2(&VAR_2->use);
   FUNC_1(&VAR_1->ingress_lock);
   return VAR_2;
  }
  VAR_2 = VAR_2->next;
 }
 FUNC_1(&VAR_1->ingress_lock);

 return ((void*)0);
}
