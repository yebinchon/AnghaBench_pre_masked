
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char) ;

int FUNC_2(unsigned char *VAR_4, size_t VAR_5, size_t *VAR_6,
                          const char *VAR_7)
{
    unsigned char *VAR_8;
    unsigned char VAR_9, VAR_10;
    int VAR_11, VAR_12;
    const unsigned char *VAR_13;
    size_t VAR_14;

    for (VAR_13 = (const unsigned char *)VAR_7, VAR_8 = VAR_4, VAR_14 = 0; *VAR_13; ) {
        VAR_9 = *VAR_13++;
        if (VAR_9 == ':')
            continue;
        VAR_10 = *VAR_13++;
        if (!VAR_10) {
            FUNC_0(VAR_0,
                      VAR_2);
            return 0;
        }
        VAR_12 = FUNC_1(VAR_10);
        VAR_11 = FUNC_1(VAR_9);
        if (VAR_12 < 0 || VAR_11 < 0) {
            FUNC_0(VAR_0,
                      VAR_1);
            return 0;
        }
        VAR_14++;
        if (VAR_8 != ((void*)0)) {
            if (VAR_14 > VAR_5) {
                FUNC_0(VAR_0,
                          VAR_3);
                return 0;
            }
            *VAR_8++ = (unsigned char)((VAR_11 << 4) | VAR_12);
        }
    }

    if (VAR_6 != ((void*)0))
        *VAR_6 = VAR_14;
    return 1;
}
