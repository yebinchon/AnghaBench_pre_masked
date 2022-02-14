
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static inline void FUNC_1(char *VAR_0,
     uint16_t VAR_1, uint16_t VAR_2)
{
 FUNC_0("%-23s: 0x%04x     ", VAR_0, VAR_1);
 if (VAR_1 == VAR_2) {
  FUNC_0("(ok)\n");
 } else {
  FUNC_0("(expected: 0x%04x)\n", VAR_2);
 }
}
