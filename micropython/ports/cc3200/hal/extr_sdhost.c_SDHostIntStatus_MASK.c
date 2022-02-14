
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;

unsigned long
FUNC_1(unsigned long VAR_3)
{
  unsigned long VAR_4;




  VAR_4 = FUNC_0(VAR_0 + VAR_1);
  VAR_4 = (VAR_4 << 30);




  VAR_4 |= (FUNC_0(VAR_3 + VAR_2) & 0x3FFFFFFF);

  return(VAR_4);
}
