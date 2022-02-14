
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RCore ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const**) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const char *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;

 if (*VAR_1 == '!') {
  return FUNC_0 (VAR_2, VAR_1);
 }
 if (*VAR_1 == '?') {
  const char *VAR_3[] = {
  "Usage #!interpreter [<args>] [<file] [<<eof]","","",
  " #", "", "comment - do nothing",
  " #!","","list all available interpreters",
  " #!python","","run python commandline",
  " #!python"," foo.py","run foo.py python script (same as '. foo.py')",

  " #!python"," arg0 a1 <<q","set arg0 and arg1 and read until 'q'",
  ((void*)0)};
  FUNC_1 (VAR_2, VAR_3);
  return 0;
 }


 return 0;
}
