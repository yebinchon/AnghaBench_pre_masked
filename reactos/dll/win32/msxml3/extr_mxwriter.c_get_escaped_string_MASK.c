
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ltW ;
typedef int gtW ;
typedef int escape_mode ;
typedef int equotW ;
typedef int ampW ;
typedef char WCHAR ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (int,int const) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static WCHAR *FUNC_5(const WCHAR *VAR_1, escape_mode VAR_2, int *VAR_3)
{
    static const WCHAR VAR_4[] = {'&','l','t',';'};
    static const WCHAR VAR_5[] = {'&','a','m','p',';'};
    static const WCHAR VAR_6[] = {'&','q','u','o','t',';'};
    static const WCHAR VAR_7[] = {'&','g','t',';'};

    const int VAR_8 = 100;
    const int VAR_9 = 10;
    int VAR_10 = *VAR_3, VAR_11;
    WCHAR *VAR_12, *VAR_13;


    VAR_11 = FUNC_3(2**VAR_3, VAR_8);
    VAR_12 = VAR_13 = FUNC_1(VAR_11*sizeof(WCHAR));

    while (VAR_10)
    {
        if (VAR_12 - VAR_13 > VAR_11 - VAR_9)
        {
            int VAR_14 = VAR_12 - VAR_13;
            VAR_11 *= 2;
            VAR_12 = VAR_13 = FUNC_2(VAR_13, VAR_11*sizeof(WCHAR));
            VAR_12 += VAR_14;
        }

        switch (*VAR_1)
        {
        case '<':
            FUNC_4(VAR_12, VAR_4, sizeof(VAR_4));
            VAR_12 += FUNC_0(VAR_4);
            break;
        case '&':
            FUNC_4(VAR_12, VAR_5, sizeof(VAR_5));
            VAR_12 += FUNC_0(VAR_5);
            break;
        case '>':
            FUNC_4(VAR_12, VAR_7, sizeof(VAR_7));
            VAR_12 += FUNC_0(VAR_7);
            break;
        case '"':
            if (VAR_2 == VAR_0)
            {
                FUNC_4(VAR_12, VAR_6, sizeof(VAR_6));
                VAR_12 += FUNC_0(VAR_6);
                break;
            }

        default:
            *VAR_12++ = *VAR_1;
            break;
        }

        VAR_1++;
        VAR_10--;
    }

    *VAR_3 = VAR_12-VAR_13;
    *++VAR_12 = 0;

    return VAR_13;
}
