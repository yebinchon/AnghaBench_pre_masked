
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQExpBuffer ;


 int FUNC_0 (int ,char const) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

bool
FUNC_4(PQExpBuffer VAR_0, const char *VAR_1)
{



 bool VAR_2 = 1;
 const char *VAR_3;





 if (*VAR_1 != '\0' &&
  FUNC_3(VAR_1, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-_./:") == FUNC_2(VAR_1))
 {
  FUNC_1(VAR_0, VAR_1);
  return VAR_2;
 }


 FUNC_0(VAR_0, '\'');
 for (VAR_3 = VAR_1; *VAR_3; VAR_3++)
 {
  if (*VAR_3 == '\n' || *VAR_3 == '\r')
  {
   VAR_2 = 0;
   continue;
  }

  if (*VAR_3 == '\'')
   FUNC_1(VAR_0, "'\"'\"'");
  else
   FUNC_0(VAR_0, *VAR_3);
 }
 FUNC_0(VAR_0, '\'');
 return VAR_2;
}
