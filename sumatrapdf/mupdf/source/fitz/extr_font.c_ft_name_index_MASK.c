
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char*) ;
 char** FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char*,int) ;

int FUNC_4(void *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, (char*)VAR_1);
 if (VAR_2 == 0)
 {
  int VAR_3 = FUNC_2(VAR_1);
  if (VAR_3)
  {
   const char **VAR_4 = FUNC_1(VAR_3);
   while (*VAR_4)
   {
    VAR_2 = FUNC_0(VAR_0, (char*)*VAR_4);
    if (VAR_2)
     break;
    VAR_4++;
   }
   if (VAR_2 == 0)
   {
    char VAR_5[10];
    FUNC_3(VAR_5, "uni%04X", VAR_3);
    VAR_2 = FUNC_0(VAR_0, VAR_5);
   }
  }
 }
 return VAR_2;
}
