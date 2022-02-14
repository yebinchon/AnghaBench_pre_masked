
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* val; int * keyword; } ;
typedef TYPE_1__ PQconninfoOption ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (char const*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(const char *VAR_2)
{
 if (!FUNC_7())
 {
  PQconninfoOption *VAR_3;
  PQconninfoOption *VAR_4;
  bool VAR_5 = 0;

  VAR_3 = FUNC_1(VAR_2, ((void*)0));
  if (VAR_3)
  {
   for (VAR_4 = VAR_3; VAR_4->keyword != ((void*)0); VAR_4++)
   {
    if (FUNC_6(VAR_4->keyword, "password") == 0)
    {
     if (VAR_4->val != ((void*)0) && VAR_4->val[0] != '\0')
     {
      VAR_5 = 1;
      break;
     }
    }
   }
   FUNC_0(VAR_3);
  }

  if (!VAR_5)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_5("password is required"),
      FUNC_4("Non-superusers must provide a password in the connection string.")));
 }
}
