
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(uint8_t* VAR_1) {
  int VAR_2 = 16;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < 16; ++VAR_3) {
    VAR_2 += VAR_1[-1 + VAR_3 * VAR_0] + VAR_1[VAR_3 - VAR_0];
  }
  FUNC_0(VAR_2 >> 5, VAR_1);
}
