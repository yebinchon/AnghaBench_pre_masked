
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_bridge_port {TYPE_1__* br; int dev; } ;
struct TYPE_2__ {scalar_t__ stp_enabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct net_bridge_port*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_bridge_port *VAR_6, u8 VAR_7)
{
 if (VAR_7 > VAR_1)
  return -VAR_4;


 if (VAR_6->br->stp_enabled == VAR_0)
  return -VAR_3;




 if (!FUNC_3(VAR_6->dev) ||
     (!FUNC_2(VAR_6->dev) && VAR_7 != VAR_2))
  return -VAR_5;

 FUNC_1(VAR_6, VAR_7);
 FUNC_0(VAR_6->br);
 return 0;
}
