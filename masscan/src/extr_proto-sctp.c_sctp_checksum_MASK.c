
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,unsigned char const) ;

unsigned
FUNC_1(const void *VAR_0, size_t VAR_1)
{
    const unsigned char *VAR_2 = (const unsigned char *)VAR_0;
    unsigned VAR_3;
    unsigned VAR_4 = (unsigned)~0;
    unsigned VAR_5;
    unsigned char VAR_6,VAR_7,VAR_8,VAR_9;

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
        FUNC_0(VAR_4, VAR_2[VAR_3]);
    }

    FUNC_0(VAR_4, 0);
    FUNC_0(VAR_4, 0);
    FUNC_0(VAR_4, 0);
    FUNC_0(VAR_4, 0);

    for (VAR_3 = 12; VAR_3 < VAR_1; VAR_3++) {
        FUNC_0(VAR_4, VAR_2[VAR_3]);
    }
    VAR_5 = ~VAR_4;
    VAR_6 = VAR_5 & 0xff;
    VAR_7 = (VAR_5>>8) & 0xff;
    VAR_8 = (VAR_5>>16) & 0xff;
    VAR_9 = (VAR_5>>24) & 0xff;

    VAR_4 = ((VAR_6 << 24) |
            (VAR_7 << 16) |
            (VAR_8 << 8) |
            VAR_9);
    return ( VAR_4 );
}
