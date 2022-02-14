
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_hard_iface {unsigned int num_bcasts; } ;
struct batadv_forw_packet {int skb; } ;
struct TYPE_2__ {unsigned int num_bcasts; } ;


 unsigned int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(struct batadv_forw_packet *VAR_1,
          struct batadv_hard_iface *VAR_2)
{
 unsigned int VAR_3;

 if (VAR_2)
  VAR_3 = VAR_2->num_bcasts;
 else
  VAR_3 = VAR_0;

 return FUNC_0(VAR_1->skb)->num_bcasts < VAR_3;
}
