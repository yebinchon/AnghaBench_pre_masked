
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct nf_conntrack_tuple {int dummy; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;


 int FUNC_0 (struct sk_buff*,unsigned int,struct udphdr*,struct nf_conntrack_tuple const*,int,int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct sk_buff *VAR_0,
         unsigned int VAR_1, unsigned int VAR_2,
         const struct nf_conntrack_tuple *VAR_3,
         enum nf_nat_manip_type VAR_4)
{
 return 1;
}
