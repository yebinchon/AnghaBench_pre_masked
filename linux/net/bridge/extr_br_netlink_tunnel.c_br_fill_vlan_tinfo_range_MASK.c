
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tunnel_id; } ;
struct net_bridge_vlan {scalar_t__ vid; TYPE_1__ tinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_2,
        struct net_bridge_vlan *VAR_3,
        struct net_bridge_vlan *VAR_4)
{
 int VAR_5;

 if (VAR_4 && (VAR_4->vid - VAR_3->vid) > 0) {

  VAR_5 = FUNC_0(VAR_2, VAR_3->vid,
      VAR_3->tinfo.tunnel_id,
      VAR_0);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_0(VAR_2, VAR_4->vid,
      VAR_4->tinfo.tunnel_id,
      VAR_1);
  if (VAR_5)
   return VAR_5;
 } else {
  VAR_5 = FUNC_0(VAR_2, VAR_3->vid,
      VAR_3->tinfo.tunnel_id,
      0);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
