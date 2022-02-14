
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfulnl_instance {int rcu; int use; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nfulnl_instance *VAR_1)
{
 if (VAR_1 && FUNC_1(&VAR_1->use))
  FUNC_0(&VAR_1->rcu, VAR_0);
}
