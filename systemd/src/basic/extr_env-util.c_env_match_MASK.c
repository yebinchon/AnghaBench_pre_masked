
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,size_t) ;

__attribute__((used)) static bool FUNC_5(const char *VAR_0, const char *VAR_1) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);
        if (FUNC_2(VAR_0, VAR_1))
                return 1;

        if (!FUNC_1(VAR_1, '=')) {
                size_t VAR_2 = FUNC_3(VAR_1);

                return FUNC_4(VAR_0, VAR_1, VAR_2) && VAR_0[VAR_2] == '=';
        }

        return 0;
}
