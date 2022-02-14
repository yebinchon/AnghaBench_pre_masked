
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_expect {scalar_t__ master; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct nf_conntrack_expect *VAR_1,
      const struct nf_conntrack_expect *VAR_2,
      unsigned int VAR_3)
{
 if (VAR_3 & VAR_0)
  return 1;

 return VAR_1->master == VAR_2->master;
}
