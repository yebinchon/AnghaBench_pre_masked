
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (unsigned char const*,size_t,char*,int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const unsigned char *VAR_1, size_t VAR_2,
                             char *VAR_3, int *VAR_4, const BIGNUM *VAR_5)
{
    int VAR_6 = VAR_2 * 2, VAR_7;
    char *VAR_8 = VAR_3, *VAR_9 = ((void*)0);
    const char *VAR_10;

    if (VAR_5 != ((void*)0) && !FUNC_1(VAR_5)) {
        FUNC_2(VAR_1, VAR_2, VAR_3, VAR_0);
        if (*VAR_4) {
            for (; *VAR_8 == '0' || *VAR_8 == ' '; VAR_8++)
                if (*VAR_8 == '0') {
                    VAR_9 = VAR_8;
                    *VAR_8 = ' ';
                    VAR_6--;
                }
            if (*VAR_8 == '\0') {




                if ((VAR_1[VAR_2] & 0xf0) != 0 && FUNC_0(VAR_5)) {
                    *VAR_4 = 0;
                    *VAR_9 = '-';
                    VAR_6++;
                }
            } else {
                *VAR_4 = 0;
                if (FUNC_0(VAR_5)) {




                    *VAR_9 = '-';
                    VAR_6++;
                }
            }
        }
       return VAR_6;
    }

    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        *VAR_8++ = ' ';
        if (VAR_7 % (2 * VAR_0) == 2 * VAR_0 - 1 && VAR_7 != VAR_6 - 1)
            *VAR_8++ = ' ';
    }
    *VAR_8 = '\0';
    if (VAR_5 == ((void*)0))
        VAR_10 = "NULL";
    else
        VAR_10 = FUNC_0(VAR_5) ? "-0" : "0";
    FUNC_3(VAR_8 - FUNC_4(VAR_10), VAR_10);
    return 0;
}
