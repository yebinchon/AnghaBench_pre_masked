
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQExpBuffer ;


 int FUNC_0 (int ,char const) ;
 int FUNC_1 (int ,char const*) ;

void
FUNC_2(PQExpBuffer VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 bool VAR_3;





 VAR_3 = 1;
 for (VAR_2 = VAR_1; *VAR_2; VAR_2++)
 {
  if (!((*VAR_2 >= 'a' && *VAR_2 <= 'z') || (*VAR_2 >= 'A' && *VAR_2 <= 'Z') ||
     (*VAR_2 >= '0' && *VAR_2 <= '9') || *VAR_2 == '_' || *VAR_2 == '.'))
  {
   VAR_3 = 1;
   break;
  }
  VAR_3 = 0;
 }

 if (VAR_3)
 {
  FUNC_0(VAR_0, '\'');
  while (*VAR_1)
  {

   if (*VAR_1 == '\'' || *VAR_1 == '\\')
    FUNC_0(VAR_0, '\\');

   FUNC_0(VAR_0, *VAR_1);
   VAR_1++;
  }
  FUNC_0(VAR_0, '\'');
 }
 else
  FUNC_1(VAR_0, VAR_1);
}
