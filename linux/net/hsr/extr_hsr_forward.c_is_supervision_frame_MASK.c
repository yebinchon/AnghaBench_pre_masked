
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hsr_sup_tag {scalar_t__ HSR_TLV_type; int HSR_TLV_length; } ;
struct TYPE_2__ {scalar_t__ encap_proto; } ;
struct hsrv1_ethhdr_sp {struct hsr_sup_tag hsr_sup; TYPE_1__ hsr; } ;
struct hsrv0_ethhdr_sp {struct hsr_sup_tag hsr_sup; } ;
struct hsr_sup_payload {int dummy; } ;
struct hsr_priv {int sup_multicast_addr; } ;
struct ethhdr {scalar_t__ h_proto; int h_dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_5(struct hsr_priv *VAR_4, struct sk_buff *VAR_5)
{
 struct ethhdr *VAR_6;
 struct hsr_sup_tag *VAR_7;
 struct hsrv1_ethhdr_sp *VAR_8;

 FUNC_0(!FUNC_4(VAR_5));
 VAR_6 = (struct ethhdr *)FUNC_3(VAR_5);


 if (!FUNC_1(VAR_6->h_dest,
         VAR_4->sup_multicast_addr))
  return 0;


 if (!(VAR_6->h_proto == FUNC_2(VAR_1) ||
       VAR_6->h_proto == FUNC_2(VAR_0)))
  return 0;


 if (VAR_6->h_proto == FUNC_2(VAR_0)) {
  VAR_8 = (struct hsrv1_ethhdr_sp *)FUNC_3(VAR_5);
  if (VAR_8->hsr.encap_proto != FUNC_2(VAR_1))
   return 0;

  VAR_7 = &VAR_8->hsr_sup;
 } else {
  VAR_7 =
       &((struct hsrv0_ethhdr_sp *)FUNC_3(VAR_5))->hsr_sup;
 }

 if (VAR_7->HSR_TLV_type != VAR_2 &&
     VAR_7->HSR_TLV_type != VAR_3)
  return 0;
 if (VAR_7->HSR_TLV_length != 12 &&
     VAR_7->HSR_TLV_length != sizeof(struct hsr_sup_payload))
  return 0;

 return 1;
}
