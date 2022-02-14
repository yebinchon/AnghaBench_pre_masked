
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; } ;
typedef int PQconninfoOption ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (int *,char*,char*,TYPE_1__*,int,int) ;
 char* FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static bool
FUNC_6(char *VAR_0,
        PQconninfoOption *VAR_1,
        PQExpBuffer VAR_2)
{
 while (*VAR_0)
 {
  char *VAR_3 = VAR_0;
  char *VAR_4 = ((void*)0);
  char *VAR_5 = VAR_0;
  bool VAR_6 = 0;





  for (;;)
  {
   if (*VAR_5 == '=')
   {

    if (VAR_4 != ((void*)0))
    {
     FUNC_4(VAR_2,
           FUNC_3("extra key/value separator \"=\" in URI query parameter: \"%s\"\n"),
           VAR_3);
     return 0;
    }

    *VAR_5++ = '\0';
    VAR_4 = VAR_5;
   }
   else if (*VAR_5 == '&' || *VAR_5 == '\0')
   {




    if (*VAR_5 != '\0')
     *VAR_5++ = '\0';

    if (VAR_4 == ((void*)0))
    {
     FUNC_4(VAR_2,
           FUNC_3("missing key/value separator \"=\" in URI query parameter: \"%s\"\n"),
           VAR_3);
     return 0;
    }

    break;
   }
   else
    ++VAR_5;
  }

  VAR_3 = FUNC_1(VAR_3, VAR_2);
  if (VAR_3 == ((void*)0))
  {

   return 0;
  }
  VAR_4 = FUNC_1(VAR_4, VAR_2);
  if (VAR_4 == ((void*)0))
  {

   FUNC_2(VAR_3);
   return 0;
  }
  VAR_6 = 1;




  if (FUNC_5(VAR_3, "ssl") == 0 &&
   FUNC_5(VAR_4, "true") == 0)
  {
   FUNC_2(VAR_3);
   FUNC_2(VAR_4);
   VAR_6 = 0;

   VAR_3 = "sslmode";
   VAR_4 = "require";
  }






  if (!FUNC_0(VAR_1, VAR_3, VAR_4,
          VAR_2, 1, 0))
  {

   if (VAR_2->len == 0)
    FUNC_4(VAR_2,
          FUNC_3("invalid URI query parameter: \"%s\"\n"),
          VAR_3);

   if (VAR_6)
   {
    FUNC_2(VAR_3);
    FUNC_2(VAR_4);
   }
   return 0;
  }

  if (VAR_6)
  {
   FUNC_2(VAR_3);
   FUNC_2(VAR_4);
  }


  VAR_0 = VAR_5;
 }

 return 1;
}
