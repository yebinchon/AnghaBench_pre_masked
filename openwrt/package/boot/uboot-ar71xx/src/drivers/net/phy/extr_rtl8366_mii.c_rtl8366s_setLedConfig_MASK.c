
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
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 scalar_t__ FUNC_3 (int ,int) ;

int FUNC_4(uint32_t VAR_3, uint8_t VAR_4)
{
    uint16_t VAR_5;

 if(VAR_3 >= VAR_1) {
  FUNC_0("rtl8366s_setLedConfig: invalid led group\n");
  return -1;
 }

    if(VAR_4 > VAR_0) {
  FUNC_0("rtl8366s_setLedConfig: invalid led config\n");
  return -1;
 }

 if (FUNC_2(VAR_2, &VAR_5)) {
        FUNC_1("rtl8366s_setLedConfig: failed to get led register!\n");
        return -1;
 }

 VAR_5 &= ~(0xF << (VAR_3 * 4));
 VAR_5 |= VAR_4 << (VAR_3 * 4);

 if (FUNC_3(VAR_2, VAR_5)) {
        FUNC_1("rtl8366s_setLedConfig: failed to set led register!\n");
        return -1;
 }

 return 0;
}
