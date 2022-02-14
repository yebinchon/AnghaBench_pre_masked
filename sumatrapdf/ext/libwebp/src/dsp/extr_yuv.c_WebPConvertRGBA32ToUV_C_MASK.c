
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int const,int const,int const,int) ;
 int FUNC_1 (int const,int const,int const,int) ;
 int VAR_0 ;

void FUNC_2(const uint16_t* VAR_1,
                             uint8_t* VAR_2, uint8_t* VAR_3, int VAR_4) {
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += 1, VAR_1 += 4) {
    const int VAR_6 = VAR_1[0], VAR_7 = VAR_1[1], VAR_8 = VAR_1[2];
    VAR_2[VAR_5] = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_0 << 2);
    VAR_3[VAR_5] = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_0 << 2);
  }
}
