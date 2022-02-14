
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 char* VAR_0 ;
 void* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

void
FUNC_6(void)
{
 if (!VAR_0)
 {
  VAR_0 = FUNC_1(VAR_1);
  if (!VAR_0)
  {
   FUNC_2("could not find suitable text search configuration for locale \"%s\"",
      VAR_1);
   VAR_0 = "simple";
  }
 }
 else
 {
  const char *VAR_2 = FUNC_1(VAR_1);

  if (VAR_2 == ((void*)0))
  {
   FUNC_3("suitable text search configuration for locale \"%s\" is unknown",
         VAR_1);
  }
  else if (FUNC_5(VAR_2, VAR_0) != 0)
  {
   FUNC_3("specified text search configuration \"%s\" might not match locale \"%s\"",
         VAR_0, VAR_1);
  }
 }

 FUNC_4(FUNC_0("The default text search configuration will be set to \"%s\".\n"),
     VAR_0);

}
