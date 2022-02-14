
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char***,char*) ;

int FUNC_2(char ***VAR_1, const char *VAR_2) {
        char *VAR_3;

        if (!VAR_2)
                return 0;

        VAR_3 = FUNC_0(VAR_2);
        if (!VAR_3)
                return -VAR_0;

        return FUNC_1(VAR_1, VAR_3);
}
