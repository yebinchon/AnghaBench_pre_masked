
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dst_entry {struct net_device* dev; int output; int input; TYPE_1__* ops; int obsolete; } ;
struct TYPE_2__ {int (* ifdown ) (struct dst_entry*,struct net_device*,int) ;} ;


 int VAR_0 ;
 struct net_device* VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct dst_entry*,struct net_device*,int) ;

void FUNC_3(struct dst_entry *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->dev;

 VAR_4->obsolete = VAR_0;
 if (VAR_4->ops->ifdown)
  VAR_4->ops->ifdown(VAR_4, VAR_5, 1);
 VAR_4->input = VAR_2;
 VAR_4->output = VAR_3;
 VAR_4->dev = VAR_1;
 FUNC_0(VAR_4->dev);
 FUNC_1(VAR_5);
}
