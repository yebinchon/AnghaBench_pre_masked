
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (scalar_t__*,int,int) ;

__attribute__((used)) static void FUNC_1(uint8_t* VAR_0, const uint8_t* VAR_1) {
  uint32_t VAR_2 = 4;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) VAR_2 += VAR_1[VAR_3] + VAR_1[-5 + VAR_3];
  FUNC_0(VAR_0, VAR_2 >> 3, 4);
}
