
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sja1105_meta {int tstamp; int dmac_byte_4; int dmac_byte_3; } ;
struct ethhdr {int * h_dest; } ;
struct TYPE_2__ {int meta_tstamp; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct ethhdr* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0,
      const struct sja1105_meta *VAR_1)
{
 struct ethhdr *VAR_2 = FUNC_1(VAR_0);

 VAR_2->h_dest[3] = VAR_1->dmac_byte_3;
 VAR_2->h_dest[4] = VAR_1->dmac_byte_4;
 FUNC_0(VAR_0)->meta_tstamp = VAR_1->tstamp;
}
