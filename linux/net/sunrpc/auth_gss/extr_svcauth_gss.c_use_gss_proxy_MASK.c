
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int use_gss_proxy; } ;
struct net {int dummy; } ;


 struct sunrpc_net* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net*,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct net *VAR_1)
{
 struct sunrpc_net *VAR_2 = FUNC_0(VAR_1, VAR_0);


 if (VAR_2->use_gss_proxy == -1)
  FUNC_1(VAR_1, 0);
 return VAR_2->use_gss_proxy;
}
