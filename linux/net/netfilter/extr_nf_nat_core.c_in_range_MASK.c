
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_nat_range2 {int flags; int max_proto; int min_proto; } ;
struct nf_conntrack_tuple {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nf_conntrack_tuple const*,int ,int *,int *) ;
 int FUNC_1 (struct nf_conntrack_tuple const*,struct nf_nat_range2 const*) ;

__attribute__((used)) static int FUNC_2(const struct nf_conntrack_tuple *VAR_3,
      const struct nf_nat_range2 *VAR_4)
{



 if (VAR_4->flags & VAR_1 &&
     !FUNC_1(VAR_3, VAR_4))
  return 0;

 if (!(VAR_4->flags & VAR_2))
  return 1;

 return FUNC_0(VAR_3, VAR_0,
    &VAR_4->min_proto, &VAR_4->max_proto);
}
