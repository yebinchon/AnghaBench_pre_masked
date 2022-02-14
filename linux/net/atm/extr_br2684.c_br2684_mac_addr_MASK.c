
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int mac_was_set; } ;


 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,void*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, void *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2)
  FUNC_0(VAR_0)->mac_was_set = 1;
 return VAR_2;
}
