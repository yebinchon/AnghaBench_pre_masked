
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(DWORD *VAR_1) {
    unsigned int VAR_2 = 0, VAR_3 = 0;
    do {
        FUNC_0("0x%08x ", VAR_1[VAR_2]);
        VAR_3++;
        VAR_2++;
        if(VAR_3 == 6) FUNC_0("\n");
    } while(VAR_1[VAR_2 - 1] != VAR_0);
    if(VAR_3 != 6) FUNC_0("\n");
}
