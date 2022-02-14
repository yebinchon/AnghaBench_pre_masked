
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_tp_vars {int timer; TYPE_1__* bat_priv; int list; int finish_work; } ;
struct batadv_priv {int dummy; } ;
struct TYPE_2__ {int tp_num; int tp_list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct batadv_tp_vars*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct batadv_priv *VAR_0,
         struct batadv_tp_vars *VAR_1)
{
 FUNC_2(&VAR_1->finish_work);

 FUNC_6(&VAR_1->bat_priv->tp_list_lock);
 FUNC_5(&VAR_1->list);
 FUNC_7(&VAR_1->bat_priv->tp_list_lock);


 FUNC_1(VAR_1);

 FUNC_0(&VAR_1->bat_priv->tp_num);


 FUNC_4(&VAR_1->timer);





 FUNC_3(&VAR_1->timer);
 FUNC_1(VAR_1);
}
