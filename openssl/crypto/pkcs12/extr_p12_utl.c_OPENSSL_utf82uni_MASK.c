
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char* FUNC_0 (char const*,int,unsigned char**,int*) ;
 unsigned char* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned char const*,int,unsigned long*) ;
 int FUNC_4 (char const*) ;

unsigned char *FUNC_5(const char *VAR_2, int VAR_3,
                                unsigned char **VAR_4, int *VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    unsigned char *VAR_9, *VAR_10;
    unsigned long VAR_11 = 0;

    if (VAR_3 == -1)
        VAR_3 = FUNC_4(VAR_2);

    for (VAR_6 = 0, VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += VAR_8) {
        VAR_8 = FUNC_3((const unsigned char *)VAR_2+VAR_7, VAR_3-VAR_7, &VAR_11);
        if (VAR_8 < 0)
            return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

        if (VAR_11 > 0x10FFFF)
            return ((void*)0);

        if (VAR_11 >= 0x10000)
            VAR_6 += 2*2;
        else
            VAR_6 += 2;
    }

    VAR_6 += 2;

    if ((VAR_10 = FUNC_1(VAR_6)) == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return ((void*)0);
    }

    for (VAR_9 = VAR_10, VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += VAR_8) {
        VAR_8 = FUNC_3((const unsigned char *)VAR_2+VAR_7, VAR_3-VAR_7, &VAR_11);
        if (VAR_11 >= 0x10000) {
            unsigned int VAR_12, VAR_13;

            VAR_11 -= 0x10000;
            VAR_12 = 0xD800 + (VAR_11>>10);
            VAR_13 = 0xDC00 + (VAR_11&0x3ff);
            *VAR_9++ = (unsigned char)(VAR_12>>8);
            *VAR_9++ = (unsigned char)(VAR_12);
            *VAR_9++ = (unsigned char)(VAR_13>>8);
            *VAR_9++ = (unsigned char)(VAR_13);
        } else {
            *VAR_9++ = (unsigned char)(VAR_11>>8);
            *VAR_9++ = (unsigned char)(VAR_11);
        }
    }

    *VAR_9++ = 0;
    *VAR_9++ = 0;
    if (VAR_5)
        *VAR_5 = VAR_6;
    if (VAR_4)
        *VAR_4 = VAR_10;
    return VAR_10;
}
