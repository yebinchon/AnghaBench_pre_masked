
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char*,int ) ;

int FUNC_6(const char *VAR_3, char **VAR_4) {
        char *VAR_5, *VAR_6;




        FUNC_0(VAR_3);

        VAR_5 = FUNC_4(VAR_3);
        if (!VAR_5)
                return -VAR_1;

        if (FUNC_2(VAR_5, 0)) {
                *VAR_4 = VAR_5;
                return 0;
        }

        VAR_6 = FUNC_3(VAR_5, '.');
        if (VAR_6)
                *VAR_6 = 0;

        FUNC_5(VAR_5, VAR_2);

        if (!FUNC_2(VAR_5, 0)) {
                FUNC_1(VAR_5);
                return -VAR_0;
        }

        *VAR_4 = VAR_5;
        return 1;
}
