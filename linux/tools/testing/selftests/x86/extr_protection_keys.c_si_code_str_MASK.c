
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static char *FUNC_0(int VAR_4)
{
 if (VAR_4 == VAR_2)
  return "SEGV_MAPERR";
 if (VAR_4 == VAR_0)
  return "SEGV_ACCERR";
 if (VAR_4 == VAR_1)
  return "SEGV_BNDERR";
 if (VAR_4 == VAR_3)
  return "SEGV_PKUERR";
 return "UNKNOWN";
}
