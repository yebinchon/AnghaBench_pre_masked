
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bridged; } ;
struct TYPE_4__ {TYPE_1__ mla_flags; } ;
struct batadv_priv {int soft_iface; TYPE_2__ mcast; } ;
struct batadv_mcast_querier_state {scalar_t__ shadowing; scalar_t__ exists; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct batadv_priv*,char*,char*) ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct batadv_priv *VAR_1, char *VAR_2,
    struct batadv_mcast_querier_state *VAR_3,
    struct batadv_mcast_querier_state *VAR_4)
{
 if (!VAR_3->exists && VAR_4->exists)
  FUNC_1(VAR_1->soft_iface, "%s Querier appeared\n",
       VAR_2);
 else if (VAR_3->exists && !VAR_4->exists)
  FUNC_1(VAR_1->soft_iface,
       "%s Querier disappeared - multicast optimizations disabled\n",
       VAR_2);
 else if (!VAR_1->mcast.mla_flags.bridged && !VAR_4->exists)
  FUNC_1(VAR_1->soft_iface,
       "No %s Querier present - multicast optimizations disabled\n",
       VAR_2);

 if (VAR_4->exists) {
  if ((!VAR_3->shadowing && VAR_4->shadowing) ||
      (!VAR_3->exists && VAR_4->shadowing))
   FUNC_0(VAR_0, VAR_1,
       "%s Querier is behind our bridged segment: Might shadow listeners\n",
       VAR_2);
  else if (VAR_3->shadowing && !VAR_4->shadowing)
   FUNC_0(VAR_0, VAR_1,
       "%s Querier is not behind our bridged segment\n",
       VAR_2);
 }
}
