
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int veth ;
struct vlan_ethhdr {int h_vlan_encapsulated_proto; int h_vlan_TCI; int h_vlan_proto; } ;
struct sk_buff {int data; int protocol; int vlan_proto; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ,int,struct vlan_ethhdr*) ;
 scalar_t__ FUNC_3 (struct sk_buff const*,int,struct vlan_ethhdr*,int) ;
 int FUNC_4 (struct sk_buff const*) ;
 int FUNC_5 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3,
       const struct sk_buff *VAR_4)
{
 struct vlan_ethhdr VAR_5;
 int VAR_6;

 FUNC_0(sizeof(VAR_5) > VAR_2);

 VAR_6 = FUNC_4(VAR_4) - VAR_4->data;
 if (VAR_6 != -VAR_0)
  return -1;

 if (FUNC_3(VAR_4, VAR_6, &VAR_5, VAR_0))
  return -1;

 VAR_5.h_vlan_proto = VAR_4->vlan_proto;
 VAR_5.h_vlan_TCI = FUNC_1(FUNC_5(VAR_4));
 VAR_5.h_vlan_encapsulated_proto = VAR_4->protocol;

 return FUNC_2(VAR_3, VAR_1, sizeof(VAR_5), &VAR_5);
}
