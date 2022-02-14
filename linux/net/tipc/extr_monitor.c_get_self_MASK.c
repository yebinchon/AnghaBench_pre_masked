
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_peer {int dummy; } ;
struct tipc_monitor {struct tipc_peer* self; } ;
struct net {int dummy; } ;


 struct tipc_monitor* FUNC_0 (struct net*,int) ;

__attribute__((used)) static struct tipc_peer *FUNC_1(struct net *VAR_0, int VAR_1)
{
 struct tipc_monitor *VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2->self;
}
