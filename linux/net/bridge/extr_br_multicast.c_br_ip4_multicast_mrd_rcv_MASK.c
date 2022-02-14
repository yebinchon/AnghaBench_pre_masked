
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_bridge_port {int dummy; } ;
struct net_bridge {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ protocol; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port*) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct net_bridge *VAR_3,
        struct net_bridge_port *VAR_4,
        struct sk_buff *VAR_5)
{
 if (FUNC_2(VAR_5)->protocol != VAR_2 ||
     FUNC_1(VAR_5)->type != VAR_1)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_4);

 return 0;
}
