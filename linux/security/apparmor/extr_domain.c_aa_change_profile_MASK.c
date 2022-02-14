
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aa_task_ctx {scalar_t__ nnp; } ;
struct aa_label {int dummy; } ;
struct aa_profile {struct aa_label label; } ;
struct aa_perms {scalar_t__ allow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct aa_profile*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct aa_label*) ;
 scalar_t__ FUNC_3 (struct aa_label*) ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 int FUNC_4 (struct aa_label*) ;
 int FUNC_5 (struct aa_profile*,struct aa_perms*,char*,int ,char const*,int *,struct aa_label*,int ,char const*,int) ;
 struct aa_label* FUNC_6 () ;
 scalar_t__ FUNC_7 (struct aa_label*) ;
 int FUNC_8 (struct aa_label*,scalar_t__) ;
 struct aa_label* FUNC_9 (struct aa_label*,struct aa_label*,int ) ;
 struct aa_label* FUNC_10 (struct aa_label*,char const*,int ,int,int) ;
 struct aa_profile* FUNC_11 (struct aa_profile*,int,char const*,int ) ;
 int FUNC_12 (struct aa_label*) ;
 int FUNC_13 (struct aa_label*) ;
 int FUNC_14 (struct aa_label*,int) ;
 int FUNC_15 (char*,char const*,struct aa_profile*,struct aa_label*,int,int ,struct aa_perms*) ;
 int VAR_14 ;
 int FUNC_16 (struct aa_label*,struct aa_profile*,int ) ;
 struct aa_label* FUNC_17 (struct aa_label*,struct aa_profile*,int ,scalar_t__,scalar_t__) ;
 struct aa_profile* FUNC_18 (struct aa_label*) ;
 int FUNC_19 (struct aa_label*,char const**) ;
 struct aa_task_ctx* FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (struct aa_label*) ;

int FUNC_23(const char *VAR_15, int VAR_16)
{
 struct aa_label *VAR_17, *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 struct aa_profile *VAR_20;
 struct aa_perms VAR_21 = {};
 const char *VAR_22 = ((void*)0);
 const char *VAR_23 = VAR_15;
 bool VAR_24 = VAR_16 & VAR_1;
 struct aa_task_ctx *VAR_25 = FUNC_20(VAR_14);
 int VAR_26 = 0;
 char *VAR_27;
 u32 VAR_28;

 VAR_17 = FUNC_6();
 if (FUNC_21(VAR_14) && !FUNC_22(VAR_17) && !VAR_25->nnp)
  VAR_25->nnp = FUNC_7(VAR_17);

 if (!VAR_15 || !*VAR_15) {
  FUNC_0("no profile name");
  return -VAR_5;
 }

 if (VAR_16 & VAR_0) {
  VAR_28 = VAR_4;
  if (VAR_24)
   VAR_27 = VAR_13;
  else
   VAR_27 = VAR_10;
 } else {
  VAR_28 = VAR_3;
  if (VAR_24)
   VAR_27 = VAR_12;
  else
   VAR_27 = VAR_11;
 }

 VAR_17 = FUNC_6();

 if (*VAR_15 == '&') {
  VAR_24 = 1;

  VAR_15++;
 }
 VAR_19 = FUNC_10(VAR_17, VAR_15, VAR_8, 1, 0);
 if (FUNC_2(VAR_19)) {
  struct aa_profile *VAR_29;

  VAR_22 = "label not found";
  VAR_26 = FUNC_4(VAR_19);
  VAR_19 = ((void*)0);




  if ((VAR_16 & VAR_2) ||
      !FUNC_1(FUNC_18(VAR_17)))
   goto audit;

  VAR_29 = FUNC_11(FUNC_18(VAR_17), 0,
            VAR_15, VAR_8);
  if (!VAR_29) {
   VAR_22 = "failed null profile create";
   VAR_26 = -VAR_6;
   goto audit;
  }
  VAR_19 = &VAR_29->label;
  goto check;
 }
 VAR_26 = FUNC_16(VAR_17, VAR_20,
   FUNC_15(VAR_27, VAR_23,
           VAR_20, VAR_19, VAR_24,
           VAR_28, &VAR_21));
 if (VAR_26)

  goto out;



check:

 VAR_26 = FUNC_19(VAR_19, &VAR_22);
 if (VAR_26 && !FUNC_16(VAR_17, VAR_20,
     FUNC_1(VAR_20)))
  goto audit;
 if (VAR_16 & VAR_2)
  goto out;


 if (!VAR_24) {
  VAR_18 = FUNC_17(VAR_17, VAR_20, VAR_8,
        FUNC_7(VAR_19),
        FUNC_7(&VAR_20->label));




  if (FUNC_21(VAR_14) && !FUNC_22(VAR_17) &&
      !FUNC_8(VAR_18, VAR_25->nnp)) {

   FUNC_0("no_new_privs - change_hat denied");
   VAR_26 = -VAR_7;
   goto out;
  }
 }

 if (!(VAR_16 & VAR_0)) {

  if (VAR_24)
   VAR_18 = FUNC_9(VAR_17, VAR_19, VAR_8);
  if (FUNC_3(VAR_18)) {
   VAR_22 = "failed to build target label";
   if (!VAR_18)
    VAR_26 = -VAR_6;
   else
    VAR_26 = FUNC_4(VAR_18);
   VAR_18 = ((void*)0);
   VAR_21.allow = 0;
   goto audit;
  }
  VAR_26 = FUNC_13(VAR_18);
 } else {
  if (VAR_18) {
   FUNC_12(VAR_18);
   VAR_18 = ((void*)0);
  }


  VAR_26 = FUNC_14(VAR_19, VAR_24);
 }

audit:
 VAR_26 = FUNC_16(VAR_17, VAR_20,
   FUNC_5(VAR_20, &VAR_21, VAR_27, VAR_28, VAR_23,
          ((void*)0), VAR_18 ? VAR_18 : VAR_19,
          VAR_9, VAR_22, VAR_26));

out:
 FUNC_12(VAR_18);
 FUNC_12(VAR_19);
 FUNC_12(VAR_17);

 return VAR_26;
}
