
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsinfo {int dummy; } ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,int ,char*,char*,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,struct nsinfo*) ;

char *FUNC_3(const char *VAR_2, const char *VAR_3,
          struct nsinfo *VAR_4, bool VAR_5,
          bool VAR_6)
{
 char *VAR_7 = (char *)VAR_3, *VAR_8;
 bool VAR_9 = VAR_5 || VAR_6;

 if (!VAR_9) {
  VAR_7 = FUNC_2(VAR_3, VAR_4);
  if (!VAR_7)
   return ((void*)0);
 }

 if (FUNC_0(&VAR_8, "%d%s%s%s%s", VAR_1, VAR_9 ? "/" : "",
       VAR_6 ? VAR_0 : VAR_7,
       VAR_2 ? "/" : "", VAR_2 ?: "") < 0)
  VAR_8 = ((void*)0);

 if (!VAR_9)
  FUNC_1(VAR_7);

 return VAR_8;
}
