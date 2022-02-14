
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
struct rds_transport {scalar_t__ (* laddr_check ) (struct net*,struct in6_addr const*,int ) ;int t_owner; } ;
struct net {int dummy; } ;
struct in6_addr {int * s6_addr32; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct in6_addr const*) ;
 scalar_t__ FUNC_2 (struct in6_addr const*) ;
 struct rds_transport VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct net*,struct in6_addr const*,int ) ;
 struct rds_transport** VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

struct rds_transport *FUNC_6(struct net *VAR_5,
           const struct in6_addr *VAR_6,
           __u32 VAR_7)
{
 struct rds_transport *VAR_8 = ((void*)0);
 struct rds_transport *VAR_9;
 unsigned int VAR_10;

 if (FUNC_2(VAR_6)) {
  if (*(u_int8_t *)&VAR_6->s6_addr32[3] == VAR_0)
   return &VAR_2;
 } else if (FUNC_1(VAR_6)) {
  return &VAR_2;
 }

 FUNC_0(&VAR_3);
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_9 = VAR_4[VAR_10];

  if (VAR_9 && (VAR_9->laddr_check(VAR_5, VAR_6, VAR_7) == 0) &&
      (!VAR_9->t_owner || FUNC_4(VAR_9->t_owner))) {
   VAR_8 = VAR_9;
   break;
  }
 }
 FUNC_5(&VAR_3);

 return VAR_8;
}
