
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static unsigned
FUNC_2(unsigned char *VAR_0, size_t VAR_1, const char *VAR_2)
{
    size_t VAR_3 = 0;

    while (*VAR_2) {
        const char *VAR_4;
        unsigned VAR_5;
        unsigned VAR_6;
        unsigned VAR_7;

        while (*VAR_2 == '.')
            VAR_2++;

        VAR_5 = (unsigned)FUNC_1(VAR_2, (char**)&VAR_4, 0);
        if (VAR_2 == VAR_4)
            break;
        else
            VAR_2 = VAR_4;

        VAR_6 = FUNC_0(VAR_5);
        for (VAR_7=VAR_6; VAR_7>0; VAR_7--) {
            if (VAR_3 < VAR_1)
                VAR_0[VAR_3++] = ((VAR_5>>(7*VAR_7)) & 0x7F) | 0x80;
        }
        if (VAR_3 < VAR_1)
            VAR_0[VAR_3++] = (VAR_5 & 0x7F);


    }

    return (unsigned)VAR_3;
}
