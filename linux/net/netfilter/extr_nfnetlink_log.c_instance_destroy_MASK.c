
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfulnl_instance {int dummy; } ;
struct nfnl_log_net {int instances_lock; } ;


 int FUNC_0 (struct nfulnl_instance*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct nfnl_log_net *VAR_0,
   struct nfulnl_instance *VAR_1)
{
 FUNC_1(&VAR_0->instances_lock);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_0->instances_lock);
}
