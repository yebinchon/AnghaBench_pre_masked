
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


struct udphdr {scalar_t__ check; int dest; int source; } ;
struct sk_buff {int dummy; } ;
struct TYPE_10__ {int port; } ;
struct TYPE_11__ {TYPE_4__ udp; } ;
struct TYPE_12__ {TYPE_5__ u; } ;
struct TYPE_7__ {int port; } ;
struct TYPE_8__ {TYPE_1__ udp; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct nf_conntrack_tuple {TYPE_6__ dst; TYPE_3__ src; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,struct sk_buff*,int ,int ,int) ;
 int FUNC_1 (struct sk_buff*,unsigned int,scalar_t__*,struct nf_conntrack_tuple const*,int) ;

__attribute__((used)) static void
FUNC_2(struct sk_buff *VAR_2,
         unsigned int VAR_3, struct udphdr *VAR_4,
         const struct nf_conntrack_tuple *VAR_5,
         enum nf_nat_manip_type VAR_6, bool VAR_7)
{
 __be16 *VAR_8, VAR_9;

 if (VAR_6 == VAR_1) {

  VAR_9 = VAR_5->src.u.udp.port;
  VAR_8 = &VAR_4->source;
 } else {

  VAR_9 = VAR_5->dst.u.udp.port;
  VAR_8 = &VAR_4->dest;
 }
 if (VAR_7) {
  FUNC_1(VAR_2, VAR_3, &VAR_4->check, VAR_5, VAR_6);
  FUNC_0(&VAR_4->check, VAR_2, *VAR_8, VAR_9,
      0);
  if (!VAR_4->check)
   VAR_4->check = VAR_0;
 }
 *VAR_8 = VAR_9;
}
