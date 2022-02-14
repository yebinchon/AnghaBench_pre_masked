
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,size_t const) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(char VAR_1[], size_t VAR_2, const char *VAR_3,
                const char *VAR_4, const char *VAR_5)
{
    const size_t VAR_6 = FUNC_2(VAR_3), VAR_7 = FUNC_2(VAR_4);

    if (VAR_6 + VAR_7 + 1 > VAR_2) {
        FUNC_0(VAR_0, "%s '%s' too long\n", VAR_5, VAR_3);
        return 0;
    }
    FUNC_1(VAR_1, VAR_3, VAR_6);
    FUNC_1(VAR_1 + VAR_6, VAR_4, VAR_7 + 1);
    return 1;
}
