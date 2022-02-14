
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int gssd_dummy; } ;
struct net {int dummy; } ;


 struct sunrpc_net* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

void FUNC_2(struct net *VAR_1)
{
 struct sunrpc_net *VAR_2 = FUNC_0(VAR_1, VAR_0);

 FUNC_1(VAR_2->gssd_dummy);
}
