
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int use_gss_proxy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;
 struct sunrpc_net* FUNC_2 (struct net*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct net *VAR_2, int VAR_3)
{
 struct sunrpc_net *VAR_4 = FUNC_2(VAR_2, VAR_1);
 int VAR_5;

 FUNC_0(VAR_3 != 0 && VAR_3 != 1);
 VAR_5 = FUNC_1(&VAR_4->use_gss_proxy, -1, VAR_3);
 if (VAR_5 != -1 && VAR_5 != VAR_3)
  return -VAR_0;
 return 0;
}
