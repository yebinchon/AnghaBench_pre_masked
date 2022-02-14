
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const,int const,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const uint8_t* const VAR_0,
                            const uint8_t* const VAR_1,
                            int VAR_2, int VAR_3, int VAR_4) {
  int VAR_5, VAR_6;
  FUNC_1(VAR_4 > 0);
  for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
    for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
      const int VAR_7 = VAR_2 * 4;
      const size_t VAR_8 = VAR_6 * VAR_7 + VAR_5;
      if (!FUNC_0(VAR_0[VAR_8], VAR_1[VAR_8], VAR_4)) {
        return 0;
      }
    }
  }
  return 1;
}
