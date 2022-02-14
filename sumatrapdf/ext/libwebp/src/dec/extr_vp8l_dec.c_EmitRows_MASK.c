
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int WEBP_CSP_MODE ;


 int FUNC_0 (int const*,int,int ,int *) ;

__attribute__((used)) static int FUNC_1(WEBP_CSP_MODE VAR_0,
                    const uint8_t* VAR_1, int VAR_2,
                    int VAR_3, int VAR_4,
                    uint8_t* const VAR_5, int VAR_6) {
  int VAR_7 = VAR_4;
  uint8_t* VAR_8 = VAR_5;
  while (VAR_7-- > 0) {
    FUNC_0((const uint32_t*)VAR_1, VAR_3, VAR_0, VAR_8);
    VAR_1 += VAR_2;
    VAR_8 += VAR_6;
  }
  return VAR_4;
}
