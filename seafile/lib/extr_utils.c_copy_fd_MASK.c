
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int buffer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char*,int) ;
 scalar_t__ FUNC_2 (int,char*,scalar_t__) ;

int FUNC_3 (int VAR_0, int VAR_1)
{
    while (1) {
        char VAR_2[8192];
        ssize_t VAR_3 = FUNC_1 (VAR_0, VAR_2, sizeof(VAR_2));
        if (!VAR_3)
            break;
        if (VAR_3 < 0) {
            FUNC_0 (VAR_0);
            return -1;
        }
        if (FUNC_2 (VAR_1, VAR_2, VAR_3) < 0) {
            FUNC_0 (VAR_1);
            return -1;
        }
    }
    FUNC_0(VAR_0);
    return 0;
}
