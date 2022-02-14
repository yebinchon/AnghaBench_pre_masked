
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

void FUNC_2(void)
{
 static uint8_t VAR_8 = 0;
 if ( VAR_8 ) {
  return;
 }
 VAR_8 = 1;


 VAR_5 = FUNC_0(VAR_7) |
    FUNC_0(VAR_1) | FUNC_0(VAR_0);

 uint8_t VAR_9 = VAR_4;
 FUNC_1();

 VAR_2 = (VAR_6 >> 8) & 0xff;
 VAR_3 = VAR_6 & 0xff;
 VAR_4 = VAR_9;
}
