
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,int const*,int) ;

void FUNC_1(const uint8_t* VAR_0, int VAR_1,
                        uint8_t* VAR_2, int VAR_3, int VAR_4, int VAR_5) {
  while (VAR_5-- > 0) {
    FUNC_0(VAR_2, VAR_0, VAR_4 * sizeof(*VAR_2));
    VAR_0 += VAR_1;
    VAR_2 += VAR_3;
  }
}
