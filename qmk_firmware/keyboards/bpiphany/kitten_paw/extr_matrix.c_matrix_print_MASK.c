
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__,int ) ;

void FUNC_4(void) {
  FUNC_2("\nr/c 0123456789ABCDEF\n");
  for (uint8_t VAR_1 = 0; VAR_1 < VAR_0; VAR_1++) {
    FUNC_3("%02X: %032lb\n", VAR_1, FUNC_0(FUNC_1(VAR_1)));
  }
}
