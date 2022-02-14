
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,char*,char,char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* VAR_0 ;

__attribute__((used)) static bool FUNC_3(void)
{
 if (VAR_0[0] == '9' && VAR_0[1] == '7')
  return 0;


 if (FUNC_0(!FUNC_2(VAR_0) && !FUNC_1(VAR_0),
   "Unexpected user alpha2: %c%c\n",
   VAR_0[0], VAR_0[1]))
  return 0;

 return 1;
}
