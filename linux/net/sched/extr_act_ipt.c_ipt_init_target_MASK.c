
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_tgchk_param {char* table; unsigned int hook_mask; int family; int targinfo; struct xt_target* target; struct ipt_entry* entryinfo; struct net* net; } ;
struct xt_target {int me; } ;
struct TYPE_5__ {struct xt_target* target; } ;
struct TYPE_4__ {int revision; int name; } ;
struct TYPE_6__ {TYPE_2__ kernel; scalar_t__ target_size; TYPE_1__ user; } ;
struct xt_entry_target {TYPE_3__ u; int data; } ;
struct net {int dummy; } ;
struct ipt_entry {int dummy; } ;
typedef int par ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xt_target*) ;
 int VAR_1 ;
 int FUNC_1 (struct xt_target*) ;
 int FUNC_2 (struct xt_tgchk_param*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xt_tgchk_param*,scalar_t__,int ,int) ;
 struct xt_target* FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_2, struct xt_entry_target *VAR_3,
      char *VAR_4, unsigned int VAR_5)
{
 struct xt_tgchk_param VAR_6;
 struct xt_target *VAR_7;
 struct ipt_entry VAR_8 = {};
 int VAR_9 = 0;

 VAR_7 = FUNC_5(VAR_0, VAR_3->u.user.name,
     VAR_3->u.user.revision);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_3->u.kernel.target = VAR_7;
 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.net = VAR_2;
 VAR_6.table = VAR_4;
 VAR_6.entryinfo = &VAR_8;
 VAR_6.target = VAR_7;
 VAR_6.targinfo = VAR_3->data;
 VAR_6.hook_mask = VAR_5;
 VAR_6.family = VAR_1;

 VAR_9 = FUNC_4(&VAR_6, VAR_3->u.target_size - sizeof(*VAR_3), 0, 0);
 if (VAR_9 < 0) {
  FUNC_3(VAR_3->u.kernel.target->me);
  return VAR_9;
 }
 return 0;
}
