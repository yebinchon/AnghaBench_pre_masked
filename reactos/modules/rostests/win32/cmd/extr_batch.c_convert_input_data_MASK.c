
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int escaped_tab ;
typedef int escaped_space ;
typedef size_t DWORD ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (char const*,char const*,int) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static const char* FUNC_4(const char *VAR_0, DWORD VAR_1, DWORD *VAR_2)
{
    static const char VAR_3[] = {'@','s','p','a','c','e','@'};
    static const char VAR_4[] = {'@','t','a','b','@'};
    DWORD VAR_5, VAR_6 = 0;
    char *VAR_7, *VAR_8;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
        if (VAR_0[VAR_5] == '\n') VAR_6++;

    VAR_7 = VAR_8 = FUNC_1(FUNC_0(), 0, VAR_1 + VAR_6 + 1);

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        switch (VAR_0[VAR_5]) {
            case '\n':
                if (VAR_0[VAR_5-1] != '\r')
                    *VAR_7++ = '\r';
                *VAR_7++ = '\n';
                break;
            case '@':
                if (VAR_0 + VAR_5 + sizeof(VAR_3) - 1 < VAR_0 + VAR_1
                        && !FUNC_2(VAR_0 + VAR_5, VAR_3, sizeof(VAR_3))) {
                    *VAR_7++ = ' ';
                    VAR_5 += sizeof(VAR_3) - 1;
                } else if (VAR_0 + VAR_5 + sizeof(VAR_4) - 1 < VAR_0 + VAR_1
                        && !FUNC_2(VAR_0 + VAR_5, VAR_4, sizeof(VAR_4))) {
                    *VAR_7++ = '\t';
                    VAR_5 += sizeof(VAR_4) - 1;
                } else {
                    *VAR_7++ = VAR_0[VAR_5];
                }
                break;
            default:
                *VAR_7++ = VAR_0[VAR_5];
        }
    }
    *VAR_7 = '\0';

    *VAR_2 = FUNC_3(VAR_8);
    return VAR_8;
}
