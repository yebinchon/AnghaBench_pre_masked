
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;



size_t FUNC_0(const char *VAR_0, size_t VAR_1, int32_t *VAR_2)
{
    size_t VAR_3;
    int32_t VAR_4 = 0;
    unsigned char VAR_5 = (unsigned char)VAR_0[0];

    if(VAR_1 == 2)
    {
        VAR_4 = VAR_5 & 0x1F;
    }
    else if(VAR_1 == 3)
    {
        VAR_4 = VAR_5 & 0xF;
    }
    else if(VAR_1 == 4)
    {
        VAR_4 = VAR_5 & 0x7;
    }
    else
        return 0;

    for(VAR_3 = 1; VAR_3 < VAR_1; VAR_3++)
    {
        VAR_5 = (unsigned char)VAR_0[VAR_3];

        if(VAR_5 < 0x80 || VAR_5 > 0xBF) {

            return 0;
        }

        VAR_4 = (VAR_4 << 6) + (VAR_5 & 0x3F);
    }

    if(VAR_4 > 0x10FFFF) {

        return 0;
    }

    else if(0xD800 <= VAR_4 && VAR_4 <= 0xDFFF) {

        return 0;
    }

    else if((VAR_1 == 2 && VAR_4 < 0x80) ||
            (VAR_1 == 3 && VAR_4 < 0x800) ||
            (VAR_1 == 4 && VAR_4 < 0x10000)) {

        return 0;
    }

    if(VAR_2)
        *VAR_2 = VAR_4;

    return 1;
}
