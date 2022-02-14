
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tun_id; } ;
struct flowi {scalar_t__ flowi_iif; scalar_t__ flowi_oif; int flowi_mark; int flowi_uid; TYPE_1__ flowi_tun_key; } ;
struct fib_rules_ops {int (* match ) (struct fib_rule*,struct flowi*,int) ;} ;
struct TYPE_4__ {int end; int start; } ;
struct fib_rule {scalar_t__ iifindex; scalar_t__ oifindex; int mark; int mark_mask; scalar_t__ tun_id; int flags; TYPE_2__ uid_range; int fr_net; scalar_t__ l3mdev; } ;
struct fib_lookup_arg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct flowi*,struct fib_lookup_arg*) ;
 int FUNC_1 (struct fib_rule*,struct flowi*,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct fib_rule *VAR_1, struct fib_rules_ops *VAR_2,
     struct flowi *VAR_3, int VAR_4,
     struct fib_lookup_arg *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_1->iifindex && (VAR_1->iifindex != VAR_3->flowi_iif))
  goto out;

 if (VAR_1->oifindex && (VAR_1->oifindex != VAR_3->flowi_oif))
  goto out;

 if ((VAR_1->mark ^ VAR_3->flowi_mark) & VAR_1->mark_mask)
  goto out;

 if (VAR_1->tun_id && (VAR_1->tun_id != VAR_3->flowi_tun_key.tun_id))
  goto out;

 if (VAR_1->l3mdev && !FUNC_0(VAR_1->fr_net, VAR_3, VAR_5))
  goto out;

 if (FUNC_3(VAR_3->flowi_uid, VAR_1->uid_range.start) ||
     FUNC_2(VAR_3->flowi_uid, VAR_1->uid_range.end))
  goto out;

 VAR_6 = VAR_2->match(VAR_1, VAR_3, VAR_4);
out:
 return (VAR_1->flags & VAR_0) ? !VAR_6 : VAR_6;
}
