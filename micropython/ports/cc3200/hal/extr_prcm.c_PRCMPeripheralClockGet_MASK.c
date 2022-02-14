
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;

unsigned long FUNC_1(unsigned long VAR_10)
{
  unsigned long VAR_11;
  unsigned long VAR_12;
  unsigned long VAR_13;




  if(((VAR_10 == VAR_7) | (VAR_10 == VAR_5)
            | (VAR_10 == VAR_4)))
  {
    return VAR_9;
  }
  else if(VAR_10 == VAR_3)
  {
    VAR_12 = ((FUNC_0(VAR_2 + VAR_0) >> 8) & 0x07);
    VAR_13 = (FUNC_0(VAR_2 + VAR_0)& 0xFF);
  }
  else if(VAR_10 == VAR_6)
  {
    VAR_12 = ((FUNC_0(VAR_2 + VAR_1) >> 8) & 0x07);
    VAR_13 = (FUNC_0(VAR_2 + VAR_1)& 0xFF);
  }
  else
  {
    return VAR_8;
  }




  VAR_11 = (240000000/((VAR_12 + 1) + (VAR_13 + 1)));




  return VAR_11;
}
