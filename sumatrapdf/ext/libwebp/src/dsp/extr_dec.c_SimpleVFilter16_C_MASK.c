
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int,int const) ;

__attribute__((used)) static void FUNC_2(uint8_t* VAR_0, int VAR_1, int VAR_2) {
  int VAR_3;
  const int VAR_4 = 2 * VAR_2 + 1;
  for (VAR_3 = 0; VAR_3 < 16; ++VAR_3) {
    if (FUNC_1(VAR_0 + VAR_3, VAR_1, VAR_4)) {
      FUNC_0(VAR_0 + VAR_3, VAR_1);
    }
  }
}
