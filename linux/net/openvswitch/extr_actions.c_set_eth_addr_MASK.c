
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dst; int src; } ;
struct sw_flow_key {TYPE_1__ eth; } ;
struct sk_buff {int dummy; } ;
struct ovs_key_ethernet {int eth_dst; int eth_src; } ;
struct TYPE_6__ {int h_dest; int h_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,TYPE_2__*,int) ;
 int FUNC_5 (struct sk_buff*,TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_2, struct sw_flow_key *VAR_3,
   const struct ovs_key_ethernet *VAR_4,
   const struct ovs_key_ethernet *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_1);
 if (FUNC_6(VAR_6))
  return VAR_6;

 FUNC_4(VAR_2, FUNC_0(VAR_2), VAR_0 * 2);

 FUNC_2(FUNC_0(VAR_2)->h_source, VAR_4->eth_src,
          VAR_5->eth_src);
 FUNC_2(FUNC_0(VAR_2)->h_dest, VAR_4->eth_dst,
          VAR_5->eth_dst);

 FUNC_5(VAR_2, FUNC_0(VAR_2), VAR_0 * 2);

 FUNC_1(VAR_3->eth.src, FUNC_0(VAR_2)->h_source);
 FUNC_1(VAR_3->eth.dst, FUNC_0(VAR_2)->h_dest);
 return 0;
}
