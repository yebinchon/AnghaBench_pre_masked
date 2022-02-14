
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct task_struct {int flags; } ;
struct cpumask {int dummy; } ;
struct TYPE_5__ {unsigned int kswapd_order; int kswapd_classzone_idx; int node_id; } ;
typedef TYPE_1__ pg_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (TYPE_1__*,unsigned int,unsigned int) ;
 int FUNC_1 (struct cpumask const*) ;
 struct cpumask* FUNC_2 (int ) ;
 struct task_struct* VAR_4 ;
 unsigned int FUNC_3 (TYPE_1__*,unsigned int) ;
 int FUNC_4 (TYPE_1__*,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct task_struct*,struct cpumask const*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,unsigned int,unsigned int) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(void *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 unsigned int VAR_8 = VAR_0 - 1;
 pg_data_t *VAR_9 = (pg_data_t*)VAR_5;
 struct task_struct *VAR_10 = VAR_4;
 const struct cpumask *VAR_11 = FUNC_2(VAR_9->node_id);

 if (!FUNC_1(VAR_11))
  FUNC_6(VAR_10, VAR_11);
 VAR_10->flags |= VAR_2 | VAR_3 | VAR_1;
 FUNC_7();

 VAR_9->kswapd_order = 0;
 VAR_9->kswapd_classzone_idx = VAR_0;
 for ( ; ; ) {
  bool VAR_12;

  VAR_6 = VAR_7 = VAR_9->kswapd_order;
  VAR_8 = FUNC_3(VAR_9, VAR_8);

kswapd_try_sleep:
  FUNC_4(VAR_9, VAR_6, VAR_7,
     VAR_8);


  VAR_6 = VAR_7 = VAR_9->kswapd_order;
  VAR_8 = FUNC_3(VAR_9, VAR_8);
  VAR_9->kswapd_order = 0;
  VAR_9->kswapd_classzone_idx = VAR_0;

  VAR_12 = FUNC_9();
  if (FUNC_5())
   break;





  if (VAR_12)
   continue;
  FUNC_8(VAR_9->node_id, VAR_8,
      VAR_6);
  VAR_7 = FUNC_0(VAR_9, VAR_6, VAR_8);
  if (VAR_7 < VAR_6)
   goto kswapd_try_sleep;
 }

 VAR_10->flags &= ~(VAR_2 | VAR_3 | VAR_1);

 return 0;
}
