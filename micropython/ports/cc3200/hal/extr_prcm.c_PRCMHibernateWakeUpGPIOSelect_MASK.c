
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned long) ;

void FUNC_2(unsigned long VAR_2, unsigned long VAR_3)
{
  unsigned char VAR_4;
  unsigned long VAR_5;




  VAR_2 >>= 16;




  for(VAR_4=0; VAR_4 < 7; VAR_4++)
  {
    if(VAR_2 & (1<<VAR_4))
    {
      VAR_5 = FUNC_0(VAR_0+VAR_1);
      VAR_5 |= (VAR_3 << (VAR_4*2));
      FUNC_1(VAR_0+VAR_1, VAR_5);
    }
  }
}
