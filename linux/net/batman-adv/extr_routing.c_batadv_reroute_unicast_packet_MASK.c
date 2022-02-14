
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct batadv_unicast_packet {scalar_t__ ttvn; int dest; } ;
struct TYPE_4__ {int vn; } ;
struct batadv_priv {TYPE_2__ tt; } ;
struct batadv_orig_node {int last_ttvn; scalar_t__* orig; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; } ;
struct TYPE_3__ {scalar_t__* dev_addr; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (struct batadv_hard_iface*) ;
 scalar_t__ FUNC_3 (struct batadv_priv*,scalar_t__*,unsigned short) ;
 int FUNC_4 (struct batadv_orig_node*) ;
 struct batadv_hard_iface* FUNC_5 (struct batadv_priv*) ;
 struct batadv_orig_node* FUNC_6 (struct batadv_priv*,int *,scalar_t__*,unsigned short) ;
 int FUNC_7 (int ,scalar_t__*) ;
 int FUNC_8 (struct sk_buff*,struct batadv_unicast_packet*,int) ;
 int FUNC_9 (struct sk_buff*,struct batadv_unicast_packet*,int) ;

__attribute__((used)) static bool
FUNC_10(struct batadv_priv *VAR_0, struct sk_buff *VAR_1,
         struct batadv_unicast_packet *VAR_2,
         u8 *VAR_3, unsigned short VAR_4)
{
 struct batadv_orig_node *VAR_5 = ((void*)0);
 struct batadv_hard_iface *VAR_6 = ((void*)0);
 bool VAR_7 = 0;
 u8 *VAR_8, VAR_9;

 if (FUNC_3(VAR_0, VAR_3, VAR_4)) {
  VAR_6 = FUNC_5(VAR_0);
  if (!VAR_6)
   goto out;
  VAR_8 = VAR_6->net_dev->dev_addr;
  VAR_9 = (u8)FUNC_0(&VAR_0->tt.vn);
 } else {
  VAR_5 = FUNC_6(VAR_0, ((void*)0), VAR_3,
           VAR_4);
  if (!VAR_5)
   goto out;

  if (FUNC_1(VAR_5->orig, VAR_2->dest))
   goto out;

  VAR_8 = VAR_5->orig;
  VAR_9 = (u8)FUNC_0(&VAR_5->last_ttvn);
 }


 FUNC_8(VAR_1, VAR_2, sizeof(*VAR_2));
 FUNC_7(VAR_2->dest, VAR_8);
 VAR_2->ttvn = VAR_9;
 FUNC_9(VAR_1, VAR_2, sizeof(*VAR_2));

 VAR_7 = 1;
out:
 if (VAR_6)
  FUNC_2(VAR_6);
 if (VAR_5)
  FUNC_4(VAR_5);

 return VAR_7;
}
