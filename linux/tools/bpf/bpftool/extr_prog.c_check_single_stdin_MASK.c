
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, char *VAR_1)
{
 if (VAR_0 && VAR_1 &&
     !FUNC_1(VAR_0, "-") && !FUNC_1(VAR_1, "-")) {
  FUNC_0("cannot use standard input for both data_in and ctx_in");
  return -1;
 }

 return 0;
}
