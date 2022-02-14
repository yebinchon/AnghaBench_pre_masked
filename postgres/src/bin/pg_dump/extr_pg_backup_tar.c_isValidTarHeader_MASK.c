
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;

bool
FUNC_3(char *VAR_0)
{
 int VAR_1;
 int VAR_2 = FUNC_2(VAR_0);

 VAR_1 = FUNC_1(&VAR_0[148], 8);

 if (VAR_1 != VAR_2)
  return 0;


 if (FUNC_0(&VAR_0[257], "ustar\0", 6) == 0 &&
  FUNC_0(&VAR_0[263], "00", 2) == 0)
  return 1;

 if (FUNC_0(&VAR_0[257], "ustar  \0", 8) == 0)
  return 1;

 if (FUNC_0(&VAR_0[257], "ustar00\0", 8) == 0)
  return 1;

 return 0;
}
