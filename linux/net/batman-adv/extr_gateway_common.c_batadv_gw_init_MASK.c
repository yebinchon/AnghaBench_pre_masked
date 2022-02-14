
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sel_class; } ;
struct batadv_priv {TYPE_3__ gw; TYPE_2__* algo_ops; } ;
struct TYPE_4__ {int (* init_sel_class ) (struct batadv_priv*) ;} ;
struct TYPE_5__ {TYPE_1__ gw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;
 int FUNC_1 (struct batadv_priv*,int ,int *,int ,int,int ) ;
 int FUNC_2 (struct batadv_priv*) ;

void FUNC_3(struct batadv_priv *VAR_3)
{
 if (VAR_3->algo_ops->gw.init_sel_class)
  VAR_3->algo_ops->gw.init_sel_class(VAR_3);
 else
  FUNC_0(&VAR_3->gw.sel_class, 1);

 FUNC_1(VAR_3, VAR_2,
         ((void*)0), VAR_0, 1,
         VAR_1);
}
