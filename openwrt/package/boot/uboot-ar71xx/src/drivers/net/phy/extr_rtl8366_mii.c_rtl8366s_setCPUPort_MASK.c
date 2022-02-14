
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int) ;

int FUNC_4(uint8_t VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;

 if(VAR_0 >= 6){
  FUNC_0("rtl8366s_setCPUPort: invalid port number\n");
  return -1;
 }


 for(VAR_3 = 0; VAR_3 < 6; VAR_3++)
 {
  if(FUNC_3(VAR_3, 0)){
   FUNC_0("rtl8366s_setCPUPort: rtl8366s_setCPUPortMask failed\n");
   return -1;
  }
 }

 if(FUNC_3(VAR_0, 1)){
  FUNC_0("rtl8366s_setCPUPort: rtl8366s_setCPUPortMask failed\n");
  return -1;
 }

 if(FUNC_1(VAR_1)){
  FUNC_0("rtl8366s_setCPUPort: rtl8366s_setCPUDisableInsTag fail\n");
  return -1;
 }

 if(FUNC_2(VAR_2)){
  FUNC_0("rtl8366s_setCPUPort: rtl8366s_setCPUDropUnda fail\n");
  return -1;
 }

 return 0;
}
