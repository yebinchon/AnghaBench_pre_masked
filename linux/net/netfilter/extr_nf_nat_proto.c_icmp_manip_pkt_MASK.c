
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_9__ {TYPE_3__ icmp; } ;
struct TYPE_10__ {TYPE_4__ u; } ;
struct nf_conntrack_tuple {TYPE_5__ src; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_7__ {TYPE_1__ echo; } ;
struct icmphdr {TYPE_2__ un; int checksum; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;


 int FUNC_0 (int *,struct sk_buff*,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static bool
FUNC_2(struct sk_buff *VAR_0,
        unsigned int VAR_1, unsigned int VAR_2,
        const struct nf_conntrack_tuple *VAR_3,
        enum nf_nat_manip_type VAR_4)
{
 struct icmphdr *VAR_5;

 if (FUNC_1(VAR_0, VAR_2 + sizeof(*VAR_5)))
  return 0;

 VAR_5 = (struct icmphdr *)(VAR_0->data + VAR_2);
 FUNC_0(&VAR_5->checksum, VAR_0,
     VAR_5->un.echo.id, VAR_3->src.u.icmp.id, 0);
 VAR_5->un.echo.id = VAR_3->src.u.icmp.id;
 return 1;
}
