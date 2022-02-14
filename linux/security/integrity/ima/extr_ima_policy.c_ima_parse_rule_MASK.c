
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long uid_t ;
struct TYPE_4__ {char* from; } ;
typedef TYPE_1__ substring_t ;
struct ima_template_desc {int num_fields; int fields; int fmt; } ;
struct ima_rule_entry {scalar_t__ action; int flags; unsigned long fsmagic; struct ima_template_desc* template; void* func; int pcr; void* fowner; int * fowner_op; void* uid; int * uid_op; int fsuuid; int fsname; int mask; } ;
struct audit_buffer {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (int ) ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 scalar_t__ VAR_48 ;
 void* VAR_49 ;
 void* VAR_50 ;
 void* VAR_51 ;
 scalar_t__ VAR_52 ;
 int FUNC_1 () ;
 int FUNC_2 (struct audit_buffer*) ;
 int FUNC_3 (struct audit_buffer*,char*,int) ;
 int FUNC_4 (struct ima_template_desc*) ;
 int FUNC_5 () ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct audit_buffer*,char*,char*) ;
 int FUNC_9 (struct audit_buffer*,char*,char*,int *) ;
 int FUNC_10 (struct ima_rule_entry*,TYPE_1__*,int ,int ) ;
 struct ima_template_desc* FUNC_11 () ;
 struct audit_buffer* FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (char*,int,int *) ;
 int FUNC_15 (char*,int,unsigned long*) ;
 struct ima_template_desc* FUNC_16 (char*) ;
 void* FUNC_17 (int ,unsigned long) ;
 int FUNC_18 (char*,int ,TYPE_1__*) ;
 int VAR_53 ;
 int FUNC_19 (char*,char*) ;
 char* FUNC_20 (char**,char*) ;
 int VAR_54 ;
 int FUNC_21 (int ,int *,int *) ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int FUNC_22 (void*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (char*,int *) ;

__attribute__((used)) static int FUNC_25(char *VAR_58, struct ima_rule_entry *VAR_59)
{
 struct audit_buffer *VAR_60;
 char *VAR_61;
 char *VAR_62;
 bool VAR_63;
 struct ima_template_desc *VAR_64;
 int VAR_65 = 0;

 VAR_60 = FUNC_12(FUNC_1(), VAR_18,
           VAR_2);

 VAR_59->uid = VAR_33;
 VAR_59->fowner = VAR_33;
 VAR_59->uid_op = &VAR_55;
 VAR_59->fowner_op = &VAR_55;
 VAR_59->action = VAR_52;
 while ((VAR_62 = FUNC_20(&VAR_58, " \t")) != ((void*)0)) {
  substring_t VAR_66[VAR_43];
  int VAR_67;
  unsigned long VAR_68;

  if (VAR_65 < 0)
   break;
  if ((*VAR_62 == '\0') || (*VAR_62 == ' ') || (*VAR_62 == '\t'))
   continue;
  VAR_67 = FUNC_18(VAR_62, VAR_53, VAR_66);
  switch (VAR_67) {
  case 140:
   FUNC_8(VAR_60, "action", "measure");

   if (VAR_59->action != VAR_52)
    VAR_65 = -VAR_14;

   VAR_59->action = VAR_48;
   break;
  case 154:
   FUNC_8(VAR_60, "action", "dont_measure");

   if (VAR_59->action != VAR_52)
    VAR_65 = -VAR_14;

   VAR_59->action = VAR_13;
   break;
  case 159:
   FUNC_8(VAR_60, "action", "appraise");

   if (VAR_59->action != VAR_52)
    VAR_65 = -VAR_14;

   VAR_59->action = VAR_0;
   break;
  case 156:
   FUNC_8(VAR_60, "action", "dont_appraise");

   if (VAR_59->action != VAR_52)
    VAR_65 = -VAR_14;

   VAR_59->action = VAR_11;
   break;
  case 157:
   FUNC_8(VAR_60, "action", "audit");

   if (VAR_59->action != VAR_52)
    VAR_65 = -VAR_14;

   VAR_59->action = VAR_1;
   break;
  case 142:
   FUNC_8(VAR_60, "action", "hash");

   if (VAR_59->action != VAR_52)
    VAR_65 = -VAR_14;

   VAR_59->action = VAR_19;
   break;
  case 155:
   FUNC_8(VAR_60, "action", "dont_hash");

   if (VAR_59->action != VAR_52)
    VAR_65 = -VAR_14;

   VAR_59->action = VAR_12;
   break;
  case 143:
   FUNC_8(VAR_60, "func", VAR_66[0].from);

   if (VAR_59->func)
    VAR_65 = -VAR_14;

   if (FUNC_19(VAR_66[0].from, "FILE_CHECK") == 0)
    VAR_59->func = VAR_16;

   else if (FUNC_19(VAR_66[0].from, "PATH_CHECK") == 0)
    VAR_59->func = VAR_16;
   else if (FUNC_19(VAR_66[0].from, "MODULE_CHECK") == 0)
    VAR_59->func = VAR_50;
   else if (FUNC_19(VAR_66[0].from, "FIRMWARE_CHECK") == 0)
    VAR_59->func = VAR_17;
   else if ((FUNC_19(VAR_66[0].from, "FILE_MMAP") == 0)
    || (FUNC_19(VAR_66[0].from, "MMAP_CHECK") == 0))
    VAR_59->func = VAR_49;
   else if (FUNC_19(VAR_66[0].from, "BPRM_CHECK") == 0)
    VAR_59->func = VAR_9;
   else if (FUNC_19(VAR_66[0].from, "CREDS_CHECK") == 0)
    VAR_59->func = VAR_10;
   else if (FUNC_19(VAR_66[0].from, "KEXEC_KERNEL_CHECK") ==
     0)
    VAR_59->func = VAR_36;
   else if (FUNC_19(VAR_66[0].from, "KEXEC_INITRAMFS_CHECK")
     == 0)
    VAR_59->func = VAR_35;
   else if (FUNC_19(VAR_66[0].from, "POLICY_CHECK") == 0)
    VAR_59->func = VAR_51;
   else if (FUNC_19(VAR_66[0].from, "KEXEC_CMDLINE") == 0)
    VAR_59->func = VAR_34;
   else
    VAR_65 = -VAR_14;
   if (!VAR_65)
    VAR_59->flags |= VAR_26;
   break;
  case 141:
   FUNC_8(VAR_60, "mask", VAR_66[0].from);

   if (VAR_59->mask)
    VAR_65 = -VAR_14;

   VAR_61 = VAR_66[0].from;
   if (*VAR_61 == '^')
    VAR_61++;

   if ((FUNC_19(VAR_61, "MAY_EXEC")) == 0)
    VAR_59->mask = VAR_45;
   else if (FUNC_19(VAR_61, "MAY_WRITE") == 0)
    VAR_59->mask = VAR_47;
   else if (FUNC_19(VAR_61, "MAY_READ") == 0)
    VAR_59->mask = VAR_46;
   else if (FUNC_19(VAR_61, "MAY_APPEND") == 0)
    VAR_59->mask = VAR_44;
   else
    VAR_65 = -VAR_14;
   if (!VAR_65)
    VAR_59->flags |= (*VAR_66[0].from == '^')
         ? VAR_27 : VAR_28;
   break;
  case 146:
   FUNC_8(VAR_60, "fsmagic", VAR_66[0].from);

   if (VAR_59->fsmagic) {
    VAR_65 = -VAR_14;
    break;
   }

   VAR_65 = FUNC_15(VAR_66[0].from, 16, &VAR_59->fsmagic);
   if (!VAR_65)
    VAR_59->flags |= VAR_23;
   break;
  case 145:
   FUNC_8(VAR_60, "fsname", VAR_66[0].from);

   VAR_59->fsname = FUNC_13(VAR_66[0].from, VAR_18);
   if (!VAR_59->fsname) {
    VAR_65 = -VAR_15;
    break;
   }
   VAR_65 = 0;
   VAR_59->flags |= VAR_24;
   break;
  case 144:
   FUNC_8(VAR_60, "fsuuid", VAR_66[0].from);

   if (!FUNC_23(&VAR_59->fsuuid)) {
    VAR_65 = -VAR_14;
    break;
   }

   VAR_65 = FUNC_24(VAR_66[0].from, &VAR_59->fsuuid);
   if (!VAR_65)
    VAR_59->flags |= VAR_25;
   break;
  case 129:
  case 151:
   VAR_59->uid_op = &VAR_56;

  case 128:
  case 150:
   if ((VAR_67 == 128) || (VAR_67 == 150))
    VAR_59->uid_op = &VAR_57;

  case 130:
  case 152:
   VAR_63 = (VAR_67 == 130) ||
        (VAR_67 == 129) ||
        (VAR_67 == 128);

   FUNC_9(VAR_60, VAR_63 ? "uid" : "euid",
       VAR_66[0].from, VAR_59->uid_op);

   if (FUNC_22(VAR_59->uid)) {
    VAR_65 = -VAR_14;
    break;
   }

   VAR_65 = FUNC_15(VAR_66[0].from, 10, &VAR_68);
   if (!VAR_65) {
    VAR_59->uid = FUNC_17(FUNC_5(),
             (uid_t) VAR_68);
    if (!FUNC_22(VAR_59->uid) ||
        (uid_t)VAR_68 != VAR_68)
     VAR_65 = -VAR_14;
    else
     VAR_59->flags |= VAR_63
         ? VAR_32 : VAR_21;
   }
   break;
  case 148:
   VAR_59->fowner_op = &VAR_56;

  case 147:
   if (VAR_67 == 147)
    VAR_59->fowner_op = &VAR_57;

  case 149:
   FUNC_9(VAR_60, "fowner", VAR_66[0].from,
       VAR_59->fowner_op);

   if (FUNC_22(VAR_59->fowner)) {
    VAR_65 = -VAR_14;
    break;
   }

   VAR_65 = FUNC_15(VAR_66[0].from, 10, &VAR_68);
   if (!VAR_65) {
    VAR_59->fowner = FUNC_17(FUNC_5(), (uid_t)VAR_68);
    if (!FUNC_22(VAR_59->fowner) || (((uid_t)VAR_68) != VAR_68))
     VAR_65 = -VAR_14;
    else
     VAR_59->flags |= VAR_22;
   }
   break;
  case 137:
   FUNC_8(VAR_60, "obj_user", VAR_66[0].from);
   VAR_65 = FUNC_10(VAR_59, VAR_66,
         VAR_39,
         VAR_5);
   break;
  case 139:
   FUNC_8(VAR_60, "obj_role", VAR_66[0].from);
   VAR_65 = FUNC_10(VAR_59, VAR_66,
         VAR_37,
         VAR_3);
   break;
  case 138:
   FUNC_8(VAR_60, "obj_type", VAR_66[0].from);
   VAR_65 = FUNC_10(VAR_59, VAR_66,
         VAR_38,
         VAR_4);
   break;
  case 132:
   FUNC_8(VAR_60, "subj_user", VAR_66[0].from);
   VAR_65 = FUNC_10(VAR_59, VAR_66,
         VAR_42,
         VAR_8);
   break;
  case 134:
   FUNC_8(VAR_60, "subj_role", VAR_66[0].from);
   VAR_65 = FUNC_10(VAR_59, VAR_66,
         VAR_40,
         VAR_6);
   break;
  case 133:
   FUNC_8(VAR_60, "subj_type", VAR_66[0].from);
   VAR_65 = FUNC_10(VAR_59, VAR_66,
         VAR_41,
         VAR_7);
   break;
  case 158:
   if (VAR_59->action != VAR_0) {
    VAR_65 = -VAR_14;
    break;
   }

   FUNC_8(VAR_60, "appraise_type", VAR_66[0].from);
   if ((FUNC_19(VAR_66[0].from, "imasig")) == 0)
    VAR_59->flags |= VAR_20;
   else if (FUNC_7(VAR_59->func) &&
     FUNC_19(VAR_66[0].from, "imasig|modsig") == 0)
    VAR_59->flags |= VAR_20 |
      VAR_29;
   else
    VAR_65 = -VAR_14;
   break;
  case 135:
   VAR_59->flags |= VAR_31;
   break;
  case 136:
   if (VAR_59->action != VAR_48) {
    VAR_65 = -VAR_14;
    break;
   }
   FUNC_8(VAR_60, "pcr", VAR_66[0].from);

   VAR_65 = FUNC_14(VAR_66[0].from, 10, &VAR_59->pcr);
   if (VAR_65 || FUNC_0(VAR_59->pcr))
    VAR_65 = -VAR_14;
   else
    VAR_59->flags |= VAR_30;

   break;
  case 131:
   FUNC_8(VAR_60, "template", VAR_66[0].from);
   if (VAR_59->action != VAR_48) {
    VAR_65 = -VAR_14;
    break;
   }
   VAR_64 = FUNC_16(VAR_66[0].from);
   if (!VAR_64 || VAR_59->template) {
    VAR_65 = -VAR_14;
    break;
   }






   FUNC_21(VAR_64->fmt,
       &(VAR_64->fields),
       &(VAR_64->num_fields));
   VAR_59->template = VAR_64;
   break;
  case 153:
   FUNC_8(VAR_60, "UNKNOWN", VAR_62);
   VAR_65 = -VAR_14;
   break;
  }
 }
 if (!VAR_65 && (VAR_59->action == VAR_52))
  VAR_65 = -VAR_14;
 else if (VAR_59->action == VAR_0)
  VAR_54 |= FUNC_6(VAR_59->func);

 if (!VAR_65 && VAR_59->flags & VAR_29) {
  VAR_64 = VAR_59->template ? VAR_59->template :
        FUNC_11();
  FUNC_4(VAR_64);
 }

 FUNC_3(VAR_60, "res=%d", !VAR_65);
 FUNC_2(VAR_60);
 return VAR_65;
}
