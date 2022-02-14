
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int) ;

void FUNC_5(void) {
  if (FUNC_2() == VAR_5)
    return;

  VAR_5 = FUNC_2();

  if (FUNC_2() == 0) {
    uint8_t VAR_7 = 0x10 >> VAR_6;
    FUNC_4(VAR_7, VAR_7, VAR_7);
    return;
  }

  uint32_t VAR_8[4] = {0};
  uint8_t VAR_9 = 0;
  FUNC_4(0x00, 0x00, 0x00);

  if (FUNC_2() & FUNC_0(VAR_3))
    VAR_8[VAR_9++] = 0xFF0000;
  if (FUNC_2() & FUNC_0(VAR_1))
    VAR_8[VAR_9++] = 0x00FF00;
  if (FUNC_2() & FUNC_0(VAR_0))
    VAR_8[VAR_9++] = 0x0000FF;
  if (FUNC_2() & FUNC_0(VAR_2))
    VAR_8[VAR_9++] = 0xFFFF00;

  uint8_t VAR_10 = 0;
  for (int VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
    for (; VAR_10 < VAR_4*(VAR_11+1)/VAR_9; VAR_10++) {
      FUNC_1(VAR_8[VAR_11], VAR_10);
    }
  }
  FUNC_3();
}
