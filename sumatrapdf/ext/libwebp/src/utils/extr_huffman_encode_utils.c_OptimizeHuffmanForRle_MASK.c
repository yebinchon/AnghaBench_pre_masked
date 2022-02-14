
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(int VAR_0, uint8_t* const VAR_1,
                                  uint32_t* const VAR_2) {

  int VAR_3;
  for (; VAR_0 >= 0; --VAR_0) {
    if (VAR_0 == 0) {
      return;
    }
    if (VAR_2[VAR_0 - 1] != 0) {

      break;
    }
  }


  {



    uint32_t VAR_4 = VAR_2[0];
    int VAR_5 = 0;
    for (VAR_3 = 0; VAR_3 < VAR_0 + 1; ++VAR_3) {
      if (VAR_3 == VAR_0 || VAR_2[VAR_3] != VAR_4) {
        if ((VAR_4 == 0 && VAR_5 >= 5) ||
            (VAR_4 != 0 && VAR_5 >= 7)) {
          int VAR_6;
          for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
            VAR_1[VAR_3 - VAR_6 - 1] = 1;
          }
        }
        VAR_5 = 1;
        if (VAR_3 != VAR_0) {
          VAR_4 = VAR_2[VAR_3];
        }
      } else {
        ++VAR_5;
      }
    }
  }

  {
    uint32_t VAR_7 = 0;
    uint32_t VAR_8 = VAR_2[0];
    uint32_t VAR_9 = 0;
    for (VAR_3 = 0; VAR_3 < VAR_0 + 1; ++VAR_3) {
      if (VAR_3 == VAR_0 || VAR_1[VAR_3] ||
          (VAR_3 != 0 && VAR_1[VAR_3 - 1]) ||
          !FUNC_0(VAR_2[VAR_3], VAR_8)) {
        if (VAR_7 >= 4 || (VAR_7 >= 3 && VAR_9 == 0)) {
          uint32_t VAR_10;

          uint32_t VAR_11 = (VAR_9 + VAR_7 / 2) / VAR_7;
          if (VAR_11 < 1) {
            VAR_11 = 1;
          }
          if (VAR_9 == 0) {

            VAR_11 = 0;
          }
          for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10) {


            VAR_2[VAR_3 - VAR_10 - 1] = VAR_11;
          }
        }
        VAR_7 = 0;
        VAR_9 = 0;
        if (VAR_3 < VAR_0 - 3) {


          VAR_8 = (VAR_2[VAR_3] + VAR_2[VAR_3 + 1] +
                   VAR_2[VAR_3 + 2] + VAR_2[VAR_3 + 3] + 2) / 4;
        } else if (VAR_3 < VAR_0) {
          VAR_8 = VAR_2[VAR_3];
        } else {
          VAR_8 = 0;
        }
      }
      ++VAR_7;
      if (VAR_3 != VAR_0) {
        VAR_9 += VAR_2[VAR_3];
        if (VAR_7 >= 4) {
          VAR_8 = (VAR_9 + VAR_7 / 2) / VAR_7;
        }
      }
    }
  }
}
