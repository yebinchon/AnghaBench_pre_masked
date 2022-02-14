
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_expect {int timeout; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct nf_conntrack_expect*) ;
 int FUNC_2 (struct nf_conntrack_expect*) ;

bool FUNC_3(struct nf_conntrack_expect *VAR_0)
{
 if (FUNC_0(&VAR_0->timeout)) {
  FUNC_2(VAR_0);
  FUNC_1(VAR_0);
  return 1;
 }
 return 0;
}
