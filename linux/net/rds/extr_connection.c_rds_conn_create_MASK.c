
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rds_transport {int dummy; } ;
struct rds_connection {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int gfp_t ;


 struct rds_connection* FUNC_0 (struct net*,struct in6_addr const*,struct in6_addr const*,struct rds_transport*,int ,int ,int ,int) ;

struct rds_connection *FUNC_1(struct net *VAR_0,
           const struct in6_addr *VAR_1,
           const struct in6_addr *VAR_2,
           struct rds_transport *VAR_3, u8 VAR_4,
           gfp_t VAR_5, int VAR_6)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, VAR_4, 0, VAR_6);
}
