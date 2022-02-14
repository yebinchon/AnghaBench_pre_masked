
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {TYPE_1__* tunnel_dst; int tunnel_id; } ;
struct net_bridge_vlan {TYPE_2__ tinfo; } ;
struct TYPE_3__ {int dst; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct sk_buff *VAR_0,
     struct net_bridge_vlan *VAR_1)
{
 int VAR_2;

 if (!VAR_1 || !VAR_1->tinfo.tunnel_id)
  return 0;

 if (FUNC_5(!FUNC_4(VAR_0)))
  return 0;

 FUNC_1(VAR_0);
 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_0, FUNC_0(&VAR_1->tinfo.tunnel_dst->dst));

 return 0;
}
