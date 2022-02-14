
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_1(uint32_t VAR_3, uint32_t VAR_4, uint8_t VAR_5) {
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
    if (VAR_5 & 0x80) {
      FUNC_0(VAR_3, VAR_1);
    } else {
      FUNC_0(VAR_3, VAR_2);
    }
    FUNC_0(VAR_4, VAR_1);
    VAR_5 <<= 1;
    VAR_0;
    VAR_0;
    FUNC_0(VAR_4, VAR_2);
    VAR_0;
    VAR_0;
  }
}
