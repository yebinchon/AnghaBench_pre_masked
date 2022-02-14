
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct rcu_head {int dummy; } ;
struct TYPE_2__ {int (* call ) (struct rcu_head*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 struct rcu_head* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct rcu_head*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_5)
{
 FUNC_0(&VAR_2);
 (void)FUNC_2(FUNC_4(&VAR_4));


 if (VAR_1->call) {
  struct rcu_head *VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);

  if (VAR_6)
   VAR_1->call(VAR_6, VAR_3);
 }
}
