
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ s_node; int s_net; } ;
struct TYPE_4__ {TYPE_1__ gateway; int flags; struct net_device* dev; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2)
{
 VAR_1.dev = VAR_2;
 VAR_1.flags = VAR_0;
 VAR_1.gateway.s_net = FUNC_0(0);
 VAR_1.gateway.s_node = 0;
}
