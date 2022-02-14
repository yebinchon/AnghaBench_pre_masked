
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* envvar; char* compiled; int * val; int * keyword; } ;
typedef TYPE_1__ PQconninfoOption ;
typedef scalar_t__ PQExpBuffer ;


 void* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 void* FUNC_6 (char*) ;

__attribute__((used)) static bool
FUNC_7(PQconninfoOption *VAR_0, PQExpBuffer VAR_1)
{
 PQconninfoOption *VAR_2;
 char *VAR_3;






 if (FUNC_2(VAR_0, VAR_1) != 0 && VAR_1)
  return 0;





 for (VAR_2 = VAR_0; VAR_2->keyword != ((void*)0); VAR_2++)
 {
  if (VAR_2->val != ((void*)0))
   continue;




  if (VAR_2->envvar != ((void*)0))
  {
   if ((VAR_3 = FUNC_0(VAR_2->envvar)) != ((void*)0))
   {
    VAR_2->val = FUNC_6(VAR_3);
    if (!VAR_2->val)
    {
     if (VAR_1)
      FUNC_4(VAR_1,
            FUNC_1("out of memory\n"));
     return 0;
    }
    continue;
   }
  }







  if (FUNC_5(VAR_2->keyword, "sslmode") == 0)
  {
   const char *VAR_4 = FUNC_0("PGREQUIRESSL");

   if (VAR_4 != ((void*)0) && VAR_4[0] == '1')
   {
    VAR_2->val = FUNC_6("require");
    if (!VAR_2->val)
    {
     if (VAR_1)
      FUNC_4(VAR_1,
            FUNC_1("out of memory\n"));
     return 0;
    }
    continue;
   }
  }





  if (VAR_2->compiled != ((void*)0))
  {
   VAR_2->val = FUNC_6(VAR_2->compiled);
   if (!VAR_2->val)
   {
    if (VAR_1)
     FUNC_4(VAR_1,
           FUNC_1("out of memory\n"));
    return 0;
   }
   continue;
  }
  if (FUNC_5(VAR_2->keyword, "user") == 0)
  {
   VAR_2->val = FUNC_3(((void*)0));
   continue;
  }
 }

 return 1;
}
