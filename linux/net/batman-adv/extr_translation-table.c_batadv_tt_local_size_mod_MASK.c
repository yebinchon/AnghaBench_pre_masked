
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_entries; } ;
struct batadv_softif_vlan {TYPE_1__ tt; } ;
struct batadv_priv {int dummy; } ;


 int FUNC_0 (int,int *) ;
 struct batadv_softif_vlan* FUNC_1 (struct batadv_priv*,unsigned short) ;
 int FUNC_2 (struct batadv_softif_vlan*) ;

__attribute__((used)) static void FUNC_3(struct batadv_priv *VAR_0,
         unsigned short VAR_1, int VAR_2)
{
 struct batadv_softif_vlan *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_3)
  return;

 FUNC_0(VAR_2, &VAR_3->tt.num_entries);

 FUNC_2(VAR_3);
}
