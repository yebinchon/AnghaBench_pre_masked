
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct br_vlan_bind_walk_data {scalar_t__ vid; struct net_device* result; } ;
struct TYPE_2__ {scalar_t__ vlan_id; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
       void *VAR_1)
{
 struct br_vlan_bind_walk_data *VAR_2 = VAR_1;
 int VAR_3 = 0;

 if (FUNC_0(VAR_0) &&
     FUNC_1(VAR_0)->vlan_id == VAR_2->vid) {
  VAR_2->result = VAR_0;
  VAR_3 = 1;
 }

 return VAR_3;
}
