
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;


 char FUNC_0 (char,char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 () ;
 int VAR_0 ;
 char FUNC_6 (char const) ;

__attribute__((used)) static sds FUNC_7(const char *VAR_1, size_t VAR_2) {
    const char *VAR_3 = VAR_1 + VAR_2;
    sds VAR_4 = FUNC_5();
    const char *VAR_5 = VAR_1;

    while (VAR_5 < VAR_3) {
        if (*VAR_5 == '%') {
            if ((VAR_3 - VAR_5) < 2) {
                FUNC_2(VAR_0, "Incomplete URI encoding\n");
                FUNC_1(1);
            }

            char VAR_6 = FUNC_6(*(++VAR_5));
            char VAR_7 = FUNC_6(*(++VAR_5));
            if (!FUNC_3(VAR_6) || !FUNC_3(VAR_7)) {
                FUNC_2(VAR_0, "Illegal character in URI encoding\n");
                FUNC_1(1);
            }
            char VAR_8 = FUNC_0(VAR_6, VAR_7);
            VAR_4 = FUNC_4(VAR_4, &VAR_8, 1);
            VAR_5++;
        } else {
            VAR_4 = FUNC_4(VAR_4, VAR_5++, 1);
        }
    }

    return VAR_4;
}
