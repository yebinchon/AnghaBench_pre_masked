
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int*) ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (int*,int*,int) ;

int FUNC_4(void) {
    uint8_t VAR_1[6];
    uint8_t VAR_2[6];

 FUNC_0("Testing mac addresses\n");

    FUNC_3(VAR_1, (uint8_t *) VAR_0, 6);

    if (!FUNC_1("ethaddr", VAR_2)) {
        FUNC_0("Setting eth0 mac addr to %pM\n", VAR_1);
        FUNC_2("ethaddr", VAR_1);
    }

    if (!FUNC_1("eth1addr", VAR_2)) {
  VAR_1[5] += 1;
        FUNC_0("Setting eth1 mac addr to %pM\n", VAR_1);
        FUNC_2("eth1addr", VAR_1);
    }

    return 0;
}
