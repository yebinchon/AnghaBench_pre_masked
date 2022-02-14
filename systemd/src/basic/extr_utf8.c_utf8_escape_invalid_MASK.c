
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,size_t) ;

char *FUNC_7(const char *VAR_1) {
        char *VAR_2, *VAR_3;

        FUNC_0(VAR_1);

        VAR_2 = VAR_3 = FUNC_1(FUNC_5(VAR_1) * 4 + 1);
        if (!VAR_2)
                return ((void*)0);

        while (*VAR_1) {
                int VAR_4;

                VAR_4 = FUNC_6(VAR_1, (size_t) -1);
                if (VAR_4 > 0) {
                        VAR_3 = FUNC_2(VAR_3, VAR_1, VAR_4);
                        VAR_1 += VAR_4;
                } else {
                        VAR_3 = FUNC_3(VAR_3, VAR_0);
                        VAR_1 += 1;
                }
        }

        *VAR_3 = '\0';
        (void) FUNC_4(&VAR_2);
        return VAR_2;
}
