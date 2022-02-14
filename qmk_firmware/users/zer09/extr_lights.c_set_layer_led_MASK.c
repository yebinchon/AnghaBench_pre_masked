
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t VAR_0 ;
 int FUNC_0 (size_t const,size_t const,size_t const,size_t const,size_t) ;
 size_t** VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 () ;
 size_t VAR_3 ;

bool FUNC_2(uint8_t VAR_4) {
  static uint8_t VAR_5 = 0;
  static uint8_t VAR_6 = 0;

  if (VAR_5 == VAR_4 && VAR_6 == VAR_3 && !FUNC_1()) {
    return 0;
  }

  VAR_5 = VAR_4;
  VAR_6 = VAR_3;
  const uint8_t VAR_7 = VAR_1[VAR_4][0];
  const uint8_t VAR_8 = VAR_1[VAR_4][1];
  const uint8_t VAR_9 = VAR_1[VAR_4][2];
  const uint8_t VAR_10 = (VAR_5 == VAR_2 && VAR_6 < 1) ? 1 : VAR_6;

  for (uint8_t VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
    FUNC_0(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
  }

  return 1;
}
