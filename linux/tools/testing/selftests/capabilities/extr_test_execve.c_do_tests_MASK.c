
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (char*,int,int) ;
 int FUNC_6 (int,char*,char*) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_18 ;
 int FUNC_8 (char*,int,int,int,int) ;
 int FUNC_9 (int,int,int,int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char const*,...) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 scalar_t__ VAR_19 ;
 int FUNC_18 (char const*,int) ;
 int FUNC_19 (int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_20 (int,int,int) ;
 int FUNC_21 (scalar_t__) ;

__attribute__((used)) static int FUNC_22(int VAR_20, const char *VAR_21)
{
 bool VAR_22 = FUNC_7(VAR_20);

 int VAR_23 = FUNC_18(VAR_21, VAR_11 | VAR_10);
 if (VAR_23 == -1)
  FUNC_12("open '%s' - %s\n",
     VAR_21, FUNC_21(VAR_18));

 FUNC_3();

 FUNC_6(VAR_23, "validate_cap", "validate_cap");

 if (VAR_22) {
  uid_t VAR_24 = FUNC_11();

  FUNC_6(VAR_23, "validate_cap",
          "validate_cap_suidroot");
  if (FUNC_5("validate_cap_suidroot", 0, -1) != 0)
   FUNC_12("chown - %s\n", FUNC_21(VAR_18));
  if (FUNC_4("validate_cap_suidroot", VAR_17 | 0700) != 0)
   FUNC_12("chmod - %s\n", FUNC_21(VAR_18));

  FUNC_6(VAR_23, "validate_cap",
          "validate_cap_suidnonroot");
  if (FUNC_5("validate_cap_suidnonroot", VAR_20 + 1, -1) != 0)
   FUNC_12("chown - %s\n", FUNC_21(VAR_18));
  if (FUNC_4("validate_cap_suidnonroot", VAR_17 | 0700) != 0)
   FUNC_12("chmod - %s\n", FUNC_21(VAR_18));

  FUNC_6(VAR_23, "validate_cap",
          "validate_cap_sgidroot");
  if (FUNC_5("validate_cap_sgidroot", -1, 0) != 0)
   FUNC_12("chown - %s\n", FUNC_21(VAR_18));
  if (FUNC_4("validate_cap_sgidroot", VAR_16 | 0710) != 0)
   FUNC_12("chmod - %s\n", FUNC_21(VAR_18));

  FUNC_6(VAR_23, "validate_cap",
          "validate_cap_sgidnonroot");
  if (FUNC_5("validate_cap_sgidnonroot", -1, VAR_24 + 1) != 0)
   FUNC_12("chown - %s\n", FUNC_21(VAR_18));
  if (FUNC_4("validate_cap_sgidnonroot", VAR_16 | 0710) != 0)
   FUNC_12("chmod - %s\n", FUNC_21(VAR_18));
 }

 FUNC_1();


 FUNC_2(VAR_1, VAR_3, VAR_6);
 if (FUNC_0(VAR_5) != 0)
  FUNC_12("capng_apply - %s\n", FUNC_21(VAR_18));

 if (VAR_20 == 0) {
  FUNC_14("[RUN]\tRoot => ep\n");
  if (FUNC_10())
   FUNC_9(1, 1, 0, 0);
 } else {
  FUNC_14("[RUN]\tNon-root => no caps\n");
  if (FUNC_10())
   FUNC_9(0, 0, 0, 0);
 }

 FUNC_14("Check cap_ambient manipulation rules\n");


 if (FUNC_19(VAR_12, VAR_15, VAR_6, 0, 0, 0) != -1 || VAR_18 != VAR_9) {
  if (VAR_18 == VAR_8)
   FUNC_15(
    "PR_CAP_AMBIENT_RAISE isn't supported\n");
  else
   FUNC_15(
    "PR_CAP_AMBIENT_RAISE should have failed eith EPERM on a non-inheritable cap\n");
  return 1;
 }
 FUNC_16(
  "PR_CAP_AMBIENT_RAISE failed on non-inheritable cap\n");

 FUNC_2(VAR_0, VAR_3, VAR_7);
 FUNC_2(VAR_1, VAR_4, VAR_7);
 FUNC_2(VAR_1, VAR_2, VAR_7);
 if (FUNC_0(VAR_5) != 0)
  FUNC_12("capng_apply - %s\n", FUNC_21(VAR_18));
 if (FUNC_19(VAR_12, VAR_15, VAR_7, 0, 0, 0) != -1 || VAR_18 != VAR_9) {
  FUNC_15(
   "PR_CAP_AMBIENT_RAISE should have failed on a non-permitted cap\n");
  return 1;
 }
 FUNC_16(
  "PR_CAP_AMBIENT_RAISE failed on non-permitted cap\n");

 FUNC_2(VAR_0, VAR_3, VAR_6);
 if (FUNC_0(VAR_5) != 0)
  FUNC_12("capng_apply - %s\n", FUNC_21(VAR_18));
 if (FUNC_19(VAR_12, VAR_15, VAR_6, 0, 0, 0) != 0) {
  FUNC_15(
   "PR_CAP_AMBIENT_RAISE should have succeeded\n");
  return 1;
 }
 FUNC_16("PR_CAP_AMBIENT_RAISE worked\n");

 if (FUNC_19(VAR_12, VAR_14, VAR_6, 0, 0, 0) != 1) {
  FUNC_15("PR_CAP_AMBIENT_IS_SET is broken\n");
  return 1;
 }

 if (FUNC_19(VAR_12, VAR_13, 0, 0, 0, 0) != 0)
  FUNC_12("PR_CAP_AMBIENT_CLEAR_ALL - %s\n",
     FUNC_21(VAR_18));

 if (FUNC_19(VAR_12, VAR_14, VAR_6, 0, 0, 0) != 0) {
  FUNC_15(
   "PR_CAP_AMBIENT_CLEAR_ALL didn't work\n");
  return 1;
 }

 if (FUNC_19(VAR_12, VAR_15, VAR_6, 0, 0, 0) != 0)
  FUNC_12("PR_CAP_AMBIENT_RAISE - %s\n",
     FUNC_21(VAR_18));

 FUNC_2(VAR_1, VAR_3, VAR_6);
 if (FUNC_0(VAR_5) != 0)
  FUNC_12("capng_apply - %s\n", FUNC_21(VAR_18));

 if (FUNC_19(VAR_12, VAR_14, VAR_6, 0, 0, 0) != 0) {
  FUNC_15("Dropping I should have dropped A\n");
  return 1;
 }

 FUNC_16("Basic manipulation appears to work\n");

 FUNC_2(VAR_0, VAR_3, VAR_6);
 if (FUNC_0(VAR_5) != 0)
  FUNC_12("capng_apply - %s\n", FUNC_21(VAR_18));
 if (VAR_20 == 0) {
  FUNC_14("[RUN]\tRoot +i => eip\n");
  if (FUNC_10())
   FUNC_9(1, 1, 1, 0);
 } else {
  FUNC_14("[RUN]\tNon-root +i => i\n");
  if (FUNC_10())
   FUNC_9(0, 0, 1, 0);
 }

 if (FUNC_19(VAR_12, VAR_15, VAR_6, 0, 0, 0) != 0)
  FUNC_12("PR_CAP_AMBIENT_RAISE - %s\n",
     FUNC_21(VAR_18));

 FUNC_14("[RUN]\tUID %d +ia => eipa\n", VAR_20);
 if (FUNC_10())
  FUNC_9(1, 1, 1, 1);



 if (!VAR_22) {
  FUNC_17("SUID/SGID tests (needs privilege)\n");
  goto done;
 }

 if (VAR_20 == 0) {
  FUNC_14("[RUN]\tRoot +ia, suidroot => eipa\n");
  if (FUNC_10())
   FUNC_8("./validate_cap_suidroot",
      1, 1, 1, 1);

  FUNC_14("[RUN]\tRoot +ia, suidnonroot => ip\n");
  if (FUNC_10())
   FUNC_8("./validate_cap_suidnonroot",
      0, 1, 1, 0);

  FUNC_14("[RUN]\tRoot +ia, sgidroot => eipa\n");
  if (FUNC_10())
   FUNC_8("./validate_cap_sgidroot",
      1, 1, 1, 1);

  if (FUNC_10()) {
   FUNC_14(
    "[RUN]\tRoot, gid != 0, +ia, sgidroot => eip\n");
   if (FUNC_20(1, 1, 1) != 0)
    FUNC_12("setresgid - %s\n",
       FUNC_21(VAR_18));
   FUNC_8("./validate_cap_sgidroot",
      1, 1, 1, 0);
  }

  FUNC_14("[RUN]\tRoot +ia, sgidnonroot => eip\n");
  if (FUNC_10())
   FUNC_8("./validate_cap_sgidnonroot",
      1, 1, 1, 0);
 } else {
  FUNC_14("[RUN]\tNon-root +ia, sgidnonroot => i\n");
  if (FUNC_10())
   FUNC_8("./validate_cap_sgidnonroot",
     0, 0, 1, 0);

  if (FUNC_10()) {
   FUNC_14("[RUN]\tNon-root +ia, sgidroot => i\n");
   if (FUNC_20(1, 1, 1) != 0)
    FUNC_12("setresgid - %s\n",
       FUNC_21(VAR_18));
   FUNC_8("./validate_cap_sgidroot",
      0, 0, 1, 0);
  }
 }

done:
 FUNC_13();
 return VAR_19 ? 1 : 0;
}
