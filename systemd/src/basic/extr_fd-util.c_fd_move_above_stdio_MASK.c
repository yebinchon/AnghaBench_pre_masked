
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int) ;

int FUNC_3(int VAR_5) {
        int VAR_6, VAR_7;
        VAR_4;
        if (VAR_5 < 0 || VAR_5 > 2)
                return VAR_5;

        VAR_6 = FUNC_2(VAR_5, VAR_3, 0);
        if (VAR_6 < 0)
                return VAR_5;

        if (VAR_6 & VAR_0)
                VAR_7 = FUNC_2(VAR_5, VAR_2, 3);
        else
                VAR_7 = FUNC_2(VAR_5, VAR_1, 3);
        if (VAR_7 < 0)
                return VAR_5;

        FUNC_0(VAR_7 > 2);

        (void) FUNC_1(VAR_5);
        return VAR_7;
}
