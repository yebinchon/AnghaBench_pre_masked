
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;
 size_t FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,size_t) ;

int FUNC_6(const char *VAR_3, const char *VAR_4) {
        size_t VAR_5;
        int VAR_6 = 0;

        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        VAR_5 = FUNC_4(VAR_3);


        while (VAR_5 > 0 && VAR_3[VAR_5-1] == '/')
                VAR_5--;

        while (VAR_5 > 0) {
                char *VAR_7;


                while (VAR_5 > 0 && VAR_3[VAR_5-1] != '/')
                        VAR_5--;


                while (VAR_5 > 0 && VAR_3[VAR_5-1] == '/')
                        VAR_5--;

                if (VAR_5 <= 0)
                        break;

                VAR_7 = FUNC_5(VAR_3, VAR_5);
                if (!VAR_7)
                        return -VAR_1;

                if (FUNC_2(VAR_4, VAR_7)) {
                        FUNC_1(VAR_7);
                        return 0;
                }

                VAR_6 = FUNC_3(VAR_7);
                FUNC_1(VAR_7);

                if (VAR_6 < 0)
                        if (VAR_2 != VAR_0)
                                return -VAR_2;
        }

        return 0;
}
