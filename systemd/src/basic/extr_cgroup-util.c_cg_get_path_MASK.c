
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,char const*,char**) ;
 int FUNC_4 (char const*,char const*,char**) ;
 char* FUNC_5 (char const*,char const*) ;
 char* FUNC_6 (char*,int) ;
 char* FUNC_7 (char const*) ;

int FUNC_8(const char *VAR_2, const char *VAR_3, const char *VAR_4, char **VAR_5) {
        int VAR_6;

        FUNC_0(VAR_5);

        if (!VAR_2) {
                char *VAR_7;




                if (!VAR_3 && !VAR_4)
                        return -VAR_0;

                if (!VAR_4)
                        VAR_7 = FUNC_7(VAR_3);
                else if (!VAR_3)
                        VAR_7 = FUNC_7(VAR_4);
                else
                        VAR_7 = FUNC_5(VAR_3, VAR_4);
                if (!VAR_7)
                        return -VAR_1;

                *VAR_5 = FUNC_6(VAR_7, 0);
                return 0;
        }

        if (!FUNC_2(VAR_2))
                return -VAR_0;

        VAR_6 = FUNC_1();
        if (VAR_6 < 0)
                return VAR_6;
        if (VAR_6 > 0)
                VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5);
        else
                VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
        if (VAR_6 < 0)
                return VAR_6;

        FUNC_6(*VAR_5, 0);
        return 0;
}
