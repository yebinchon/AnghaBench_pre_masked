
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int*) ;

int FUNC_3(uint32_t VAR_2, uint8_t *VAR_3)
{
    uint16_t VAR_4;

 if(VAR_2 >= VAR_0) {
  FUNC_0("rtl8366s_getLedConfig: invalid led group\n");
  return -1;
 }

    if (FUNC_2(VAR_1, &VAR_4)) {
        FUNC_1("rtl8366s_getLedConfig: failed to get led register!\n");
        return -1;
 }

 if (VAR_3)
        *VAR_3 = (VAR_4 >> (VAR_2 * 4)) & 0xF;

    return 0;
}
