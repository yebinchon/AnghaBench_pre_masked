
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct rpc_clnt {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct rpc_clnt*) ;
 struct super_block* FUNC_1 (struct net*) ;
 struct net* FUNC_2 (struct rpc_clnt*) ;
 int FUNC_3 (struct net*) ;

__attribute__((used)) static void FUNC_4(struct rpc_clnt *VAR_0)
{
 struct net *VAR_1 = FUNC_2(VAR_0);
 struct super_block *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_0);
  FUNC_3(VAR_1);
 }
}
