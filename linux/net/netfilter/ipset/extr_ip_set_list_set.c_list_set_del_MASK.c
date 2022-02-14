
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_elem {int rcu; int id; int list; } ;
struct list_set {int net; } ;
struct ip_set {int elements; struct list_set* data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct ip_set *VAR_1, struct set_elem *VAR_2)
{
 struct list_set *VAR_3 = VAR_1->data;

 VAR_1->elements--;
 FUNC_2(&VAR_2->list);
 FUNC_1(VAR_3->net, VAR_2->id);
 FUNC_0(&VAR_2->rcu, VAR_0);
}
