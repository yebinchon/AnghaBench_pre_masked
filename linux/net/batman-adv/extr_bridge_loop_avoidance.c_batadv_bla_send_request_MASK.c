
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct batadv_bla_backbone_gw {int request_sent; TYPE_2__* bat_priv; int vid; int orig; } ;
struct TYPE_4__ {int num_requests; } ;
struct TYPE_5__ {TYPE_1__ bla; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct batadv_bla_backbone_gw*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_5 (int ,TYPE_2__*,char*,int ) ;

__attribute__((used)) static void FUNC_6(struct batadv_bla_backbone_gw *VAR_2)
{

 FUNC_3(VAR_2);

 FUNC_5(VAR_1, VAR_2->bat_priv,
     "Sending REQUEST to %pM\n", VAR_2->orig);


 FUNC_4(VAR_2->bat_priv, VAR_2->orig,
         VAR_2->vid, VAR_0);


 if (!FUNC_1(&VAR_2->request_sent)) {
  FUNC_0(&VAR_2->bat_priv->bla.num_requests);
  FUNC_2(&VAR_2->request_sent, 1);
 }
}
