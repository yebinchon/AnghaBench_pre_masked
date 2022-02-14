
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const Set ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*) ;

int FUNC_4(Set *VAR_1, const char *VAR_2) {
        char *VAR_3;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        if (FUNC_2(VAR_1, (char*) VAR_2))
                return 0;

        VAR_3 = FUNC_3(VAR_2);
        if (!VAR_3)
                return -VAR_0;

        return FUNC_1(VAR_1, VAR_3);
}
