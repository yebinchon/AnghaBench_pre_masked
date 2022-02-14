
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;

void
FUNC_1(unsigned long VAR_1, unsigned long *VAR_2,
                 unsigned long *VAR_3)
{
  unsigned long VAR_4;




  VAR_4 = FUNC_0(VAR_1 + VAR_0);

  *VAR_2 = (VAR_4 & 0xFF);

  *VAR_3 = ((VAR_4 >> 8) & 0xFF);

}
