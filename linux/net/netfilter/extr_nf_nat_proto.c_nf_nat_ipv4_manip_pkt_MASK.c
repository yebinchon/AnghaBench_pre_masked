
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_7__ {int ip; } ;
struct TYPE_8__ {TYPE_3__ u3; } ;
struct TYPE_5__ {int ip; } ;
struct TYPE_6__ {TYPE_1__ u3; } ;
struct nf_conntrack_tuple {TYPE_4__ dst; TYPE_2__ src; } ;
struct iphdr {int ihl; int daddr; int check; int saddr; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct sk_buff*,unsigned int,unsigned int,struct nf_conntrack_tuple const*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct sk_buff *VAR_1,
      unsigned int VAR_2,
      const struct nf_conntrack_tuple *VAR_3,
      enum nf_nat_manip_type VAR_4)
{
 struct iphdr *VAR_5;
 unsigned int VAR_6;

 if (FUNC_2(VAR_1, VAR_2 + sizeof(*VAR_5)))
  return 0;

 VAR_5 = (void *)VAR_1->data + VAR_2;
 VAR_6 = VAR_2 + VAR_5->ihl * 4;

 if (!FUNC_1(VAR_1, VAR_2, VAR_6, VAR_3, VAR_4))
  return 0;
 VAR_5 = (void *)VAR_1->data + VAR_2;

 if (VAR_4 == VAR_0) {
  FUNC_0(&VAR_5->check, VAR_5->saddr, VAR_3->src.u3.ip);
  VAR_5->saddr = VAR_3->src.u3.ip;
 } else {
  FUNC_0(&VAR_5->check, VAR_5->daddr, VAR_3->dst.u3.ip);
  VAR_5->daddr = VAR_3->dst.u3.ip;
 }
 return 1;
}
