
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,int,char*) ;
 char* FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*) ;

int
FUNC_7(const char *VAR_4, const char *VAR_5,
     const char *VAR_6,
     const char *VAR_7, int VAR_8,
     char **VAR_9)
{
 int VAR_10;
 char VAR_11[VAR_0 + 1];

 FUNC_0(VAR_8 > 0);

 if (FUNC_2(VAR_5) != VAR_1)
 {

  *VAR_9 = FUNC_4(FUNC_1("User \"%s\" has a password that cannot be used with MD5 authentication."),
         VAR_4);
  return VAR_2;
 }
 if (!FUNC_3(VAR_5 + FUNC_6("md5"),
      VAR_7, VAR_8,
      VAR_11))
 {
  return VAR_2;
 }

 if (FUNC_5(VAR_6, VAR_11) == 0)
  VAR_10 = VAR_3;
 else
 {
  *VAR_9 = FUNC_4(FUNC_1("Password does not match for user \"%s\"."),
         VAR_4);
  VAR_10 = VAR_2;
 }

 return VAR_10;
}
