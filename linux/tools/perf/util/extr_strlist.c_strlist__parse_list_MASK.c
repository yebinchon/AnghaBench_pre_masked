
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strlist {int dummy; } ;


 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (struct strlist*,char const*,char const*) ;

__attribute__((used)) static int FUNC_2(struct strlist *VAR_0, const char *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 int VAR_4;

 while ((VAR_3 = FUNC_0(VAR_1, ',')) != ((void*)0)) {
  *VAR_3 = '\0';
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
  *VAR_3 = ',';
  if (VAR_4 != 0)
   return VAR_4;
  VAR_1 = VAR_3 + 1;
 }

 return *VAR_1 ? FUNC_1(VAR_0, VAR_1, VAR_2) : 0;
}
