
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mpoa_client {int egress_lock; TYPE_2__* eg_cache; } ;
struct TYPE_4__ {scalar_t__ tag; } ;
struct TYPE_5__ {struct TYPE_5__* next; int use; TYPE_1__ ctrl_info; } ;
typedef TYPE_2__ eg_cache_entry ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static eg_cache_entry *FUNC_3(__be32 VAR_0, struct mpoa_client *VAR_1)
{
 unsigned long VAR_2;
 eg_cache_entry *VAR_3;

 FUNC_0(&VAR_1->egress_lock, VAR_2);
 VAR_3 = VAR_1->eg_cache;
 while (VAR_3 != ((void*)0)) {
  if (VAR_3->ctrl_info.tag == VAR_0) {
   FUNC_2(&VAR_3->use);
   FUNC_1(&VAR_1->egress_lock, VAR_2);
   return VAR_3;
  }
  VAR_3 = VAR_3->next;
 }
 FUNC_1(&VAR_1->egress_lock, VAR_2);

 return ((void*)0);
}
