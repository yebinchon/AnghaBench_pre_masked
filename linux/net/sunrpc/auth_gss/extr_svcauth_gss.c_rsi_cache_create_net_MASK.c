
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {struct cache_detail* rsi_cache; } ;
struct net {int dummy; } ;
struct cache_detail {int dummy; } ;


 scalar_t__ FUNC_0 (struct cache_detail*) ;
 int FUNC_1 (struct cache_detail*) ;
 struct cache_detail* FUNC_2 (int *,struct net*) ;
 int FUNC_3 (struct cache_detail*,struct net*) ;
 int FUNC_4 (struct cache_detail*,struct net*) ;
 struct sunrpc_net* FUNC_5 (struct net*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct net *VAR_2)
{
 struct sunrpc_net *VAR_3 = FUNC_5(VAR_2, VAR_1);
 struct cache_detail *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(&VAR_0, VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 VAR_5 = FUNC_4(VAR_4, VAR_2);
 if (VAR_5) {
  FUNC_3(VAR_4, VAR_2);
  return VAR_5;
 }
 VAR_3->rsi_cache = VAR_4;
 return 0;
}
