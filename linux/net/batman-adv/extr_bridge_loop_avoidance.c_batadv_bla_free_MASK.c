
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * backbone_hash; int * claim_hash; int work; } ;
struct batadv_priv {TYPE_1__ bla; } ;
struct batadv_hard_iface {int dummy; } ;


 int FUNC_0 (struct batadv_priv*,int) ;
 int FUNC_1 (struct batadv_priv*,struct batadv_hard_iface*,int) ;
 int FUNC_2 (struct batadv_hard_iface*) ;
 int FUNC_3 (int *) ;
 struct batadv_hard_iface* FUNC_4 (struct batadv_priv*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct batadv_priv *VAR_0)
{
 struct batadv_hard_iface *VAR_1;

 FUNC_5(&VAR_0->bla.work);
 VAR_1 = FUNC_4(VAR_0);

 if (VAR_0->bla.claim_hash) {
  FUNC_1(VAR_0, VAR_1, 1);
  FUNC_3(VAR_0->bla.claim_hash);
  VAR_0->bla.claim_hash = ((void*)0);
 }
 if (VAR_0->bla.backbone_hash) {
  FUNC_0(VAR_0, 1);
  FUNC_3(VAR_0->bla.backbone_hash);
  VAR_0->bla.backbone_hash = ((void*)0);
 }
 if (VAR_1)
  FUNC_2(VAR_1);
}
