
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* envvar; int * keyword; } ;
typedef TYPE_1__ PQconninfoOption ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*) ;

void
FUNC_6(void)
{
 PQconninfoOption *VAR_0;
 PQconninfoOption *VAR_1;



 VAR_1 = FUNC_0();

 if (!VAR_1)
  FUNC_3("out of memory\n");

 for (VAR_0 = VAR_1; VAR_0->keyword != ((void*)0); VAR_0++)
 {
  if (VAR_0->envvar && (FUNC_4(VAR_0->envvar, "PGHOST") == 0 ||
          FUNC_4(VAR_0->envvar, "PGHOSTADDR") == 0))
  {
   const char *VAR_2 = FUNC_2(VAR_0->envvar);

   if (VAR_2 && FUNC_5(VAR_2) > 0 &&

    (FUNC_4(VAR_2, "localhost") != 0 && FUNC_4(VAR_2, "127.0.0.1") != 0 &&
     FUNC_4(VAR_2, "::1") != 0 && VAR_2[0] != '/'))
    FUNC_3("libpq environment variable %s has a non-local server value: %s\n",
       VAR_0->envvar, VAR_2);
  }
 }


 FUNC_1(VAR_1);
}
