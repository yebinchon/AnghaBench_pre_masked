
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

unsigned long FUNC_1(unsigned long VAR_4)
{
  unsigned long VAR_5;




  VAR_5 =
    FUNC_0(VAR_0 + VAR_1) << 20;

  VAR_5 &= 0xC0000000;




  VAR_5 |= FUNC_0(VAR_4 + VAR_3);




  VAR_5 |= FUNC_0(VAR_4 + VAR_2) << 16;




  return VAR_5;
}
