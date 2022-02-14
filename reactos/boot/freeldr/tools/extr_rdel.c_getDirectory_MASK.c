
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char const*,int) ;
 char const* FUNC_2 (char const*,char) ;

void
FUNC_3 (const char *VAR_0, char * VAR_1)
{
  int VAR_2;

  if (FUNC_2 (VAR_0, '/') != 0)
  {
    VAR_2 = FUNC_2 (VAR_0, '/') - VAR_0;
    FUNC_1 (VAR_1, VAR_0, VAR_2);
    VAR_1 [VAR_2] = '\0';
  }
  else
  {
    FUNC_0 (VAR_1, ".");
  }
}
