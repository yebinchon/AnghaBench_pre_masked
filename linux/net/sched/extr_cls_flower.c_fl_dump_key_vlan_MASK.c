
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct flow_dissector_key_vlan {scalar_t__ vlan_priority; scalar_t__ vlan_id; } ;


 int FUNC_0 (struct flow_dissector_key_vlan*,int ,int) ;
 int FUNC_1 (struct sk_buff*,int,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0,
       int VAR_1, int VAR_2,
       struct flow_dissector_key_vlan *VAR_3,
       struct flow_dissector_key_vlan *VAR_4)
{
 int VAR_5;

 if (!FUNC_0(VAR_4, 0, sizeof(*VAR_4)))
  return 0;
 if (VAR_4->vlan_id) {
  VAR_5 = FUNC_1(VAR_0, VAR_1,
      VAR_3->vlan_id);
  if (VAR_5)
   return VAR_5;
 }
 if (VAR_4->vlan_priority) {
  VAR_5 = FUNC_2(VAR_0, VAR_2,
     VAR_3->vlan_priority);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
