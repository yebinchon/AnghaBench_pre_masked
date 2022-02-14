
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct batadv_priv {int dummy; } ;
struct batadv_icmp_tp_packet {int subtype; } ;


 int VAR_0 ;


 int FUNC_0 (int ,struct batadv_priv*,char*,int) ;
 int FUNC_1 (struct batadv_priv*,struct sk_buff*) ;
 int FUNC_2 (struct batadv_priv*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

void FUNC_4(struct batadv_priv *VAR_1, struct sk_buff *VAR_2)
{
 struct batadv_icmp_tp_packet *VAR_3;

 VAR_3 = (struct batadv_icmp_tp_packet *)VAR_2->data;

 switch (VAR_3->subtype) {
 case 128:
  FUNC_2(VAR_1, VAR_2);
  break;
 case 129:
  FUNC_1(VAR_1, VAR_2);
  break;
 default:
  FUNC_0(VAR_0, VAR_1,
      "Received unknown TP Metric packet type %u\n",
      VAR_3->subtype);
 }
 FUNC_3(VAR_2);
}
