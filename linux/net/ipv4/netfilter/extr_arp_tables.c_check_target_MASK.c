
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_tgchk_param {char const* table; int family; int hook_mask; int targinfo; int target; struct arpt_entry* entryinfo; } ;
struct TYPE_3__ {int target; } ;
struct TYPE_4__ {scalar_t__ target_size; TYPE_1__ kernel; } ;
struct xt_entry_target {TYPE_2__ u; int data; } ;
struct arpt_entry {int comefrom; } ;


 int VAR_0 ;
 struct xt_entry_target* FUNC_0 (struct arpt_entry*) ;
 int FUNC_1 (struct xt_tgchk_param*,scalar_t__,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct arpt_entry *VAR_1, const char *VAR_2)
{
 struct xt_entry_target *VAR_3 = FUNC_0(VAR_1);
 struct xt_tgchk_param VAR_4 = {
  .table = VAR_2,
  .entryinfo = VAR_1,
  .target = VAR_3->u.kernel.target,
  .targinfo = VAR_3->data,
  .hook_mask = VAR_1->comefrom,
  .family = VAR_0,
 };

 return FUNC_1(&VAR_4, VAR_3->u.target_size - sizeof(*VAR_3), 0, 0);
}
