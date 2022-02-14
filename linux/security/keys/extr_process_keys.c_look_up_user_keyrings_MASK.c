
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct user_namespace {int keyring_sem; } ;
struct key {int dummy; } ;
struct cred {TYPE_1__* user; } ;
typedef struct key* key_ref_t ;
typedef int key_perm_t ;
typedef int buf ;
struct TYPE_2__ {int uid; } ;


 int VAR_0 ;
 struct key* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct key*) ;
 struct cred* FUNC_3 () ;
 struct user_namespace* FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct user_namespace*,int ) ;
 struct key* FUNC_7 (struct user_namespace*) ;
 int FUNC_8 (char*,struct key*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (struct key*,struct key*) ;
 int FUNC_11 (struct key*) ;
 struct key* FUNC_12 (struct key*) ;
 int VAR_7 ;
 struct key* FUNC_13 (char*,int ,int ,struct cred const*,int,int,int *,struct key*) ;
 struct key* FUNC_14 (int ,int *,char*,int) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (struct key*,int) ;
 int FUNC_17 (char*,int,char*,int) ;
 int FUNC_18 (int *) ;

int FUNC_19(struct key **VAR_8,
     struct key **VAR_9)
{
 const struct cred *VAR_10 = FUNC_3();
 struct user_namespace *VAR_11 = FUNC_4();
 struct key *VAR_12, *VAR_13, *VAR_14;
 key_perm_t VAR_15;
 key_ref_t VAR_16, VAR_17;
 uid_t VAR_18 = FUNC_6(VAR_11, VAR_10->user->uid);
 char VAR_19[20];
 int VAR_20;

 VAR_15 = (VAR_4 & ~VAR_5) | VAR_6;

 FUNC_9("%u", VAR_18);

 VAR_12 = FUNC_7(VAR_11);
 if (FUNC_1(VAR_12))
  return FUNC_2(VAR_12);

 FUNC_5(&VAR_11->keyring_sem);
 VAR_20 = 0;





 FUNC_17(VAR_19, sizeof(VAR_19), "_uid.%u", VAR_18);
 VAR_16 = FUNC_14(FUNC_16(VAR_12, 1),
           &VAR_7, VAR_19, 0);
 FUNC_8("_uid %p", VAR_16);
 if (VAR_16 == FUNC_0(-VAR_0)) {
  VAR_13 = FUNC_13(VAR_19, VAR_10->user->uid, VAR_1,
         VAR_10, VAR_15,
         VAR_3 |
         VAR_2,
         ((void*)0), VAR_12);
  if (FUNC_1(VAR_13)) {
   VAR_20 = FUNC_2(VAR_13);
   goto error;
  }
 } else if (FUNC_1(VAR_16)) {
  VAR_20 = FUNC_2(VAR_16);
  goto error;
 } else {
  VAR_13 = FUNC_12(VAR_16);
 }


 FUNC_17(VAR_19, sizeof(VAR_19), "_uid_ses.%u", VAR_18);
 VAR_17 = FUNC_14(FUNC_16(VAR_12, 1),
        &VAR_7, VAR_19, 0);
 FUNC_8("_uid_ses %p", VAR_17);
 if (VAR_17 == FUNC_0(-VAR_0)) {
  VAR_14 = FUNC_13(VAR_19, VAR_10->user->uid, VAR_1,
      VAR_10, VAR_15,
      VAR_3 |
      VAR_2,
      ((void*)0), ((void*)0));
  if (FUNC_1(VAR_14)) {
   VAR_20 = FUNC_2(VAR_14);
   goto error_release;
  }




  VAR_20 = FUNC_10(VAR_14, VAR_13);
  if (VAR_20 < 0)
   goto error_release_session;




  VAR_20 = FUNC_10(VAR_12, VAR_14);
  if (VAR_20 < 0)
   goto error_release_session;
 } else if (FUNC_1(VAR_17)) {
  VAR_20 = FUNC_2(VAR_17);
  goto error_release;
 } else {
  VAR_14 = FUNC_12(VAR_17);
 }

 FUNC_18(&VAR_11->keyring_sem);

 if (VAR_9)
  *VAR_9 = VAR_14;
 else
  FUNC_11(VAR_14);
 if (VAR_8)
  *VAR_8 = VAR_13;
 else
  FUNC_11(VAR_13);
 FUNC_15(" = 0");
 return 0;

error_release_session:
 FUNC_11(VAR_14);
error_release:
 FUNC_11(VAR_13);
error:
 FUNC_18(&VAR_11->keyring_sem);
 FUNC_15(" = %d", VAR_20);
 return VAR_20;
}
