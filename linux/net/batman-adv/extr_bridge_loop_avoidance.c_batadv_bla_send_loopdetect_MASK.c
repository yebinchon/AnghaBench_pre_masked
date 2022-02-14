
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int loopdetect_addr; } ;
struct batadv_priv {TYPE_1__ bla; } ;
struct batadv_bla_backbone_gw {int vid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct batadv_priv*,int ,int ,int ) ;
 int FUNC_1 (int ,struct batadv_priv*,char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct batadv_priv *VAR_2,
      struct batadv_bla_backbone_gw *VAR_3)
{
 FUNC_1(VAR_1, VAR_2, "Send loopdetect frame for vid %d\n",
     VAR_3->vid);
 FUNC_0(VAR_2, VAR_2->bla.loopdetect_addr,
         VAR_3->vid, VAR_0);
}
