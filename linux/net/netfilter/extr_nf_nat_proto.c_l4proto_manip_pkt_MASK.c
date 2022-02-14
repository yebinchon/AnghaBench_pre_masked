
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int protonum; } ;
struct nf_conntrack_tuple {TYPE_1__ dst; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
 int FUNC_0 (struct sk_buff*,unsigned int,unsigned int,struct nf_conntrack_tuple const*,int) ;
 int FUNC_1 (struct sk_buff*,unsigned int,unsigned int,struct nf_conntrack_tuple const*,int) ;
 int FUNC_2 (struct sk_buff*,unsigned int,unsigned int,struct nf_conntrack_tuple const*,int) ;
 int FUNC_3 (struct sk_buff*,unsigned int,unsigned int,struct nf_conntrack_tuple const*,int) ;
 int FUNC_4 (struct sk_buff*,unsigned int,unsigned int,struct nf_conntrack_tuple const*,int) ;
 int FUNC_5 (struct sk_buff*,unsigned int,unsigned int,struct nf_conntrack_tuple const*,int) ;
 int FUNC_6 (struct sk_buff*,unsigned int,unsigned int,struct nf_conntrack_tuple const*,int) ;
 int FUNC_7 (struct sk_buff*,unsigned int,unsigned int,struct nf_conntrack_tuple const*,int) ;

__attribute__((used)) static bool FUNC_8(struct sk_buff *VAR_0,
         unsigned int VAR_1, unsigned int VAR_2,
         const struct nf_conntrack_tuple *VAR_3,
         enum nf_nat_manip_type VAR_4)
{
 switch (VAR_3->dst.protonum) {
 case 130:
  return FUNC_5(VAR_0, VAR_1, VAR_2,
         VAR_3, VAR_4);
 case 129:
  return FUNC_6(VAR_0, VAR_1, VAR_2,
         VAR_3, VAR_4);
 case 128:
  return FUNC_7(VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_4);
 case 131:
  return FUNC_4(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4);
 case 133:
  return FUNC_2(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4);
 case 132:
  return FUNC_3(VAR_0, VAR_1, VAR_2,
     VAR_3, VAR_4);
 case 135:
  return FUNC_0(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4);
 case 134:
  return FUNC_1(VAR_0, VAR_1, VAR_2,
         VAR_3, VAR_4);
 }


 return 1;
}
