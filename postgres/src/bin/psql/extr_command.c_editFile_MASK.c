
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 char* FUNC_4 (char*,char const*,char const*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static bool
FUNC_6(const char *VAR_2, int VAR_3)
{
 const char *VAR_4;
 const char *VAR_5 = ((void*)0);
 char *VAR_6;
 int VAR_7;

 FUNC_0(VAR_2 != ((void*)0));


 VAR_4 = FUNC_2("PSQL_EDITOR");
 if (!VAR_4)
  VAR_4 = FUNC_2("EDITOR");
 if (!VAR_4)
  VAR_4 = FUNC_2("VISUAL");
 if (!VAR_4)
  VAR_4 = VAR_0;


 if (VAR_3 > 0)
 {
  VAR_5 = FUNC_2("PSQL_EDITOR_LINENUMBER_ARG");




  if (!VAR_5)
  {
   FUNC_3("environment variable PSQL_EDITOR_LINENUMBER_ARG must be set to specify a line number");
   return 0;
  }
 }
 if (VAR_3 > 0)
  VAR_6 = FUNC_4("exec %s %s%d '%s'",
        VAR_4, VAR_5, VAR_3, VAR_2);
 else
  VAR_6 = FUNC_4("exec %s '%s'",
        VAR_4, VAR_2);
 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7 == -1)
  FUNC_3("could not start editor \"%s\"", VAR_4);
 else if (VAR_7 == 127)
  FUNC_3("could not start /bin/sh");
 FUNC_1(VAR_6);

 return VAR_7 == 0;
}
