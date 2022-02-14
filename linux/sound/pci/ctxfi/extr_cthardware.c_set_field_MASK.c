
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

void FUNC_1(unsigned int *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 if (FUNC_0(!VAR_1))
  return;

 for (VAR_3 = 0; !(VAR_1 & (1 << VAR_3)); )
  VAR_3++;

 *VAR_0 = (*VAR_0 & (~VAR_1)) | ((VAR_2 << VAR_3) & VAR_1);
}
