
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct batadv_unicast_packet {int dummy; } ;
struct batadv_orig_node {int dummy; } ;


 int FUNC_0 (struct sk_buff*,size_t,struct batadv_orig_node*) ;

__attribute__((used)) static bool FUNC_1(struct sk_buff *VAR_0,
         struct batadv_orig_node *VAR_1)
{
 size_t VAR_2 = sizeof(struct batadv_unicast_packet);

 return FUNC_0(VAR_0, VAR_2, VAR_1);
}
