
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


struct sk_buff {unsigned int len; scalar_t__ ip_summed; scalar_t__ data; } ;
struct sctphdr {int checksum; int dest; int source; } ;
struct TYPE_10__ {int port; } ;
struct TYPE_11__ {TYPE_4__ sctp; } ;
struct TYPE_12__ {TYPE_5__ u; } ;
struct TYPE_7__ {int port; } ;
struct TYPE_8__ {TYPE_1__ sctp; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct nf_conntrack_tuple {TYPE_6__ dst; TYPE_3__ src; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static bool
FUNC_2(struct sk_buff *VAR_3,
        unsigned int VAR_4, unsigned int VAR_5,
        const struct nf_conntrack_tuple *VAR_6,
        enum nf_nat_manip_type VAR_7)
{
 return 1;
}
