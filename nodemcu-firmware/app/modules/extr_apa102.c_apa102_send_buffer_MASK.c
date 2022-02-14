
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static void FUNC_1(uint32_t VAR_0, uint32_t VAR_1, uint32_t *VAR_2, uint32_t VAR_3) {
  int VAR_4;


  FUNC_0(VAR_0, VAR_1, 0x00);
  FUNC_0(VAR_0, VAR_1, 0x00);
  FUNC_0(VAR_0, VAR_1, 0x00);
  FUNC_0(VAR_0, VAR_1, 0x00);


  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    uint8_t *VAR_5 = (uint8_t *) VAR_2++;




    VAR_5[0] |= 0xE0;
    FUNC_0(VAR_0, VAR_1, VAR_5[0]);
    FUNC_0(VAR_0, VAR_1, VAR_5[1]);
    FUNC_0(VAR_0, VAR_1, VAR_5[2]);
    FUNC_0(VAR_0, VAR_1, VAR_5[3]);
  }


  uint32_t VAR_6 = (VAR_3 + 1) / 2;
  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
    FUNC_0(VAR_0, VAR_1, 0xFF);
    FUNC_0(VAR_0, VAR_1, 0xFF);
    FUNC_0(VAR_0, VAR_1, 0xFF);
    FUNC_0(VAR_0, VAR_1, 0xFF);
  }
}
