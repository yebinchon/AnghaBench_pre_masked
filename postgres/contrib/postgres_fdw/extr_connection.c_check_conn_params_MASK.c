
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int userid; } ;
typedef TYPE_1__ UserMapping ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(const char **VAR_2, const char **VAR_3, UserMapping *VAR_4)
{
 int VAR_5;


 if (FUNC_5(VAR_4->userid))
  return;


 for (VAR_5 = 0; VAR_2[VAR_5] != ((void*)0); VAR_5++)
 {
  if (FUNC_4(VAR_2[VAR_5], "password") == 0 && VAR_3[VAR_5][0] != '\0')
   return;
 }

 FUNC_0(VAR_1,
   (FUNC_1(VAR_0),
    FUNC_3("password is required"),
    FUNC_2("Non-superusers must provide a password in the user mapping.")));
}
