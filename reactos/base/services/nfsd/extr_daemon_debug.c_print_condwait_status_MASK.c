
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;




 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

void FUNC_2(int VAR_2, int VAR_3)
{
    if (VAR_2 > VAR_1) return;
    switch(VAR_3) {
        case 131: FUNC_1(VAR_0, "WAIT_ABANDONED\n"); break;
        case 129: FUNC_1(VAR_0, "WAIT_OBJECT_0\n"); break;
        case 128: FUNC_1(VAR_0, "WAIT_TIMEOUT\n"); break;
        case 130: FUNC_1(VAR_0, "WAIT_FAILED %d\n", FUNC_0());
        default: FUNC_1(VAR_0, "unknown status =%d\n", VAR_3);
    }
}
