
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int function; } ;
struct rt_bandwidth {TYPE_1__ rt_period_timer; int rt_runtime_lock; int rt_runtime; int rt_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

void FUNC_3(struct rt_bandwidth *VAR_3, u64 VAR_4, u64 VAR_5)
{
 VAR_3->rt_period = FUNC_1(VAR_4);
 VAR_3->rt_runtime = VAR_5;

 FUNC_2(&VAR_3->rt_runtime_lock);

 FUNC_0(&VAR_3->rt_period_timer, VAR_0,
       VAR_1);
 VAR_3->rt_period_timer.function = VAR_2;
}
