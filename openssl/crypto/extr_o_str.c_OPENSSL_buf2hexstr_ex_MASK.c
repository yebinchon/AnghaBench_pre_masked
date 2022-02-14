
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,int) ;

int FUNC_2(char *VAR_2, size_t VAR_3, size_t *VAR_4,
                          const unsigned char *VAR_5, size_t VAR_6)
{
    static const char VAR_7[] = "0123456789ABCDEF";
    const unsigned char *VAR_8;
    char *VAR_9;
    size_t VAR_10;

    if (VAR_4 != ((void*)0))
        *VAR_4 = VAR_6 * 3;
    if (VAR_2 == ((void*)0))
        return 1;

    if (VAR_3 < (unsigned long)VAR_6 * 3) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    VAR_9 = VAR_2;
    for (VAR_10 = 0, VAR_8 = VAR_5; VAR_10 < VAR_6; VAR_10++, VAR_8++) {
        *VAR_9++ = VAR_7[(*VAR_8 >> 4) & 0xf];
        *VAR_9++ = VAR_7[*VAR_8 & 0xf];
        *VAR_9++ = ':';
    }
    VAR_9[-1] = 0;



    return 1;
}
