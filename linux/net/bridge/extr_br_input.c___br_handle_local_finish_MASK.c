
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dev; } ;
struct net_bridge_port {int flags; int br; } ;
struct TYPE_2__ {int h_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_bridge_port*,int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 struct net_bridge_port* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct net_bridge_port*,struct sk_buff*,int *) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_2)
{
 struct net_bridge_port *VAR_3 = FUNC_2(VAR_2->dev);
 u16 VAR_4 = 0;


 if ((VAR_3->flags & VAR_1) &&
     !FUNC_1(VAR_3->br, VAR_0) &&
     FUNC_3(VAR_3, VAR_2, &VAR_4))
  FUNC_0(VAR_3->br, VAR_3, FUNC_4(VAR_2)->h_source, VAR_4, 0);
}
