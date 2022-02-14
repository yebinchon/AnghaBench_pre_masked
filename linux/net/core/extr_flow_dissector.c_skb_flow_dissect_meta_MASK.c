
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int skb_iif; } ;
struct flow_dissector_key_meta {int ingress_ifindex; } ;
struct flow_dissector {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct flow_dissector*,int ) ;
 struct flow_dissector_key_meta* FUNC_1 (struct flow_dissector*,int ,void*) ;

void FUNC_2(const struct sk_buff *VAR_1,
      struct flow_dissector *VAR_2,
      void *VAR_3)
{
 struct flow_dissector_key_meta *VAR_4;

 if (!FUNC_0(VAR_2, VAR_0))
  return;

 VAR_4 = FUNC_1(VAR_2,
      VAR_0,
      VAR_3);
 VAR_4->ingress_ifindex = VAR_1->skb_iif;
}
