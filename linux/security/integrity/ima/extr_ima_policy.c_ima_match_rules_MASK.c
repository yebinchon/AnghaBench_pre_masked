
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_uid; TYPE_2__* i_sb; } ;
struct ima_rule_entry {int flags; int func; int mask; scalar_t__ fsmagic; TYPE_3__* lsm; int fowner; int (* fowner_op ) (int ,int ) ;int uid; int (* uid_op ) (int ,int ) ;int fsuuid; int fsname; } ;
struct cred {int euid; int uid; int suid; } ;
typedef enum ima_hooks { ____Placeholder_ima_hooks } ima_hooks ;
struct TYPE_6__ {int rule; int type; } ;
struct TYPE_5__ {scalar_t__ s_magic; int s_uuid; TYPE_1__* s_type; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;






 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct inode*,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static bool FUNC_11(struct ima_rule_entry *VAR_15, struct inode *VAR_16,
       const struct cred *VAR_17, u32 VAR_18,
       enum ima_hooks VAR_19, int VAR_20)
{
 int VAR_21;

 if (VAR_19 == VAR_11) {
  if ((VAR_15->flags & VAR_7) && (VAR_15->func == VAR_19))
   return 1;
  return 0;
 }
 if ((VAR_15->flags & VAR_7) &&
     (VAR_15->func != VAR_19 && VAR_19 != VAR_13))
  return 0;
 if ((VAR_15->flags & VAR_9) &&
     (VAR_15->mask != VAR_20 && VAR_19 != VAR_13))
  return 0;
 if ((VAR_15->flags & VAR_8) &&
     (!(VAR_15->mask & VAR_20) && VAR_19 != VAR_13))
  return 0;
 if ((VAR_15->flags & VAR_4)
     && VAR_15->fsmagic != VAR_16->i_sb->s_magic)
  return 0;
 if ((VAR_15->flags & VAR_5)
     && FUNC_3(VAR_15->fsname, VAR_16->i_sb->s_type->name))
  return 0;
 if ((VAR_15->flags & VAR_6) &&
     !FUNC_10(&VAR_15->fsuuid, &VAR_16->i_sb->s_uuid))
  return 0;
 if ((VAR_15->flags & VAR_10) && !VAR_15->uid_op(VAR_17->uid, VAR_15->uid))
  return 0;
 if (VAR_15->flags & VAR_2) {
  if (FUNC_0(VAR_14, VAR_1)) {
   if (!VAR_15->uid_op(VAR_17->euid, VAR_15->uid)
       && !VAR_15->uid_op(VAR_17->suid, VAR_15->uid)
       && !VAR_15->uid_op(VAR_17->uid, VAR_15->uid))
    return 0;
  } else if (!VAR_15->uid_op(VAR_17->euid, VAR_15->uid))
   return 0;
 }

 if ((VAR_15->flags & VAR_3) &&
     !VAR_15->fowner_op(VAR_16->i_uid, VAR_15->fowner))
  return 0;
 for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++) {
  int VAR_22 = 0;
  u32 VAR_23;

  if (!VAR_15->lsm[VAR_21].rule)
   continue;

  switch (VAR_21) {
  case 131:
  case 133:
  case 132:
   FUNC_2(VAR_16, &VAR_23);
   VAR_22 = FUNC_1(VAR_23,
       VAR_15->lsm[VAR_21].type,
       VAR_0,
       VAR_15->lsm[VAR_21].rule);
   break;
  case 128:
  case 130:
  case 129:
   VAR_22 = FUNC_1(VAR_18,
       VAR_15->lsm[VAR_21].type,
       VAR_0,
       VAR_15->lsm[VAR_21].rule);
  default:
   break;
  }
  if (!VAR_22)
   return 0;
 }
 return 1;
}
