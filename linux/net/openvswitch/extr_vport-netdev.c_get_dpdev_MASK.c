
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct datapath {int dummy; } ;


 int VAR_0 ;
 struct vport* FUNC_0 (struct datapath const*,int ) ;

__attribute__((used)) static struct net_device *FUNC_1(const struct datapath *VAR_1)
{
 struct vport *VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 return VAR_2->dev;
}
