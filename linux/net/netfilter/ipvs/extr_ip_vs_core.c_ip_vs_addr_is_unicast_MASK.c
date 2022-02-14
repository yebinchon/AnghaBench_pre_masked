
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip; int in6; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct net *VAR_3, int VAR_4,
     union nf_inet_addr *VAR_5)
{




 return (FUNC_0(VAR_3, VAR_5->ip) == VAR_2);
}
