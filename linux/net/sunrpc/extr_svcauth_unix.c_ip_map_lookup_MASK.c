
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int ip_map_cache; } ;
struct net {int dummy; } ;
struct ip_map {int dummy; } ;
struct in6_addr {int dummy; } ;


 struct ip_map* FUNC_0 (int ,char*,struct in6_addr*) ;
 struct sunrpc_net* FUNC_1 (struct net*,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline struct ip_map *FUNC_2(struct net *VAR_1, char *VAR_2,
  struct in6_addr *VAR_3)
{
 struct sunrpc_net *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 return FUNC_0(VAR_4->ip_map_cache, VAR_2, VAR_3);
}
