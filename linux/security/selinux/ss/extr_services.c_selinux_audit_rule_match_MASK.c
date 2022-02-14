
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct selinux_state {TYPE_4__* ss; } ;
struct TYPE_6__ {struct mls_level* level; } ;
struct TYPE_7__ {TYPE_2__ range; int type; int role; int user; } ;
struct selinux_audit_rule {scalar_t__ au_seqno; TYPE_3__ au_ctxt; } ;
struct mls_level {int dummy; } ;
struct TYPE_5__ {struct mls_level* level; } ;
struct context {TYPE_1__ range; int type; int role; int user; } ;
struct TYPE_8__ {scalar_t__ latest_granting; int policy_rwlock; int sidtab; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct mls_level*,struct mls_level*) ;
 int FUNC_2 (struct mls_level*,struct mls_level*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct selinux_state VAR_2 ;
 struct context* FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(u32 VAR_3, u32 VAR_4, u32 VAR_5, void *VAR_6)
{
 struct selinux_state *VAR_7 = &VAR_2;
 struct context *VAR_8;
 struct mls_level *VAR_9;
 struct selinux_audit_rule *VAR_10 = VAR_6;
 int VAR_11 = 0;

 if (FUNC_6(!VAR_10)) {
  FUNC_0(1, "selinux_audit_rule_match: missing rule\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_7->ss->policy_rwlock);

 if (VAR_10->au_seqno < VAR_7->ss->latest_granting) {
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_8 = FUNC_5(VAR_7->ss->sidtab, VAR_3);
 if (FUNC_6(!VAR_8)) {
  FUNC_0(1, "selinux_audit_rule_match: unrecognized SID %d\n",
     VAR_3);
  VAR_11 = -VAR_0;
  goto out;
 }



 switch (VAR_4) {
 case 134:
 case 139:
  switch (VAR_5) {
  case 133:
   VAR_11 = (VAR_8->user == VAR_10->au_ctxt.user);
   break;
  case 128:
   VAR_11 = (VAR_8->user != VAR_10->au_ctxt.user);
   break;
  }
  break;
 case 137:
 case 141:
  switch (VAR_5) {
  case 133:
   VAR_11 = (VAR_8->role == VAR_10->au_ctxt.role);
   break;
  case 128:
   VAR_11 = (VAR_8->role != VAR_10->au_ctxt.role);
   break;
  }
  break;
 case 135:
 case 140:
  switch (VAR_5) {
  case 133:
   VAR_11 = (VAR_8->type == VAR_10->au_ctxt.type);
   break;
  case 128:
   VAR_11 = (VAR_8->type != VAR_10->au_ctxt.type);
   break;
  }
  break;
 case 136:
 case 138:
 case 142:
 case 143:
  VAR_9 = ((VAR_4 == 136 ||
     VAR_4 == 142) ?
    &VAR_8->range.level[0] : &VAR_8->range.level[1]);
  switch (VAR_5) {
  case 133:
   VAR_11 = FUNC_2(&VAR_10->au_ctxt.range.level[0],
          VAR_9);
   break;
  case 128:
   VAR_11 = !FUNC_2(&VAR_10->au_ctxt.range.level[0],
           VAR_9);
   break;
  case 129:
   VAR_11 = (FUNC_1(&VAR_10->au_ctxt.range.level[0],
            VAR_9) &&
     !FUNC_2(&VAR_10->au_ctxt.range.level[0],
            VAR_9));
   break;
  case 130:
   VAR_11 = FUNC_1(&VAR_10->au_ctxt.range.level[0],
           VAR_9);
   break;
  case 131:
   VAR_11 = (FUNC_1(VAR_9,
           &VAR_10->au_ctxt.range.level[0]) &&
     !FUNC_2(VAR_9,
            &VAR_10->au_ctxt.range.level[0]));
   break;
  case 132:
   VAR_11 = FUNC_1(VAR_9,
           &VAR_10->au_ctxt.range.level[0]);
   break;
  }
 }

out:
 FUNC_4(&VAR_7->ss->policy_rwlock);
 return VAR_11;
}
