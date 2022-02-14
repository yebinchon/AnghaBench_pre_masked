
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;
typedef int NumericDigit ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int32
FUNC_0(int32 VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (VAR_3 < (int32) (VAR_2))
  return -1;


 VAR_4 = ((VAR_3 - VAR_2) >> 16) & 0xffff;
 VAR_5 = (VAR_4 + 2 * (VAR_0 - 1)) / VAR_0;
 return VAR_1 + (VAR_5 * sizeof(NumericDigit));
}
