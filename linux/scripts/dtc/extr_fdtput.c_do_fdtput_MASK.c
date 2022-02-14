
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_info {int oper; int auto_path; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct display_info*,char**,int,char**,int*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,char*,char*,int) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(struct display_info *VAR_0, const char *VAR_1,
      char **VAR_2, int VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_5 = FUNC_6(VAR_1);
 if (!VAR_5)
  return -1;

 switch (VAR_0->oper) {
 case 128:




  FUNC_0(VAR_3 >= 2);
  if (VAR_0->auto_path && FUNC_2(VAR_5, *VAR_2))
   return -1;
  if (FUNC_3(VAR_0, VAR_2 + 2, VAR_3 - 2, &VAR_4, &VAR_6) ||
   FUNC_5(VAR_5, *VAR_2, VAR_2[1], VAR_4, VAR_6))
   VAR_7 = -1;
  break;
 case 129:
  for (; VAR_7 >= 0 && VAR_3--; VAR_2++) {
   if (VAR_0->auto_path)
    VAR_7 = FUNC_2(VAR_5, *VAR_2);
   else
    VAR_7 = FUNC_1(VAR_5, *VAR_2);
  }
  break;
 }
 if (VAR_7 >= 0)
  VAR_7 = FUNC_7(VAR_1, VAR_5);

 FUNC_4(VAR_5);
 return VAR_7;
}
