
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct user_datum {int value; } ;
struct type_datum {int value; } ;
struct selinux_state {TYPE_4__* ss; int initialized; } ;
struct TYPE_11__ {int type; int role; int user; } ;
struct selinux_audit_rule {TYPE_5__ au_ctxt; int au_seqno; } ;
struct role_datum {int value; } ;
struct TYPE_9__ {int table; } ;
struct TYPE_8__ {int table; } ;
struct TYPE_7__ {int table; } ;
struct policydb {TYPE_3__ p_types; TYPE_2__ p_roles; TYPE_1__ p_users; } ;
struct TYPE_10__ {int policy_rwlock; int latest_granting; struct policydb policydb; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*) ;
 void* FUNC_1 (int ,char*) ;
 struct selinux_audit_rule* FUNC_2 (int,int ) ;
 int FUNC_3 (struct policydb*,char*,TYPE_5__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct selinux_audit_rule*) ;
 struct selinux_state VAR_7 ;
 int FUNC_7 (char*,char) ;

int FUNC_8(u32 VAR_8, u32 VAR_9, char *VAR_10, void **VAR_11)
{
 struct selinux_state *VAR_12 = &VAR_7;
 struct policydb *VAR_13 = &VAR_12->ss->policydb;
 struct selinux_audit_rule *VAR_14;
 struct role_datum *VAR_15;
 struct type_datum *VAR_16;
 struct user_datum *VAR_17;
 struct selinux_audit_rule **VAR_18 = (struct selinux_audit_rule **)VAR_11;
 int VAR_19 = 0;

 *VAR_18 = ((void*)0);

 if (!VAR_12->initialized)
  return -VAR_4;

 switch (VAR_8) {
 case 128:
 case 131:
 case 129:
 case 133:
 case 135:
 case 134:

  if (VAR_9 != VAR_0 && VAR_9 != VAR_1)
   return -VAR_2;
  break;
 case 130:
 case 132:
 case 136:
 case 137:

  if (FUNC_7(VAR_10, '-'))
   return -VAR_2;
  break;
 default:

  return -VAR_2;
 }

 VAR_14 = FUNC_2(sizeof(struct selinux_audit_rule), VAR_6);
 if (!VAR_14)
  return -VAR_3;

 FUNC_0(&VAR_14->au_ctxt);

 FUNC_4(&VAR_12->ss->policy_rwlock);

 VAR_14->au_seqno = VAR_12->ss->latest_granting;

 switch (VAR_8) {
 case 128:
 case 133:
  VAR_19 = -VAR_2;
  VAR_17 = FUNC_1(VAR_13->p_users.table, VAR_10);
  if (!VAR_17)
   goto out;
  VAR_14->au_ctxt.user = VAR_17->value;
  break;
 case 131:
 case 135:
  VAR_19 = -VAR_2;
  VAR_15 = FUNC_1(VAR_13->p_roles.table, VAR_10);
  if (!VAR_15)
   goto out;
  VAR_14->au_ctxt.role = VAR_15->value;
  break;
 case 129:
 case 134:
  VAR_19 = -VAR_2;
  VAR_16 = FUNC_1(VAR_13->p_types.table, VAR_10);
  if (!VAR_16)
   goto out;
  VAR_14->au_ctxt.type = VAR_16->value;
  break;
 case 130:
 case 132:
 case 136:
 case 137:
  VAR_19 = FUNC_3(VAR_13, VAR_10, &VAR_14->au_ctxt,
         VAR_5);
  if (VAR_19)
   goto out;
  break;
 }
 VAR_19 = 0;
out:
 FUNC_5(&VAR_12->ss->policy_rwlock);

 if (VAR_19) {
  FUNC_6(VAR_14);
  VAR_14 = ((void*)0);
 }

 *VAR_18 = VAR_14;

 return VAR_19;
}
