
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clusterip_config {int rcu; int refcount; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct clusterip_config *VAR_1)
{
 if (FUNC_1(&VAR_1->refcount))
  FUNC_0(&VAR_1->rcu, VAR_0);
}
