
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {scalar_t__ check; } ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ data; } ;
struct nf_conntrack_tuple {int dummy; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int,struct udphdr*,struct nf_conntrack_tuple const*,int,int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct sk_buff *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3,
     const struct nf_conntrack_tuple *VAR_4,
     enum nf_nat_manip_type VAR_5)
{
 struct udphdr *VAR_6;
 bool VAR_7;

 if (FUNC_1(VAR_1, VAR_3 + sizeof(*VAR_6)))
  return 0;

 VAR_6 = (struct udphdr *)(VAR_1->data + VAR_3);
 VAR_7 = VAR_6->check || VAR_1->ip_summed == VAR_0;

 FUNC_0(VAR_1, VAR_2, VAR_6, VAR_4, VAR_5, VAR_7);
 return 1;
}
