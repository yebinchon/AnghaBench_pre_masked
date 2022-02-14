
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_hashlimit_htable {int count; } ;
struct dsthash_ent {int rcu; int node; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct xt_hashlimit_htable *VAR_1, struct dsthash_ent *VAR_2)
{
 FUNC_1(&VAR_2->node);
 FUNC_0(&VAR_2->rcu, VAR_0);
 VAR_1->count--;
}
