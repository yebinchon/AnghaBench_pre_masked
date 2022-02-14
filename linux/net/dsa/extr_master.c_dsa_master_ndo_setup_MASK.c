
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_ops {scalar_t__ ndo_get_phys_port_name; } ;
struct net_device {struct net_device_ops* netdev_ops; struct dsa_port* dsa_ptr; } ;
struct dsa_switch {int dev; } ;
struct dsa_port {struct net_device_ops* orig_ndo_ops; struct dsa_switch* ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device_ops* FUNC_0 (int ,int,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct net_device_ops*,struct net_device_ops*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3)
{
 struct dsa_port *VAR_4 = VAR_3->dsa_ptr;
 struct dsa_switch *VAR_5 = VAR_4->ds;
 struct net_device_ops *VAR_6;

 if (VAR_3->netdev_ops->ndo_get_phys_port_name)
  return 0;

 VAR_6 = FUNC_0(VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_4->orig_ndo_ops = VAR_3->netdev_ops;
 if (VAR_4->orig_ndo_ops)
  FUNC_1(VAR_6, VAR_4->orig_ndo_ops, sizeof(*VAR_6));

 VAR_6->ndo_get_phys_port_name = VAR_2;

 VAR_3->netdev_ops = VAR_6;

 return 0;
}
