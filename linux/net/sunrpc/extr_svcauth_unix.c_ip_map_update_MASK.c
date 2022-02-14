
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct unix_domain {int dummy; } ;
struct sunrpc_net {int ip_map_cache; } ;
struct net {int dummy; } ;
struct ip_map {int dummy; } ;


 int FUNC_0 (int ,struct ip_map*,struct unix_domain*,int ) ;
 struct sunrpc_net* FUNC_1 (struct net*,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_2(struct net *VAR_1, struct ip_map *VAR_2,
  struct unix_domain *VAR_3, time_t VAR_4)
{
 struct sunrpc_net *VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_0);
 return FUNC_0(VAR_5->ip_map_cache, VAR_2, VAR_3, VAR_4);
}
