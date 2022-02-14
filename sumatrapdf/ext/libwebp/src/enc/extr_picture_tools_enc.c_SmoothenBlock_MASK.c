
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static int FUNC_0(const uint8_t* VAR_0, int VAR_1, uint8_t* VAR_2,
                         int VAR_3, int VAR_4, int VAR_5) {
  int VAR_6 = 0, VAR_7 = 0;
  int VAR_8, VAR_9;
  const uint8_t* VAR_10 = VAR_0;
  uint8_t* VAR_11 = VAR_2;
  for (VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9) {
    for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
      if (VAR_10[VAR_8] != 0) {
        ++VAR_7;
        VAR_6 += VAR_11[VAR_8];
      }
    }
    VAR_10 += VAR_1;
    VAR_11 += VAR_3;
  }
  if (VAR_7 > 0 && VAR_7 < VAR_4 * VAR_5) {
    const uint8_t VAR_12 = (uint8_t)(VAR_6 / VAR_7);
    VAR_10 = VAR_0;
    VAR_11 = VAR_2;
    for (VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9) {
      for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
        if (VAR_10[VAR_8] == 0) VAR_11[VAR_8] = VAR_12;
      }
      VAR_10 += VAR_1;
      VAR_11 += VAR_3;
    }
  }
  return (VAR_7 == 0);
}
