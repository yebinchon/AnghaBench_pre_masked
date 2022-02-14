
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct batadv_unicast_packet {int ttvn; int dest; int ttl; int packet_type; int version; } ;
struct batadv_orig_node {int orig; int last_ttvn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static bool
FUNC_3(struct sk_buff *VAR_3, int VAR_4,
      struct batadv_orig_node *VAR_5)
{
 struct batadv_unicast_packet *VAR_6;
 u8 VAR_7 = (u8)FUNC_0(&VAR_5->last_ttvn);

 if (FUNC_1(VAR_3, VAR_4) < 0)
  return 0;

 VAR_6 = (struct batadv_unicast_packet *)VAR_3->data;
 VAR_6->version = VAR_0;

 VAR_6->packet_type = VAR_2;

 VAR_6->ttl = VAR_1;

 FUNC_2(VAR_6->dest, VAR_5->orig);

 VAR_6->ttvn = VAR_7;

 return 1;
}
