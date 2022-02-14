
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int vlan_proto; } ;
typedef int netdev_features_t ;


 struct sk_buff* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct sk_buff *VAR_0,
       netdev_features_t VAR_1)
{
 if (FUNC_1(VAR_0) &&
     !FUNC_2(VAR_1, VAR_0->vlan_proto))
  VAR_0 = FUNC_0(VAR_0);
 return VAR_0;
}
