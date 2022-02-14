
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cred {int dummy; } ;
struct aa_task_ctx {scalar_t__ nnp; int previous; } ;
struct aa_profile {int dummy; } ;
struct aa_perms {int kill; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct aa_label*) ;
 int VAR_5 ;
 int FUNC_3 (struct aa_label*) ;
 int FUNC_4 (struct aa_profile*,struct aa_perms*,int ,int ,int *,int *,struct aa_label*,int ,char const*,int) ;
 scalar_t__ FUNC_5 (struct aa_label*) ;
 struct aa_label* FUNC_6 (struct cred const*) ;
 struct aa_label* FUNC_7 (int ) ;
 int FUNC_8 (struct aa_label*,scalar_t__) ;
 int FUNC_9 (struct aa_label*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct aa_label*,int ) ;
 struct aa_label* FUNC_12 (struct aa_label*,char const**,int,int) ;
 int VAR_6 ;
 int FUNC_13 (struct aa_label*,struct aa_profile*,int ) ;
 struct cred* FUNC_14 () ;
 int FUNC_15 (struct aa_label*,char const**) ;
 int FUNC_16 (struct cred const*) ;
 struct aa_task_ctx* FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (struct aa_label*) ;

int FUNC_20(const char *VAR_7[], int VAR_8, u64 VAR_9, int VAR_10)
{
 const struct cred *VAR_11;
 struct aa_task_ctx *VAR_12 = FUNC_17(VAR_6);
 struct aa_label *VAR_13, *VAR_14, *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 struct aa_profile *VAR_17;
 struct aa_perms VAR_18 = {};
 const char *VAR_19 = ((void*)0);
 int VAR_20 = 0;


 VAR_11 = FUNC_14();
 VAR_13 = FUNC_6(VAR_11);
 VAR_14 = FUNC_7(VAR_12->previous);
 if (FUNC_18(VAR_6) && !FUNC_19(VAR_13) && !VAR_12->nnp)
  VAR_12->nnp = FUNC_5(VAR_13);

 if (FUNC_19(VAR_13)) {
  VAR_19 = "unconfined can not change_hat";
  VAR_20 = -VAR_3;
  goto fail;
 }

 if (VAR_8) {
  VAR_15 = FUNC_12(VAR_13, VAR_7, VAR_8, VAR_10);
  FUNC_0(!VAR_15);
  if (FUNC_2(VAR_15)) {
   VAR_20 = FUNC_3(VAR_15);
   VAR_15 = ((void*)0);

   goto out;
  }

  VAR_20 = FUNC_15(VAR_15, &VAR_19);
  if (VAR_20)
   goto fail;





  if (FUNC_18(VAR_6) && !FUNC_19(VAR_13) &&
      !FUNC_8(VAR_15, VAR_12->nnp)) {

   FUNC_1("no_new_privs - change_hat denied");
   VAR_20 = -VAR_3;
   goto out;
  }

  if (VAR_10 & VAR_0)
   goto out;

  VAR_16 = VAR_15;
  VAR_20 = FUNC_11(VAR_15, VAR_9);
  if (VAR_20 == -VAR_2)

   goto kill;
 } else if (VAR_14 && !(VAR_10 & VAR_0)) {




  if (FUNC_18(VAR_6) && !FUNC_19(VAR_13) &&
      !FUNC_8(VAR_14, VAR_12->nnp)) {

   FUNC_1("no_new_privs - change_hat denied");
   VAR_20 = -VAR_3;
   goto out;
  }




  VAR_16 = VAR_14;
  VAR_20 = FUNC_10(VAR_9);
  if (VAR_20) {
   if (VAR_20 == -VAR_2)
    goto kill;
   goto fail;
  }
 }

out:
 FUNC_9(VAR_15);
 FUNC_9(VAR_14);
 FUNC_9(VAR_13);
 FUNC_16(VAR_11);

 return VAR_20;

kill:
 VAR_19 = "failed token match";
 VAR_18.kill = VAR_1;

fail:
 FUNC_13(VAR_13, VAR_17,
  FUNC_4(VAR_17, &VAR_18, VAR_5,
         VAR_1, ((void*)0), ((void*)0), VAR_16,
         VAR_4, VAR_19, VAR_20));

 goto out;
}
