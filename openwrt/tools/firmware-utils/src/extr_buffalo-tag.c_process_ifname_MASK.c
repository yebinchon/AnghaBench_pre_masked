
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**) ;
 int FUNC_1 (char*) ;
 char** VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(char *VAR_2)
{
 if (VAR_1 >= FUNC_0(VAR_0)) {
  FUNC_1("too many input files specified");
  return -1;
 }

 VAR_0[VAR_1++] = VAR_2;
 return 0;
}
