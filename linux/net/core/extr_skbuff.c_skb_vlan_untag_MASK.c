
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_hdr {int h_vlan_TCI; } ;
struct sk_buff {int protocol; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct sk_buff*,struct vlan_hdr*) ;

struct sk_buff *FUNC_13(struct sk_buff *VAR_2)
{
 struct vlan_hdr *VAR_3;
 u16 VAR_4;

 if (FUNC_11(FUNC_10(VAR_2))) {

  return VAR_2;
 }

 VAR_2 = FUNC_9(VAR_2, VAR_0);
 if (FUNC_11(!VAR_2))
  goto err_free;

 if (FUNC_11(!FUNC_3(VAR_2, VAR_1)))
  goto err_free;

 VAR_3 = (struct vlan_hdr *)VAR_2->data;
 VAR_4 = FUNC_2(VAR_3->h_vlan_TCI);
 FUNC_0(VAR_2, VAR_2->protocol, VAR_4);

 FUNC_4(VAR_2, VAR_1);
 FUNC_12(VAR_2, VAR_3);

 VAR_2 = FUNC_5(VAR_2);
 if (FUNC_11(!VAR_2))
  goto err_free;

 FUNC_7(VAR_2);
 FUNC_8(VAR_2);
 FUNC_6(VAR_2);

 return VAR_2;

err_free:
 FUNC_1(VAR_2);
 return ((void*)0);
}
