
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int,int,int ) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 () ;

int FUNC_7(void)
{
 uint16_t VAR_1;

    FUNC_0("rtl8366s_initialize: start setup\n");

    FUNC_6();

 FUNC_2(VAR_0, &VAR_1);
 FUNC_0("Realtek 8366SR switch ID %#04x\n", VAR_1);

 if (VAR_1 != 0x8366) {
  FUNC_1("rtl8366s_initialize: found unsupported switch\n");
  return -1;
 }

    if (FUNC_3()) {
        FUNC_1("rtl8366s_initialize: init chip failed\n");
        return -1;
    }

 if (FUNC_5(1, 1)) {
       FUNC_1("rtl8366s_initialize: set green ethernet failed\n");
       return -1;
   }


 if (FUNC_4(5, 1, 0)) {
  FUNC_1("rtl8366s_initialize: set CPU port failed\n");
  return -1;
 }

    return 0;
}
