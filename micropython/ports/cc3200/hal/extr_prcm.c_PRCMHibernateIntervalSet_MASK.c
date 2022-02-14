
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long long FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned long) ;

void FUNC_2(unsigned long long VAR_6)
{
  unsigned long long VAR_7;




  FUNC_1(VAR_0+VAR_3 ,0x1);




  VAR_7 = FUNC_0(VAR_0 + VAR_2);
  VAR_7 = VAR_7 << 32;
  VAR_7 |= FUNC_0(VAR_0+VAR_1);




  VAR_7 = VAR_7 + VAR_6;




  FUNC_1(VAR_0+VAR_4,
                                            (unsigned long)(VAR_7));
  FUNC_1(VAR_0+VAR_5,
                                           (unsigned long)(VAR_7>>32));
}
