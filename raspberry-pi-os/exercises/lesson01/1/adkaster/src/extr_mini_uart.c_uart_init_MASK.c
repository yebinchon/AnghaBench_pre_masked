
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int miniuart_baud_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

void FUNC_3 ( miniuart_baud_t VAR_9 )
{
 unsigned int VAR_10;
 uint32_t VAR_11 = 31250000/VAR_9 - 1;
 VAR_11 &= 0x0000FFFF;

 VAR_10 = FUNC_1(VAR_6);
 VAR_10 &= ~(7<<12);
 VAR_10 |= 2<<12;
 VAR_10 &= ~(7<<15);
 VAR_10 |= 2<<15;
 FUNC_2(VAR_6,VAR_10);

 FUNC_2(VAR_7,0);
 FUNC_0(150);
 FUNC_2(VAR_8,(1<<14)|(1<<15));
 FUNC_0(150);
 FUNC_2(VAR_8,0);

 FUNC_2(VAR_0,1);
 FUNC_2(VAR_2,0);
 FUNC_2(VAR_3,0);
 FUNC_2(VAR_4,3);
 FUNC_2(VAR_5,0);
 FUNC_2(VAR_1,VAR_11);

 FUNC_2(VAR_2,3);
}
