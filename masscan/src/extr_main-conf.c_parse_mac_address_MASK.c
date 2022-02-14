
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0, unsigned char *VAR_1)
{
    unsigned VAR_2;

    for (VAR_2=0; VAR_2<6; VAR_2++) {
        unsigned VAR_3;
        char VAR_4;

        while (FUNC_2(*VAR_0 & 0xFF) && FUNC_1(*VAR_0 & 0xFF))
            VAR_0++;

        VAR_4 = *VAR_0;
        if (!FUNC_3(VAR_4&0xFF))
            return -1;
        VAR_3 = FUNC_0(VAR_4)<<4;
        VAR_0++;

        VAR_4 = *VAR_0;
        if (!FUNC_3(VAR_4&0xFF))
            return -1;
        VAR_3 |= FUNC_0(VAR_4);
        VAR_0++;

        VAR_1[VAR_2] = (unsigned char)VAR_3;

        if (FUNC_1(*VAR_0 & 0xFF))
            VAR_0++;
    }

    return 0;
}
