
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,char const*) ;
 int VAR_0 ;
 int FUNC_3 (char*,char const*,...) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_1, const char *VAR_2, const char *VAR_3, int *VAR_4) {
        int VAR_5 = FUNC_2(VAR_2, VAR_3);

        FUNC_3("%13s%s ", FUNC_4(VAR_1), VAR_1 ? ":" : " ");
        if (VAR_5 < 0) {
                VAR_0 = -VAR_5;
                FUNC_3("%s%s%s (%m)\n", FUNC_0(), VAR_3, FUNC_1());
        } else
                FUNC_3("%s\n", VAR_3);

        if (*VAR_4 == 0 && VAR_5 < 0)
                *VAR_4 = VAR_5;
}
