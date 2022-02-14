
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int keyring_sem; scalar_t__ persistent_keyring_register; } ;
struct keyring_index_key {char* description; int desc_len; int * type; } ;
struct key {long serial; } ;
typedef int kuid_t ;
typedef scalar_t__ key_ref_t ;
typedef int index_key ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 long FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,struct keyring_index_key*) ;
 int FUNC_6 (struct user_namespace*,int ) ;
 scalar_t__ FUNC_7 (struct user_namespace*,int ,struct keyring_index_key*) ;
 long FUNC_8 (struct key*,struct key*) ;
 int FUNC_9 (scalar_t__) ;
 struct key* FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct keyring_index_key*) ;
 int FUNC_12 (struct key*,int ) ;
 long FUNC_13 (scalar_t__,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_14 (scalar_t__,int) ;
 int FUNC_15 (struct keyring_index_key*,int ,int) ;
 int VAR_2 ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static long FUNC_19(struct user_namespace *VAR_3, kuid_t VAR_4,
          key_ref_t VAR_5)
{
 struct keyring_index_key VAR_6;
 struct key *VAR_7;
 key_ref_t VAR_8, VAR_9;
 char VAR_10[32];
 long VAR_11;


 FUNC_15(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.type = &VAR_1;
 VAR_6.description = VAR_10;
 VAR_6.desc_len = FUNC_16(VAR_10, "_persistent.%u", FUNC_6(VAR_3, VAR_4));
 FUNC_11(&VAR_6);

 if (VAR_3->persistent_keyring_register) {
  VAR_8 = FUNC_14(VAR_3->persistent_keyring_register, 1);
  FUNC_3(&VAR_3->keyring_sem);
  VAR_9 = FUNC_5(VAR_8, &VAR_6);
  FUNC_17(&VAR_3->keyring_sem);

  if (VAR_9)
   goto found;
 }




 FUNC_4(&VAR_3->keyring_sem);
 VAR_9 = FUNC_7(VAR_3, VAR_4, &VAR_6);
 FUNC_18(&VAR_3->keyring_sem);
 if (!FUNC_0(VAR_9))
  goto found;

 return FUNC_1(VAR_9);

found:
 VAR_11 = FUNC_13(VAR_9, FUNC_2(), VAR_0);
 if (VAR_11 == 0) {
  VAR_7 = FUNC_10(VAR_9);
  VAR_11 = FUNC_8(FUNC_10(VAR_5), VAR_7);
  if (VAR_11 == 0) {
   FUNC_12(VAR_7, VAR_2);
   VAR_11 = VAR_7->serial;
  }
 }

 FUNC_9(VAR_9);
 return VAR_11;
}
