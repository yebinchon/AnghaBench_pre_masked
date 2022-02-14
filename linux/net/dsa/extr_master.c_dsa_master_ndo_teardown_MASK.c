
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * netdev_ops; struct dsa_port* dsa_ptr; } ;
struct dsa_port {int * orig_ndo_ops; } ;



__attribute__((used)) static void FUNC_0(struct net_device *VAR_0)
{
 struct dsa_port *VAR_1 = VAR_0->dsa_ptr;

 VAR_0->netdev_ops = VAR_1->orig_ndo_ops;
 VAR_1->orig_ndo_ops = ((void*)0);
}
