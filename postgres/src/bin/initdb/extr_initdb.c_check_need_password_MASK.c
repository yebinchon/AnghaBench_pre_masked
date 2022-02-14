
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, const char *VAR_3)
{
 if ((FUNC_2(VAR_2, "md5") == 0 ||
   FUNC_2(VAR_2, "password") == 0 ||
   FUNC_2(VAR_2, "scram-sha-256") == 0) &&
  (FUNC_2(VAR_3, "md5") == 0 ||
   FUNC_2(VAR_3, "password") == 0 ||
   FUNC_2(VAR_3, "scram-sha-256") == 0) &&
  !(VAR_1 || VAR_0))
 {
  FUNC_1("must specify a password for the superuser to enable %s authentication",
      (FUNC_2(VAR_2, "md5") == 0 ||
       FUNC_2(VAR_2, "password") == 0 ||
       FUNC_2(VAR_2, "scram-sha-256") == 0)
      ? VAR_2
      : VAR_3);
  FUNC_0(1);
 }
}
