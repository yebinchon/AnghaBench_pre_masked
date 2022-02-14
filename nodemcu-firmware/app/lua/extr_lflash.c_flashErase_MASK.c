
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(uint32_t VAR_2, uint32_t VAR_3){
  int VAR_4;
  if (VAR_2 == -1) VAR_2 = VAR_0 - 1;
  if (VAR_3 == -1) VAR_3 = VAR_0 - 1;
  FUNC_0("flashErase(%04x,%04x)\n", VAR_1+VAR_2, VAR_1+VAR_3);
  for (VAR_4 = VAR_2; VAR_4<=VAR_3; VAR_4++)
    FUNC_1( VAR_1 + VAR_4 );
}
