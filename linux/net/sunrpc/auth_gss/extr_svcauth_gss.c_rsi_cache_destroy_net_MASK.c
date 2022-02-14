
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {struct cache_detail* rsi_cache; } ;
struct net {int dummy; } ;
struct cache_detail {int dummy; } ;


 int FUNC_0 (struct cache_detail*,struct net*) ;
 int FUNC_1 (struct cache_detail*) ;
 int FUNC_2 (struct cache_detail*,struct net*) ;
 struct sunrpc_net* FUNC_3 (struct net*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct net *VAR_1)
{
 struct sunrpc_net *VAR_2 = FUNC_3(VAR_1, VAR_0);
 struct cache_detail *VAR_3 = VAR_2->rsi_cache;

 VAR_2->rsi_cache = ((void*)0);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3, VAR_1);
 FUNC_0(VAR_3, VAR_1);
}
