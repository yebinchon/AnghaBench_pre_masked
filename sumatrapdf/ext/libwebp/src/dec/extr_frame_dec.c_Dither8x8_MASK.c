
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int VP8Random ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int * const,scalar_t__,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(VP8Random* const VAR_1, uint8_t* VAR_2, int VAR_3, int VAR_4) {
  uint8_t VAR_5[64];
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < 8 * 8; ++VAR_6) {
    VAR_5[VAR_6] = FUNC_1(VAR_1, VAR_0 + 1, VAR_4);
  }
  FUNC_0(VAR_5, VAR_2, VAR_3);
}
