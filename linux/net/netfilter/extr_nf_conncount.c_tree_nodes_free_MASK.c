
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_root {int dummy; } ;
struct TYPE_2__ {int list_lock; int count; } ;
struct nf_conncount_rb {TYPE_1__ list; int rcu_head; int node; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,struct rb_root*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rb_root *VAR_1,
       struct nf_conncount_rb *VAR_2[],
       unsigned int VAR_3)
{
 struct nf_conncount_rb *VAR_4;

 while (VAR_3) {
  VAR_4 = VAR_2[--VAR_3];
  FUNC_2(&VAR_4->list.list_lock);
  if (!VAR_4->list.count) {
   FUNC_1(&VAR_4->node, VAR_1);
   FUNC_0(&VAR_4->rcu_head, VAR_0);
  }
  FUNC_3(&VAR_4->list.list_lock);
 }
}
