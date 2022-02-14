
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long long FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;

unsigned long long FUNC_2(void)
{
  unsigned long long VAR_4;




  FUNC_1(VAR_0+VAR_3, 0x1);




  VAR_4 = FUNC_0(VAR_0 + VAR_2);
  VAR_4 = VAR_4 << 32;
  VAR_4 |= FUNC_0(VAR_0+VAR_1);

  return VAR_4;
}
