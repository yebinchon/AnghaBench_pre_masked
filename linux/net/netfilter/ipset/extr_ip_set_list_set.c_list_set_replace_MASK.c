
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_elem {int rcu; int id; int list; } ;
struct list_set {int net; } ;
struct ip_set {struct list_set* data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_3(struct ip_set *VAR_1, struct set_elem *VAR_2, struct set_elem *VAR_3)
{
 struct list_set *VAR_4 = VAR_1->data;

 FUNC_2(&VAR_3->list, &VAR_2->list);
 FUNC_1(VAR_4->net, VAR_3->id);
 FUNC_0(&VAR_3->rcu, VAR_0);
}
