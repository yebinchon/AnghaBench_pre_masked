
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_lblc_entry {int rcu_head; int list; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct ip_vs_lblc_entry *VAR_1)
{
 FUNC_1(&VAR_1->list);
 FUNC_0(&VAR_1->rcu_head, VAR_0);
}
