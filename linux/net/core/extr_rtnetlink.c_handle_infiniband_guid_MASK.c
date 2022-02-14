
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_ops {int (* ndo_set_vf_guid ) (struct net_device*,int ,int ,int) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;
struct ifla_vf_guid {int guid; int vf; } ;


 int FUNC_0 (struct net_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, struct ifla_vf_guid *VAR_1,
      int VAR_2)
{
 const struct net_device_ops *VAR_3 = VAR_0->netdev_ops;

 return VAR_3->ndo_set_vf_guid(VAR_0, VAR_1->vf, VAR_1->guid, VAR_2);
}
