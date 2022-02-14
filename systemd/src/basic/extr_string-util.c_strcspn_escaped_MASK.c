
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const) ;

__attribute__((used)) static size_t FUNC_1(const char *VAR_0, const char *VAR_1) {
        bool VAR_2 = 0;
        int VAR_3;

        for (VAR_3=0; VAR_0[VAR_3]; VAR_3++) {
                if (VAR_2)
                        VAR_2 = 0;
                else if (VAR_0[VAR_3] == '\\')
                        VAR_2 = 1;
                else if (FUNC_0(VAR_1, VAR_0[VAR_3]))
                        break;
        }


        return VAR_3 - VAR_2;
}
