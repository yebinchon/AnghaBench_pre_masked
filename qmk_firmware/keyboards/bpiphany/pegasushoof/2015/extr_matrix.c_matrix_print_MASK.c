
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
  FUNC_4("\nr/c 0123456789ABCDEF\n");
  for (uint8_t VAR_0 = 0; VAR_0 < FUNC_1(); VAR_0++) {
    FUNC_3(VAR_0); FUNC_4(": ");
    FUNC_2(FUNC_0(VAR_0));
    FUNC_4("\n");
  }
}
