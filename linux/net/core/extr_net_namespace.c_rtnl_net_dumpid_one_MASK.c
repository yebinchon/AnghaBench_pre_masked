
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nsid; int ref_nsid; scalar_t__ add_ref; } ;
struct rtnl_net_dump_cb {scalar_t__ idx; scalar_t__ s_idx; TYPE_1__ fillargs; int skb; int ref_net; } ;


 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, void *VAR_1, void *VAR_2)
{
 struct rtnl_net_dump_cb *VAR_3 = (struct rtnl_net_dump_cb *)VAR_2;
 int VAR_4;

 if (VAR_3->idx < VAR_3->s_idx)
  goto cont;

 VAR_3->fillargs.nsid = VAR_0;
 if (VAR_3->fillargs.add_ref)
  VAR_3->fillargs.ref_nsid = FUNC_0(VAR_3->ref_net, VAR_1);
 VAR_4 = FUNC_1(VAR_3->skb, &VAR_3->fillargs);
 if (VAR_4 < 0)
  return VAR_4;

cont:
 VAR_3->idx++;
 return 0;
}
