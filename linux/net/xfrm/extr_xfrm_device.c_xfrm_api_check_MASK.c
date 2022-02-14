
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; TYPE_1__* xfrmdev_ops; } ;
struct TYPE_2__ {scalar_t__ xdo_dev_state_delete; scalar_t__ xdo_dev_state_add; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_4)
{
 if (VAR_4->features & (VAR_0 | VAR_1))
  return VAR_2;


 return VAR_3;
}
