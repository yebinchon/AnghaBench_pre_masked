
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_5__ {int ip; } ;
struct TYPE_6__ {TYPE_1__ u3; } ;
struct TYPE_8__ {int ip; } ;
struct TYPE_7__ {TYPE_4__ u3; } ;
struct nf_conntrack_tuple {TYPE_2__ dst; TYPE_3__ src; } ;
struct iphdr {int daddr; int saddr; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef int __sum16 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sk_buff*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_1,
        unsigned int VAR_2, __sum16 *VAR_3,
        const struct nf_conntrack_tuple *VAR_4,
        enum nf_nat_manip_type VAR_5)
{
 struct iphdr *VAR_6 = (struct iphdr *)(VAR_1->data + VAR_2);
 __be32 VAR_7, VAR_8;

 if (VAR_5 == VAR_0) {
  VAR_7 = VAR_6->saddr;
  VAR_8 = VAR_4->src.u3.ip;
 } else {
  VAR_7 = VAR_6->daddr;
  VAR_8 = VAR_4->dst.u3.ip;
 }
 FUNC_0(VAR_3, VAR_1, VAR_7, VAR_8, 1);
}
