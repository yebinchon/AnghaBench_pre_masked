
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 if (VAR_1 != VAR_2)
  FUNC_1("cap: %u, len: %u\n", VAR_1, VAR_2);
 else
  FUNC_1("len: %u\n", VAR_2);

 FUNC_0(VAR_0, VAR_1);
}
