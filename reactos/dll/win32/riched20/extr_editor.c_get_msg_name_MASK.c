
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char const** VAR_4 ;
 char const** VAR_5 ;

__attribute__((used)) static const char *
FUNC_0(UINT VAR_6)
{
  if (VAR_6 >= VAR_3 && VAR_6 <= VAR_1)
    return VAR_4[VAR_6 - VAR_3];
  if (VAR_6 >= VAR_0 && VAR_6 <= VAR_2)
    return VAR_5[VAR_6 - VAR_0];
  return "";
}
