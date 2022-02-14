
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;

void FUNC_4(void)
{
 FUNC_3("\nr/c 0123456789ABCDEF\n");
 for (uint8_t VAR_1 = 0; VAR_1 < VAR_0; VAR_1++) {
  FUNC_2(VAR_1); FUNC_3(": ");
  FUNC_1(FUNC_0(VAR_1));
  FUNC_3("\n");
 }
}
