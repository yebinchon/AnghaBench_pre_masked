
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_head {int tci; int tpid; } ;
struct sk_buff {int data; int len; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*,int *) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_2, struct vlan_head *VAR_3,
     bool VAR_4)
{
 struct vlan_head *VAR_5 = (struct vlan_head *)VAR_2->data;

 if (FUNC_6(!FUNC_4(VAR_5->tpid)))
  return 0;

 if (FUNC_9(VAR_2->len < sizeof(struct vlan_head) + sizeof(__be16)))
  return 0;

 if (FUNC_9(!FUNC_7(VAR_2, sizeof(struct vlan_head) +
     sizeof(__be16))))
  return -VAR_0;

 VAR_5 = (struct vlan_head *)VAR_2->data;
 VAR_3->tci = VAR_5->tci | FUNC_5(VAR_1);
 VAR_3->tpid = VAR_5->tpid;

 if (FUNC_9(VAR_4)) {
  int VAR_6 = VAR_2->data - FUNC_8(VAR_2);
  u16 VAR_7;
  int VAR_8;

  FUNC_1(VAR_2, VAR_6);
  VAR_8 = FUNC_2(VAR_2, &VAR_7);
  FUNC_0(VAR_2, VAR_6);
  if (VAR_8)
   return VAR_8;
  FUNC_3(VAR_2, VAR_3->tpid, VAR_7);
 } else {
  FUNC_0(VAR_2, sizeof(struct vlan_head));
 }
 return 1;
}
