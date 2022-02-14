
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {void* protocol; } ;
struct nf_bridge_info {int orig_proto; } ;





 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 struct nf_bridge_info* FUNC_1 (struct sk_buff*) ;

void FUNC_2(struct sk_buff *VAR_2)
{
 const struct nf_bridge_info *VAR_3 = FUNC_1(VAR_2);

 switch (VAR_3->orig_proto) {
 case 130:
  VAR_2->protocol = FUNC_0(VAR_0);
  break;
 case 129:
  VAR_2->protocol = FUNC_0(VAR_1);
  break;
 case 128:
  break;
 }
}
