
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gs_address_mode { ____Placeholder_gs_address_mode } gs_address_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

extern enum gs_address_mode FUNC_1(const char *VAR_5)
{
 if (FUNC_0(VAR_5, "Wrap") == 0 || FUNC_0(VAR_5, "Repeat") == 0)
  return VAR_4;
 else if (FUNC_0(VAR_5, "Clamp") == 0 || FUNC_0(VAR_5, "None") == 0)
  return VAR_1;
 else if (FUNC_0(VAR_5, "Mirror") == 0)
  return VAR_2;
 else if (FUNC_0(VAR_5, "Border") == 0)
  return VAR_0;
 else if (FUNC_0(VAR_5, "MirrorOnce") == 0)
  return VAR_3;

 return VAR_1;
}
