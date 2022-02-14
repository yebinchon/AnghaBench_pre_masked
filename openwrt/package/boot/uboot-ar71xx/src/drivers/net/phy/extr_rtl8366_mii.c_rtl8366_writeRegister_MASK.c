
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(uint32_t VAR_0, uint16_t VAR_1)
{
    FUNC_0("rtl8366: write register=%#04x, data=%#04x\n", VAR_0, VAR_1);

    if (FUNC_2(VAR_0, VAR_1)) {
        FUNC_1("rtl8366 smi write failed!\n");
        return -1;
    }

    return 0;
}
