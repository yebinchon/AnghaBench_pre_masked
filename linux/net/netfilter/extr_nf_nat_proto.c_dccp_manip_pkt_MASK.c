
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct TYPE_10__ {int port; } ;
struct TYPE_11__ {TYPE_4__ dccp; } ;
struct TYPE_12__ {TYPE_5__ u; } ;
struct TYPE_7__ {int port; } ;
struct TYPE_8__ {TYPE_1__ dccp; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct nf_conntrack_tuple {TYPE_6__ dst; TYPE_3__ src; } ;
struct dccp_hdr {int dccph_checksum; int dccph_dport; int dccph_sport; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sk_buff*,int ,int ,int) ;
 int FUNC_1 (struct sk_buff*,unsigned int,int *,struct nf_conntrack_tuple const*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static bool
FUNC_3(struct sk_buff *VAR_1,
        unsigned int VAR_2, unsigned int VAR_3,
        const struct nf_conntrack_tuple *VAR_4,
        enum nf_nat_manip_type VAR_5)
{
 return 1;
}
