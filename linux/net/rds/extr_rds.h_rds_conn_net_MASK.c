
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_connection {int c_net; } ;
struct net {int dummy; } ;


 struct net* FUNC_0 (int *) ;

__attribute__((used)) static inline
struct net *FUNC_1(struct rds_connection *VAR_0)
{
 return FUNC_0(&VAR_0->c_net);
}
