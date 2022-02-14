
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned long) ;

void FUNC_2(unsigned long VAR_3)
{
  unsigned long VAR_4;




  VAR_4 = FUNC_0(VAR_0+VAR_2);




  VAR_4 &= ~(VAR_3 & 0x1);




  FUNC_1(VAR_0+VAR_2,VAR_4);




  VAR_4 = FUNC_0(VAR_0+VAR_1);




  VAR_4 &= ~((VAR_3>>16)&0xFF);




  FUNC_1(VAR_0+VAR_1,VAR_4);
}
