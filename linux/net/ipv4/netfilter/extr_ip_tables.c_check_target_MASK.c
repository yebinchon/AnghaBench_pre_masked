
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_tgchk_param {char const* table; int family; int hook_mask; int targinfo; int target; struct ipt_entry* entryinfo; struct net* net; } ;
struct TYPE_5__ {int target; } ;
struct TYPE_6__ {scalar_t__ target_size; TYPE_2__ kernel; } ;
struct xt_entry_target {TYPE_3__ u; int data; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int invflags; int proto; } ;
struct ipt_entry {TYPE_1__ ip; int comefrom; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xt_entry_target* FUNC_0 (struct ipt_entry*) ;
 int FUNC_1 (struct xt_tgchk_param*,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ipt_entry *VAR_2, struct net *VAR_3, const char *VAR_4)
{
 struct xt_entry_target *VAR_5 = FUNC_0(VAR_2);
 struct xt_tgchk_param VAR_6 = {
  .net = VAR_3,
  .table = VAR_4,
  .entryinfo = VAR_2,
  .target = VAR_5->u.kernel.target,
  .targinfo = VAR_5->data,
  .hook_mask = VAR_2->comefrom,
  .family = VAR_1,
 };

 return FUNC_1(&VAR_6, VAR_5->u.target_size - sizeof(*VAR_5),
          VAR_2->ip.proto, VAR_2->ip.invflags & VAR_0);
}
