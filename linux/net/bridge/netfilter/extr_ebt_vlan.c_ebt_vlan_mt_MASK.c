
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {struct ebt_vlan_info* matchinfo; } ;
struct vlan_hdr {unsigned char h_vlan_encapsulated_proto; int h_vlan_TCI; } ;
struct sk_buff {unsigned char protocol; } ;
struct ebt_vlan_info {int dummy; } ;
typedef int _frame ;
typedef unsigned char __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned short VAR_3 ;
 unsigned short FUNC_2 (int ) ;
 struct vlan_hdr* FUNC_3 (struct sk_buff const*,int ,int,struct vlan_hdr*) ;
 unsigned short FUNC_4 (struct sk_buff const*) ;
 scalar_t__ FUNC_5 (struct sk_buff const*) ;

__attribute__((used)) static bool
FUNC_6(const struct sk_buff *VAR_4, struct xt_action_param *VAR_5)
{
 const struct ebt_vlan_info *VAR_6 = VAR_5->matchinfo;

 unsigned short VAR_7;
 unsigned short VAR_8;
 unsigned char VAR_9;

 __be16 VAR_10;

 if (FUNC_5(VAR_4)) {
  VAR_7 = FUNC_4(VAR_4);
  VAR_10 = VAR_4->protocol;
 } else {
  const struct vlan_hdr *VAR_11;
  struct vlan_hdr VAR_12;

  VAR_11 = FUNC_3(VAR_4, 0, sizeof(VAR_12), &VAR_12);
  if (VAR_11 == ((void*)0))
   return 0;

  VAR_7 = FUNC_2(VAR_11->h_vlan_TCI);
  VAR_10 = VAR_11->h_vlan_encapsulated_proto;
 }
 VAR_8 = VAR_7 & VAR_3;
 VAR_9 = (VAR_7 >> 13) & 0x7;


 if (FUNC_1(VAR_1))
  FUNC_0(VAR_8, VAR_1);


 if (FUNC_1(VAR_2))
  FUNC_0(VAR_9, VAR_2);


 if (FUNC_1(VAR_0))
  FUNC_0(VAR_10, VAR_0);

 return 1;
}
