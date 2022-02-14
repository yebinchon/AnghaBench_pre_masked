
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*,int,int,int) ;

__attribute__((used)) static uint32_t FUNC_2(const uint8_t* VAR_4, int VAR_5, int VAR_6,
                             int VAR_7, int VAR_8) {
  uint32_t VAR_9 = 0U;
  if (VAR_7 == VAR_2) {

    int VAR_10 = (VAR_8 > 3);
    const int VAR_11 = 16;
    const int VAR_12 = 192;
    const int VAR_13 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_5);

    VAR_7 = (VAR_13 <= VAR_11)
        ? VAR_3
        : FUNC_1(VAR_4, VAR_5, VAR_6, VAR_5);
    VAR_9 |= 1 << VAR_7;


    if (VAR_10 || VAR_13 > VAR_12) {
      VAR_9 |= VAR_1;
    }
  } else if (VAR_7 == VAR_3) {
    VAR_9 = VAR_1;
  } else {
    VAR_9 = VAR_0;
  }
  return VAR_9;
}
