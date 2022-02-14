
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* real_dev; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*,int ,int) ;
 TYPE_2__* FUNC_1 (struct net_device const*) ;

void FUNC_2(const struct net_device *VAR_0, char *VAR_1)
{
 FUNC_0(VAR_1, FUNC_1(VAR_0)->real_dev->name, 23);
}
