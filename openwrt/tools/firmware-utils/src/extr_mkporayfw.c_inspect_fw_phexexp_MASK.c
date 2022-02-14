
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static inline void FUNC_1(char *VAR_0,
                                      uint32_t VAR_1, uint32_t VAR_2)
{
 FUNC_0("%-23s: 0x%08x ", VAR_0, VAR_1);

 if (VAR_1 == VAR_2) {
  FUNC_0("(ok)\n");
 } else {
  FUNC_0("(expected: 0x%08x)\n", VAR_2);
 }
}
