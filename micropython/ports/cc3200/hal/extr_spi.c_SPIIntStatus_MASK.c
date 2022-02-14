
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tBoolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;

unsigned long
FUNC_2(unsigned long VAR_7, tBoolean VAR_8)
{
  unsigned long VAR_9;
  unsigned long VAR_10;
  unsigned long VAR_11;




  VAR_10 = FUNC_0(VAR_7 + VAR_4) & 0x0003000F;

  if(VAR_8)
  {
     VAR_10 &= FUNC_0(VAR_7 + VAR_3);
  }




  VAR_11 = FUNC_1(VAR_7);




  if(VAR_8)
  {
    VAR_9 = FUNC_0(VAR_0 + VAR_1);
  }
  else
  {
    VAR_9 = FUNC_0(VAR_0 + VAR_2);
  }




  if(VAR_9 & VAR_11)
  {
     VAR_10 |= VAR_6;
  }




  if(VAR_9 & (VAR_11 >> 1))
  {
     VAR_10 |= VAR_5;
  }




  return(VAR_10);
}
