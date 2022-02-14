
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int const*,int) ;
 scalar_t__ FUNC_1 (int const*,int) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(const uint8_t* VAR_0, int VAR_1, int VAR_2,
                          int VAR_3, int VAR_4) {
  if (VAR_0 == ((void*)0)) return 0;
  FUNC_2();
  if (VAR_3 == 1) {
    for (; VAR_2-- > 0; VAR_0 += VAR_4) {
      if (FUNC_1(VAR_0, VAR_1)) return 1;
    }
  } else {
    for (; VAR_2-- > 0; VAR_0 += VAR_4) {
      if (FUNC_0(VAR_0, VAR_1)) return 1;
    }
  }
  return 0;
}
