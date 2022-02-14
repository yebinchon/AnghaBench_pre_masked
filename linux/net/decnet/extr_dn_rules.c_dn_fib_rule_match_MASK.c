
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flowidn {int daddr; int saddr; } ;
struct TYPE_2__ {struct flowidn dn; } ;
struct flowi {TYPE_1__ u; } ;
struct fib_rule {int dummy; } ;
struct dn_fib_rule {int src; int srcmask; int dst; int dstmask; } ;
typedef int __le16 ;



__attribute__((used)) static int FUNC_0(struct fib_rule *VAR_0, struct flowi *VAR_1, int VAR_2)
{
 struct dn_fib_rule *VAR_3 = (struct dn_fib_rule *)VAR_0;
 struct flowidn *VAR_4 = &VAR_1->u.dn;
 __le16 VAR_5 = VAR_4->daddr;
 __le16 VAR_6 = VAR_4->saddr;

 if (((VAR_6 ^ VAR_3->src) & VAR_3->srcmask) ||
     ((VAR_5 ^ VAR_3->dst) & VAR_3->dstmask))
  return 0;

 return 1;
}
