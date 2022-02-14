
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static bool
FUNC_5(const char *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
 {
  char *VAR_3;
  const char *VAR_4;

  VAR_4 = FUNC_1("SHELL");




  if (VAR_4 == ((void*)0))
   VAR_4 = VAR_0;



  VAR_3 = FUNC_3("exec %s", VAR_4);



  VAR_2 = FUNC_4(VAR_3);
  FUNC_0(VAR_3);
 }
 else
  VAR_2 = FUNC_4(VAR_1);

 if (VAR_2 == 127 || VAR_2 == -1)
 {
  FUNC_2("\\!: failed");
  return 0;
 }
 return 1;
}
