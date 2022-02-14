
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const**) ;
 char const** VAR_0 ;

const char *FUNC_1(int VAR_1)
{
 if (VAR_1 >= 0 && VAR_1 < (int)FUNC_0(VAR_0))
  if (VAR_0[VAR_1])
   return VAR_0[VAR_1];
 return "<unknown>";
}
