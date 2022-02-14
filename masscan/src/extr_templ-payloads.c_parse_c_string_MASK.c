
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,size_t*,size_t,char const) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char const) ;

__attribute__((used)) static const char *
FUNC_4(unsigned char *VAR_0, size_t *VAR_1,
               size_t VAR_2, const char *VAR_3)
{
    size_t VAR_4;

    if (*VAR_3 != '\"')
        return VAR_3;
    else
        VAR_4 = 1;

    while (VAR_3[VAR_4] && VAR_3[VAR_4] != '\"') {
        if (VAR_3[VAR_4] == '\\') {
            VAR_4++;
            switch (VAR_3[VAR_4]) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                {
                    unsigned VAR_5 = 0;

                    if (FUNC_2(VAR_3[VAR_4]))
                        VAR_5 = VAR_5 * 8 + FUNC_1(VAR_3[VAR_4++]);
                    if (FUNC_2(VAR_3[VAR_4]))
                        VAR_5 = VAR_5 * 8 + FUNC_1(VAR_3[VAR_4++]);
                    if (FUNC_2(VAR_3[VAR_4]))
                        VAR_5 = VAR_5 * 8 + FUNC_1(VAR_3[VAR_4++]);
                    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5);
                    continue;
                }
                break;
            case 'x':
                VAR_4++;
                {
                    unsigned VAR_6 = 0;

                    if (FUNC_3(VAR_3[VAR_4]))
                        VAR_6 = VAR_6 * 16 + FUNC_1(VAR_3[VAR_4++]);
                    if (FUNC_3(VAR_3[VAR_4]))
                        VAR_6 = VAR_6 * 16 + FUNC_1(VAR_3[VAR_4++]);
                    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6);
                    continue;
                }
                break;

            case 'a':
                FUNC_0(VAR_0, VAR_1, VAR_2, '\a');
                break;
            case 'b':
                FUNC_0(VAR_0, VAR_1, VAR_2, '\b');
                break;
            case 'f':
                FUNC_0(VAR_0, VAR_1, VAR_2, '\f');
                break;
            case 'n':
                FUNC_0(VAR_0, VAR_1, VAR_2, '\n');
                break;
            case 'r':
                FUNC_0(VAR_0, VAR_1, VAR_2, '\r');
                break;
            case 't':
                FUNC_0(VAR_0, VAR_1, VAR_2, '\t');
                break;
            case 'v':
                FUNC_0(VAR_0, VAR_1, VAR_2, '\v');
                break;
            default:
            case '\\':
                FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3[VAR_4]);
                break;
            }
        } else
            FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3[VAR_4]);

        VAR_4++;
    }

    if (VAR_3[VAR_4] == '\"')
        VAR_4++;

    return VAR_3 + VAR_4;

}
