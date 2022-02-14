
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9, int *VAR_10)
{
 int VAR_11 = VAR_5 ? VAR_6 > VAR_4 : VAR_6 < VAR_4;
 int VAR_12 = VAR_5 ? VAR_8 > VAR_4 : VAR_8 < VAR_4;

 if (VAR_11 + VAR_12 == 0)
  return VAR_1;

 if (VAR_11 + VAR_12 == 2)
  return VAR_3;

 if (VAR_12)
 {
  *VAR_10 = VAR_7 + (int)(((float)(VAR_9 - VAR_7)) * (VAR_4 - VAR_6) / (VAR_8 - VAR_6));
  return VAR_2;
 }

 else
 {
  *VAR_10 = VAR_9 + (int)(((float)(VAR_7 - VAR_9)) * (VAR_4 - VAR_8) / (VAR_6 - VAR_8));
  return VAR_0;
 }
}
