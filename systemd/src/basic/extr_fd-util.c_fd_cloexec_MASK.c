
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int ,int) ;

int FUNC_2(int VAR_4, bool VAR_5) {
        int VAR_6, VAR_7;

        FUNC_0(VAR_4 >= 0);

        VAR_6 = FUNC_1(VAR_4, VAR_1, 0);
        if (VAR_6 < 0)
                return -VAR_3;

        if (VAR_5)
                VAR_7 = VAR_6 | VAR_0;
        else
                VAR_7 = VAR_6 & ~VAR_0;

        if (VAR_7 == VAR_6)
                return 0;

        if (FUNC_1(VAR_4, VAR_2, VAR_7) < 0)
                return -VAR_3;

        return 0;
}
