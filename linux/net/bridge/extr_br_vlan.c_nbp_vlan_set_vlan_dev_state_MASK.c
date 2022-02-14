
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct net_bridge_port {TYPE_1__* br; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 struct net_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_bridge_port *VAR_1, u16 VAR_2)
{
 struct net_device *VAR_3;

 if (!FUNC_0(VAR_1->br, VAR_0))
  return;

 VAR_3 = FUNC_1(VAR_1->br->dev, VAR_2);
 if (VAR_3)
  FUNC_2(VAR_1->br, VAR_3);
}
