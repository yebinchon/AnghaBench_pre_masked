
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
  if (VAR_0 + 32 >= VAR_2 &&
      VAR_1 + 32 >= VAR_3 &&
      VAR_0 <= VAR_2 + VAR_4 &&
      VAR_1 <= VAR_3 + VAR_5)
    return 1;
  else
    return 0;
}
