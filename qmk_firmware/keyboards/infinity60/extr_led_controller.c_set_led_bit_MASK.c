
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int*) ;
 int FUNC_2 (int,int*,int) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4 (uint8_t VAR_4, uint8_t *VAR_5, uint8_t VAR_6, uint8_t VAR_7) {



  uint8_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;


  if (VAR_6 < 0 || VAR_6 > 87 || VAR_6 % 10 > 8) {
    return;
  }

  VAR_12 = VAR_7>>2;
  VAR_7 &= ~(1<<2);


  VAR_8 = ((VAR_6 / 10) % 10 - 1 ) * 0x02;
  VAR_8 += VAR_12 == 1 ? 0x12 : 0x00;

  FUNC_3(VAR_0, VAR_1, VAR_3);
  FUNC_0(5);
  FUNC_1(VAR_4, VAR_8, &VAR_11);
  FUNC_3(VAR_0, VAR_1, VAR_2);

  VAR_9 = 1<<(VAR_6 % 10 - 1);
  VAR_10 = VAR_11;

  switch(VAR_7) {
    case 0:
      VAR_10 &= ~VAR_9;
      break;
    case 1:
      VAR_10 |= VAR_9;
      break;
    case 2:
      VAR_10 ^= VAR_9;
      break;
  }


  VAR_5[0] = VAR_8;
  VAR_5[1] = VAR_10;
  FUNC_2 (VAR_4, VAR_5, 0x02);
}
