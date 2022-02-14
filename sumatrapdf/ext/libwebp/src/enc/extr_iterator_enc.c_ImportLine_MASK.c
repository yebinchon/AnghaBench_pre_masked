
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(const uint8_t* VAR_0, int VAR_1,
                       uint8_t* VAR_2, int VAR_3, int VAR_4) {
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5, VAR_0 += VAR_1) VAR_2[VAR_5] = *VAR_0;
  for (; VAR_5 < VAR_4; ++VAR_5) VAR_2[VAR_5] = VAR_2[VAR_3 - 1];
}
