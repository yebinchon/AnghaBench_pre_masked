
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2, const char *VAR_3)
{
    const char *VAR_4, *VAR_5, *VAR_6;
    VAR_5 = FUNC_0(VAR_3, ' ');
    if (VAR_5 || *VAR_3 == '\0')
        return VAR_0;

    for (VAR_4 = VAR_2;;) {
        VAR_5 = FUNC_2((const char*)VAR_4, VAR_3);
        if (!VAR_5) break;
        VAR_6 = VAR_5 + FUNC_1(VAR_3);
        if (VAR_5 == VAR_4 || *(VAR_5 - 1) == ' ') {
            if (*VAR_6 == ' ' || *VAR_6 == '\0')
                return VAR_1;
        }
        VAR_4 = VAR_6;
    }
    return VAR_0;
}
