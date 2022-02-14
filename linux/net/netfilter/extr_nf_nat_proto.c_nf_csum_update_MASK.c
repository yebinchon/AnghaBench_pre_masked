
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int l3num; } ;
struct nf_conntrack_tuple {TYPE_1__ src; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef int __sum16 ;




 int FUNC_0 (struct sk_buff*,unsigned int,int *,struct nf_conntrack_tuple const*,int) ;
 int FUNC_1 (struct sk_buff*,unsigned int,int *,struct nf_conntrack_tuple const*,int) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0,
      unsigned int VAR_1, __sum16 *VAR_2,
      const struct nf_conntrack_tuple *VAR_3,
      enum nf_nat_manip_type VAR_4)
{
 switch (VAR_3->src.l3num) {
 case 129:
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  return;
 case 128:
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  return;
 }
}
