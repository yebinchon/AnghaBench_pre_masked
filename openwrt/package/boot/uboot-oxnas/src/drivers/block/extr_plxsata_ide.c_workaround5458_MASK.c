
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short FUNC_0 (int) ;
 int FUNC_1 (unsigned short,int) ;

void FUNC_2(void)
{
 unsigned VAR_7;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  unsigned short VAR_8 = FUNC_0(0x201d + (VAR_7 << 8));
  VAR_8 &= ~(VAR_4 | VAR_1);
  VAR_8 |= VAR_3 << VAR_5;
  VAR_8 |= VAR_0 << VAR_2;
  VAR_8 |= VAR_6;
  FUNC_1(VAR_8, 0x201d + (VAR_7 << 8));
 }
}
