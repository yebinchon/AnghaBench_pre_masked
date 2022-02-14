
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip6; int ip; } ;
struct nf_conn {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct nf_conn const*) ;
 int FUNC_1 (char*,char*,int *) ;

__attribute__((used)) static int FUNC_2(const struct nf_conn *VAR_1, char *VAR_2,
       const union nf_inet_addr *VAR_3, bool VAR_4)
{
 if (FUNC_0(VAR_1) == VAR_0)
  return FUNC_1(VAR_2, "%pI4", &VAR_3->ip);
 else {
  if (VAR_4)
   return FUNC_1(VAR_2, "[%pI6c]", &VAR_3->ip6);
  else
   return FUNC_1(VAR_2, "%pI6c", &VAR_3->ip6);
 }
}
