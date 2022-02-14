
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int ip_map_cache; } ;
struct net {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sunrpc_net* FUNC_1 (struct net*,int ) ;
 int VAR_0 ;

void FUNC_2(struct net *VAR_1)
{
 struct sunrpc_net *VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_2->ip_map_cache);
}
