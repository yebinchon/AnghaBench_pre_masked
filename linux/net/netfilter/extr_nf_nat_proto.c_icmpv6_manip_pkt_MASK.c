
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ icmp; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct nf_conntrack_tuple {TYPE_3__ src; } ;
struct icmp6hdr {scalar_t__ icmp6_type; int icmp6_identifier; int icmp6_cksum; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct sk_buff*,int ,int ,int) ;
 int FUNC_1 (struct sk_buff*,unsigned int,int *,struct nf_conntrack_tuple const*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static bool
FUNC_3(struct sk_buff *VAR_2,
   unsigned int VAR_3, unsigned int VAR_4,
   const struct nf_conntrack_tuple *VAR_5,
   enum nf_nat_manip_type VAR_6)
{
 struct icmp6hdr *VAR_7;

 if (FUNC_2(VAR_2, VAR_4 + sizeof(*VAR_7)))
  return 0;

 VAR_7 = (struct icmp6hdr *)(VAR_2->data + VAR_4);
 FUNC_1(VAR_2, VAR_3, &VAR_7->icmp6_cksum, VAR_5, VAR_6);
 if (VAR_7->icmp6_type == VAR_1 ||
     VAR_7->icmp6_type == VAR_0) {
  FUNC_0(&VAR_7->icmp6_cksum, VAR_2,
      VAR_7->icmp6_identifier,
      VAR_5->src.u.icmp.id, 0);
  VAR_7->icmp6_identifier = VAR_5->src.u.icmp.id;
 }
 return 1;
}
