
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_forw_packet {int skb; } ;
struct TYPE_2__ {scalar_t__ num_bcasts; } ;


 TYPE_1__* FUNC_0 (int ) ;

bool FUNC_1(struct batadv_forw_packet *VAR_0)
{
 return FUNC_0(VAR_0->skb)->num_bcasts > 0;
}
