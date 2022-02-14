
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool
FUNC_0(const char *VAR_0,
              char *VAR_1,
              char *VAR_2,
              int VAR_3,
              int VAR_4,
              const char **VAR_5)
{
    int VAR_6;
    bool VAR_7 = 0;
    bool VAR_8 = 0;

    for (VAR_6 = VAR_3-1; (*VAR_0 && (*VAR_0 != '=') && VAR_6--); )
    {
        *VAR_1++ = *VAR_0++;
    }
    *VAR_1 = '\0';

    if ('=' != *VAR_0++)
    {

        return 0;
    }

    if ('\"' == *VAR_0)
    {

        VAR_0++;
        VAR_7 = 1;
    }

    for (VAR_6 = VAR_4-1; *VAR_0 && VAR_6--; VAR_0++)
    {
        switch (*VAR_0)
        {
            case '\\':
                if (!VAR_8)
                {

                    VAR_8 = 1;
                    *VAR_2++ = '\\';

                    continue;
                }
                break;

            case ',':
                if (!VAR_7)
                {


                    VAR_6 = 0;
                    continue;
                }
                break;

            case '\r':
            case '\n':

                VAR_6 = 0;
                continue;

            case '\"':
                if (!VAR_8 && VAR_7)
                {

                    VAR_6 = 0;
                    continue;
                }
                break;
        }
        VAR_8 = 0;
        *VAR_2++ = *VAR_0;
    }
    *VAR_2 = '\0';

    *VAR_5 = VAR_0;

    return 1;
}
