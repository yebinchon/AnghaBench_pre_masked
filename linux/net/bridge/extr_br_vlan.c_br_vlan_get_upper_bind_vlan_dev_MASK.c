
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct br_vlan_bind_walk_data {struct net_device* result; int vid; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ,struct br_vlan_bind_walk_data*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static struct net_device *
FUNC_3(struct net_device *VAR_1, u16 VAR_2)
{
 struct br_vlan_bind_walk_data VAR_3 = {
  .vid = VAR_2,
 };

 FUNC_1();
 FUNC_0(VAR_1, VAR_0,
          &VAR_3);
 FUNC_2();

 return VAR_3.result;
}
