
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*,char const*,char*) ;

__attribute__((used)) static char *
FUNC_5(char *VAR_2, char *VAR_3)
{
 char VAR_4[VAR_0];

 if (VAR_2 != ((void*)0))
 {
  if (FUNC_3(VAR_2, VAR_3))
   return FUNC_2(VAR_2);


  FUNC_4(VAR_4, VAR_0, "%s/%s", VAR_2, VAR_1);
  if (FUNC_3(VAR_4, VAR_3))
   return FUNC_2(VAR_4);
 }
 else
 {
  const char *VAR_5;


  if (FUNC_3(".", VAR_3))
   return FUNC_2(".");

  if (FUNC_3(VAR_1, VAR_3))
   return FUNC_2(VAR_1);

  VAR_5 = FUNC_1("PGDATA");

  if (VAR_5 != ((void*)0))
  {
   FUNC_4(VAR_4, VAR_0, "%s/%s", VAR_5, VAR_1);
   if (FUNC_3(VAR_4, VAR_3))
    return FUNC_2(VAR_4);
  }
 }


 if (VAR_3)
  FUNC_0("could not locate WAL file \"%s\"", VAR_3);
 else
  FUNC_0("could not find any WAL file");

 return ((void*)0);
}
