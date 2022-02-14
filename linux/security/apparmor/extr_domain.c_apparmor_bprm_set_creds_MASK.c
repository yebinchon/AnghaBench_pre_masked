
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path_cond {int member_1; int member_0; } ;
struct linux_binprm {int unsafe; int secureexec; int file; int filename; int cred; int per_clear; scalar_t__ called_set_creds; } ;
struct aa_task_ctx {scalar_t__ nnp; int token; scalar_t__ onexec; } ;
struct aa_profile {int dummy; } ;
struct aa_label {scalar_t__ proxy; } ;
struct TYPE_2__ {int i_uid; int i_mode; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct aa_label*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct aa_label*) ;
 int FUNC_3 (struct aa_profile*,int *,int ,int ,int ,int *,struct aa_label*,int ,char const*,int) ;
 scalar_t__ FUNC_4 (struct aa_label*) ;
 struct aa_label* FUNC_5 (struct aa_label*) ;
 int FUNC_6 (struct aa_label*,scalar_t__) ;
 int FUNC_7 (struct aa_label*,int ) ;
 int FUNC_8 (struct aa_label*) ;
 struct aa_label* FUNC_9 (int ) ;
 int VAR_10 ;
 int FUNC_10 (char*,...) ;
 TYPE_1__* FUNC_11 (int ) ;
 int FUNC_12 (struct aa_label*,struct aa_profile*,int ) ;
 struct aa_label* FUNC_13 (struct aa_label*,struct aa_profile*,int ,int ) ;
 int FUNC_14 (char*) ;
 struct aa_label* FUNC_15 (struct aa_label*,scalar_t__,int ,struct linux_binprm*,char*,struct path_cond*,int*) ;
 int FUNC_16 (struct aa_label*,char const**) ;
 int VAR_11 ;
 int FUNC_17 (struct aa_profile*,struct linux_binprm*,char*,struct path_cond*,int*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,struct aa_label*) ;
 struct aa_task_ctx* FUNC_20 (int ) ;
 int FUNC_21 (struct aa_label*) ;

int FUNC_22(struct linux_binprm *VAR_12)
{
 struct aa_task_ctx *VAR_13;
 struct aa_label *VAR_14, *VAR_15 = ((void*)0);
 struct aa_profile *VAR_16;
 char *VAR_17 = ((void*)0);
 const char *VAR_18 = ((void*)0);
 int VAR_19 = 0;
 bool VAR_20 = 0;
 struct path_cond VAR_21 = {
  FUNC_11(VAR_12->file)->i_uid,
  FUNC_11(VAR_12->file)->i_mode
 };

 if (VAR_12->called_set_creds)
  return 0;

 VAR_13 = FUNC_20(VAR_10);
 FUNC_0(!FUNC_9(VAR_12->cred));
 FUNC_0(!VAR_13);

 VAR_14 = FUNC_5(FUNC_9(VAR_12->cred));
 if ((VAR_12->unsafe & VAR_4) && !FUNC_21(VAR_14) &&
     !VAR_13->nnp)
  VAR_13->nnp = FUNC_4(VAR_14);


 FUNC_14(VAR_17);

 if (VAR_13->onexec)
  VAR_15 = FUNC_15(VAR_14, VAR_13->onexec, VAR_13->token,
        VAR_12, VAR_17, &VAR_21, &VAR_20);
 else
  VAR_15 = FUNC_13(VAR_14, VAR_16, VAR_3,
    FUNC_17(VAR_16, VAR_12, VAR_17,
         &VAR_21, &VAR_20));

 FUNC_0(!VAR_15);
 if (FUNC_1(VAR_15)) {
  VAR_19 = FUNC_2(VAR_15);
  goto done;
 } else if (!VAR_15) {
  VAR_19 = -VAR_1;
  goto done;
 }
 if ((VAR_12->unsafe & VAR_4) &&
     !FUNC_21(VAR_14) && !FUNC_6(VAR_15, VAR_13->nnp)) {
  VAR_19 = -VAR_2;
  VAR_18 = "no new privs";
  goto audit;
 }

 if (VAR_12->unsafe & VAR_6) {

  ;
 }

 if (VAR_12->unsafe & (VAR_5)) {

  VAR_19 = FUNC_16(VAR_15, &VAR_18);
  if (VAR_19)
   goto audit;
 }

 if (VAR_20) {
  if (VAR_0) {
   FUNC_10("scrubbing environment variables for %s "
       "label=", VAR_12->filename);
   FUNC_7(VAR_15, VAR_3);
   FUNC_10("\n");
  }
  VAR_12->secureexec = 1;
 }

 if (VAR_14->proxy != VAR_15->proxy) {

  if (VAR_0) {
   FUNC_10("apparmor: clearing unsafe personality "
       "bits. %s label=", VAR_12->filename);
   FUNC_7(VAR_15, VAR_3);
   FUNC_10("\n");
  }
  VAR_12->per_clear |= VAR_9;
 }
 FUNC_8(FUNC_9(VAR_12->cred));

 FUNC_19(VAR_12->cred, VAR_15);

done:
 FUNC_8(VAR_14);
 FUNC_18(VAR_17);

 return VAR_19;

audit:
 VAR_19 = FUNC_12(VAR_14, VAR_16,
   FUNC_3(VAR_16, &VAR_11, VAR_8, VAR_7,
          VAR_12->filename, ((void*)0), VAR_15,
          FUNC_11(VAR_12->file)->i_uid, VAR_18,
          VAR_19));
 FUNC_8(VAR_15);
 goto done;
}
