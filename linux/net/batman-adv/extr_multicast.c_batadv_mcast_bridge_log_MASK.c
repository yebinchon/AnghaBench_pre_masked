
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_mcast_mla_flags {int querier_ipv6; int querier_ipv4; scalar_t__ bridged; } ;
struct TYPE_2__ {struct batadv_mcast_mla_flags mla_flags; } ;
struct batadv_priv {TYPE_1__ mcast; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct batadv_priv*,char*) ;
 int FUNC_1 (struct batadv_priv*,char*,int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct batadv_priv *VAR_1,
   struct batadv_mcast_mla_flags *VAR_2)
{
 struct batadv_mcast_mla_flags *VAR_3 = &VAR_1->mcast.mla_flags;

 if (!VAR_3->bridged && VAR_2->bridged)
  FUNC_0(VAR_0, VAR_1,
      "Bridge added: Setting Unsnoopables(U)-flag\n");
 else if (VAR_3->bridged && !VAR_2->bridged)
  FUNC_0(VAR_0, VAR_1,
      "Bridge removed: Unsetting Unsnoopables(U)-flag\n");

 if (VAR_2->bridged) {
  FUNC_1(VAR_1, "IGMP",
      &VAR_3->querier_ipv4,
      &VAR_2->querier_ipv4);
  FUNC_1(VAR_1, "MLD",
      &VAR_3->querier_ipv6,
      &VAR_2->querier_ipv6);
 }
}
