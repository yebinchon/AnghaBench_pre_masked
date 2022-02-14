
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned char*,unsigned char const*,unsigned int) ;
 int FUNC_3 (unsigned char*,int,int) ;

int FUNC_4(unsigned char *VAR_3, int VAR_4,
                           const unsigned char *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;
    unsigned char *VAR_9;

    if (VAR_6 > (VAR_4 - VAR_1)) {
        FUNC_1(VAR_0,
               VAR_2);
        return 0;
    }

    VAR_9 = (unsigned char *)VAR_3;

    *(VAR_9++) = 0;
    *(VAR_9++) = 2;


    VAR_8 = VAR_4 - 3 - 8 - VAR_6;

    if (FUNC_0(VAR_9, VAR_8) <= 0)
        return 0;
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
        if (*VAR_9 == '\0')
            do {
                if (FUNC_0(VAR_9, 1) <= 0)
                    return 0;
            } while (*VAR_9 == '\0');
        VAR_9++;
    }

    FUNC_3(VAR_9, 3, 8);
    VAR_9 += 8;
    *(VAR_9++) = '\0';

    FUNC_2(VAR_9, VAR_5, (unsigned int)VAR_6);
    return 1;
}
