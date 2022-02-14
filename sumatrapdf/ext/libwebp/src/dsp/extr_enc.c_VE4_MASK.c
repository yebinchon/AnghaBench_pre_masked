
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int const FUNC_0 (int const,int const,int const) ;
 int VAR_0 ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_2(uint8_t* VAR_1, const uint8_t* VAR_2) {
  const uint8_t VAR_3[4] = {
    FUNC_0(VAR_2[-1], VAR_2[0], VAR_2[1]),
    FUNC_0(VAR_2[ 0], VAR_2[1], VAR_2[2]),
    FUNC_0(VAR_2[ 1], VAR_2[2], VAR_2[3]),
    FUNC_0(VAR_2[ 2], VAR_2[3], VAR_2[4])
  };
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < 4; ++VAR_4) {
    FUNC_1(VAR_1 + VAR_4 * VAR_0, VAR_3, 4);
  }
}
