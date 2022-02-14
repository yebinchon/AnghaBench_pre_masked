
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,int,int ) ;
 int FUNC_3 () ;

void FUNC_4(bool VAR_2[8]) {
  FUNC_0();
  FUNC_2(VAR_2[1] ? 255 : 0, VAR_2[2] ? 255 : 0, VAR_2[0] ? 255 : 0, VAR_0);
  FUNC_2(VAR_2[4] ? 255 : 0, VAR_2[3] ? 255 : 0, VAR_2[5] ? 255 : 0, VAR_0);
  VAR_2[6] ? (VAR_1 &= ~0b10000000) : (VAR_1 |= 0b10000000);
  FUNC_1();
  FUNC_3();
}
