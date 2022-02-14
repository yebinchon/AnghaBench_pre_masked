
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_hdr {int h_vlan_TCI; } ;
struct sk_buff {int data; int mac_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct sk_buff*,struct vlan_hdr*) ;

int FUNC_12(struct sk_buff *VAR_5, u16 *VAR_6)
{
 struct vlan_hdr *VAR_7;
 int VAR_8 = VAR_5->data - FUNC_5(VAR_5);
 int VAR_9;

 if (FUNC_0(VAR_8,
        "__skb_vlan_pop got skb with skb->data not at mac header (offset %d)\n",
        VAR_8)) {
  return -VAR_0;
 }

 VAR_9 = FUNC_4(VAR_5, VAR_3);
 if (FUNC_10(VAR_9))
  return VAR_9;

 FUNC_7(VAR_5, VAR_5->data + (2 * VAR_1), VAR_4);

 VAR_7 = (struct vlan_hdr *)(VAR_5->data + VAR_2);
 *VAR_6 = FUNC_3(VAR_7->h_vlan_TCI);

 FUNC_2(VAR_5->data + VAR_4, VAR_5->data, 2 * VAR_1);
 FUNC_1(VAR_5, VAR_4);

 FUNC_11(VAR_5, VAR_7);
 VAR_5->mac_header += VAR_4;

 if (FUNC_6(VAR_5) < VAR_2)
  FUNC_9(VAR_5, VAR_2);

 FUNC_8(VAR_5);

 return VAR_9;
}
