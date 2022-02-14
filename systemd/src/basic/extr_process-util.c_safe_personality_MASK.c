
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long) ;

int FUNC_1(unsigned long VAR_1) {
        int VAR_2;
        VAR_0 = 0;
        VAR_2 = FUNC_0(VAR_1);
        if (VAR_2 < 0) {
                if (VAR_0 != 0)
                        return -VAR_0;

                VAR_0 = -VAR_2;
        }

        return VAR_2;
}
