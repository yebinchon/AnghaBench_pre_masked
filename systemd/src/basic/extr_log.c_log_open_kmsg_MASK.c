
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(void) {

        if (VAR_4 >= 0)
                return 0;

        VAR_4 = FUNC_1("/dev/kmsg", VAR_2|VAR_1|VAR_0);
        if (VAR_4 < 0)
                return -VAR_3;

        VAR_4 = FUNC_0(VAR_4);
        return 0;
}
