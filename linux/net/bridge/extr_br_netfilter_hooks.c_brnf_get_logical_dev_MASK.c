
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int vlan_proto; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct brnf_net {scalar_t__ pass_vlan_indev; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (struct net_device*,int ,int) ;
 struct net_device* FUNC_1 (struct net_device const*) ;
 int VAR_1 ;
 struct brnf_net* FUNC_2 (struct net const*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static struct net_device *FUNC_5(struct sk_buff *VAR_2,
            const struct net_device *VAR_3,
            const struct net *VAR_4)
{
 struct net_device *VAR_5, *VAR_6;
 struct brnf_net *VAR_7 = FUNC_2(VAR_4, VAR_1);

 VAR_6 = FUNC_1(VAR_3);

 if (VAR_7->pass_vlan_indev == 0 || !FUNC_4(VAR_2))
  return VAR_6;

 VAR_5 = FUNC_0(VAR_6, VAR_2->vlan_proto,
        FUNC_3(VAR_2) & VAR_0);

 return VAR_5 ? VAR_5 : VAR_6;
}
