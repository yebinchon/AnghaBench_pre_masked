
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_monitor {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct tipc_monitor** monitors; } ;


 TYPE_1__* FUNC_0 (struct net*) ;

__attribute__((used)) static struct tipc_monitor *FUNC_1(struct net *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0)->monitors[VAR_1];
}
