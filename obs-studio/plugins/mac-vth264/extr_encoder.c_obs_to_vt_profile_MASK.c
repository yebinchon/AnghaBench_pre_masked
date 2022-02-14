
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CFStringRef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static CFStringRef FUNC_1(const char *VAR_3)
{
 if (FUNC_0(VAR_3, "baseline") == 0)
  return VAR_0;
 else if (FUNC_0(VAR_3, "main") == 0)
  return VAR_2;
 else if (FUNC_0(VAR_3, "high") == 0)
  return VAR_1;
 else
  return VAR_2;
}
