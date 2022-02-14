
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int,char const*,int,int ) ;
 int FUNC_3 (int) ;

DIR *FUNC_4(int VAR_5, const char *VAR_6, int VAR_7) {
        int VAR_8;
        DIR *VAR_9;

        FUNC_0(!(VAR_7 & VAR_1));

        VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_4|VAR_3|VAR_2|VAR_0|VAR_7, 0);
        if (VAR_8 < 0)
                return ((void*)0);

        VAR_9 = FUNC_1(VAR_8);
        if (!VAR_9) {
                FUNC_3(VAR_8);
                return ((void*)0);
        }

        return VAR_9;
}
