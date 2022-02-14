
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t
FUNC_0(void *VAR_0, size_t VAR_1,
              const void *VAR_2, size_t VAR_3)
{
    static const char *VAR_4 =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "+/";
    size_t VAR_5 = 0;
    size_t VAR_6 = 0;
    unsigned char *VAR_7 = (unsigned char *)VAR_0;
    const unsigned char *VAR_8 = (const unsigned char *)VAR_2;


    while (VAR_5 + 3 <= VAR_3) {
        unsigned VAR_9;


        if (VAR_6 + 4 > VAR_1)
            return VAR_6;


        VAR_9 = VAR_8[VAR_5]<<16 | VAR_8[VAR_5+1]<<8 | VAR_8[VAR_5+2];
        VAR_7[VAR_6+0] = VAR_4[ (VAR_9>>18) & 0x3F ];
        VAR_7[VAR_6+1] = VAR_4[ (VAR_9>>12) & 0x3F ];
        VAR_7[VAR_6+2] = VAR_4[ (VAR_9>> 6) & 0x3F ];
        VAR_7[VAR_6+3] = VAR_4[ (VAR_9>> 0) & 0x3F ];

        VAR_5 += 3;
        VAR_6 += 4;
    }



    if (VAR_5 + 2 <= VAR_3 && VAR_6 + 4 <= VAR_1) {
        unsigned VAR_10 = VAR_8[VAR_5]<<16 | VAR_8[VAR_5+1]<<8;
        VAR_7[VAR_6+0] = VAR_4[ (VAR_10>>18) & 0x3F ];
        VAR_7[VAR_6+1] = VAR_4[ (VAR_10>>12) & 0x3F ];
        VAR_7[VAR_6+2] = VAR_4[ (VAR_10>> 6) & 0x3F ];
        VAR_7[VAR_6+3] = '=';
        VAR_6 += 4;
    } else if (VAR_5 + 1 <= VAR_3 && VAR_6 + 4 <= VAR_1) {
        unsigned VAR_11 = VAR_8[VAR_5]<<16;
        VAR_7[VAR_6+0] = VAR_4[ (VAR_11>>18) & 0x3F ];
        VAR_7[VAR_6+1] = VAR_4[ (VAR_11>>12) & 0x3F ];
        VAR_7[VAR_6+2] = '=';
        VAR_7[VAR_6+3] = '=';
        VAR_6 += 4;
    }

    return VAR_6;
}
