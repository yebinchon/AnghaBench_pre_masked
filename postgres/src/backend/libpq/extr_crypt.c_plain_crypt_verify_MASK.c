
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int ,char*) ;
 char* FUNC_3 (int ,char const*) ;
 int FUNC_4 (char const*,char const*,char const*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*) ;

int
FUNC_7(const char *VAR_3, const char *VAR_4,
       const char *VAR_5,
       char **VAR_6)
{
 char VAR_7[VAR_0 + 1];






 switch (FUNC_1(VAR_4))
 {
  case 128:
   if (FUNC_4(VAR_3,
           VAR_5,
           VAR_4))
   {
    return VAR_2;
   }
   else
   {
    *VAR_6 = FUNC_3(FUNC_0("Password does not match for user \"%s\"."),
           VAR_3);
    return VAR_1;
   }
   break;

  case 130:
   if (!FUNC_2(VAR_5,
        VAR_3,
        FUNC_6(VAR_3),
        VAR_7))
   {






    return VAR_1;
   }
   if (FUNC_5(VAR_7, VAR_4) == 0)
    return VAR_2;
   else
   {
    *VAR_6 = FUNC_3(FUNC_0("Password does not match for user \"%s\"."),
           VAR_3);
    return VAR_1;
   }
   break;

  case 129:





   break;
 }





 *VAR_6 = FUNC_3(FUNC_0("Password of user \"%s\" is in unrecognized format."),
        VAR_3);
 return VAR_1;
}
