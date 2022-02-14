
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WSADATA ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

bool
FUNC_3(void) {
    WSADATA VAR_0;
    int VAR_1 = FUNC_2(FUNC_1(2, 2), &VAR_0) < 0;
    if (VAR_1 < 0) {
        FUNC_0("WSAStartup failed with error %d", VAR_1);
        return 0;
    }
    return 1;
}
