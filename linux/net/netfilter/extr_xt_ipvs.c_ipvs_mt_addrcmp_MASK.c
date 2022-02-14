
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip; int in6; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static bool FUNC_1(const union nf_inet_addr *VAR_2,
       const union nf_inet_addr *VAR_3,
       const union nf_inet_addr *VAR_4,
       unsigned int VAR_5)
{
 if (VAR_5 == VAR_0)
  return ((VAR_2->ip ^ VAR_3->ip) & VAR_4->ip) == 0;





 else
  return 0;
}
