
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PasswordType ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char const*,int ,char*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;

char *
FUNC_7(PasswordType VAR_2, const char *VAR_3,
     const char *VAR_4)
{
 PasswordType VAR_5 = FUNC_1(VAR_4);
 char *VAR_6;

 if (VAR_5 != 129)
 {




  return FUNC_5(VAR_4);
 }

 switch (VAR_2)
 {
  case 130:
   VAR_6 = FUNC_2(VAR_1 + 1);

   if (!FUNC_4(VAR_4, VAR_3, FUNC_6(VAR_3),
        VAR_6))
    FUNC_0(VAR_0, "password encryption failed");
   return VAR_6;

  case 128:
   return FUNC_3(VAR_4);

  case 129:
   FUNC_0(VAR_0, "cannot encrypt password with 'plaintext'");
 }





 FUNC_0(VAR_0, "cannot encrypt password to requested type");
 return ((void*)0);
}
