
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;


 size_t FUNC_0 (unsigned char*,size_t,size_t*) ;
 size_t FUNC_1 (unsigned char*,size_t,size_t*) ;
 int FUNC_2 (unsigned char*,size_t,size_t*) ;

unsigned
FUNC_3(unsigned char *VAR_0, size_t VAR_1, uint64_t VAR_2)
{
    uint64_t VAR_3=0;
    uint64_t VAR_4;
    uint64_t VAR_5;
    uint64_t VAR_6;
    uint64_t VAR_7;



    if (FUNC_2(VAR_0, VAR_1, &VAR_3) != 0x30)
        return 0;


    VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
    if (VAR_1 > VAR_4 + VAR_3)
        VAR_1 = (size_t)(VAR_4 + VAR_3);


    VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_3);
    if (VAR_5 != 0)
        return 0;


    if (FUNC_2(VAR_0, VAR_1, &VAR_3) != 0x04)
        return 0;
    VAR_3 += FUNC_1(VAR_0, VAR_1, &VAR_3);


    VAR_6 = FUNC_2(VAR_0, VAR_1, &VAR_3);
    if (VAR_6 < 0xA0 || 0xA5 < VAR_6)
        return 0;
    VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
    if (VAR_1 > VAR_4 + VAR_3)
        VAR_1 = (size_t)(VAR_4 + VAR_3);


    FUNC_2(VAR_0, VAR_1, &VAR_3);
    VAR_7 = FUNC_1(VAR_0, VAR_1, &VAR_3);
    switch (VAR_7) {
    case 0:
        return 0;
    case 1:
        VAR_0[VAR_3+0] = (unsigned char)(VAR_2>>0)&0x7F;
        return VAR_2 & 0x7F;
    case 2:
        VAR_0[VAR_3+0] = (unsigned char)(VAR_2>>8)&0x7F;
        VAR_0[VAR_3+1] = (unsigned char)(VAR_2>>0);
        return VAR_2 & 0x7fff;
    case 3:
        VAR_0[VAR_3+0] = (unsigned char)(VAR_2>>16)&0x7F;
        VAR_0[VAR_3+1] = (unsigned char)(VAR_2>>8);
        VAR_0[VAR_3+2] = (unsigned char)(VAR_2>>0);
        return VAR_2 & 0x7fffFF;
    case 4:
        VAR_0[VAR_3+0] = (unsigned char)(VAR_2>>24)&0x7F;
        VAR_0[VAR_3+1] = (unsigned char)(VAR_2>>16);
        VAR_0[VAR_3+2] = (unsigned char)(VAR_2>>8);
        VAR_0[VAR_3+3] = (unsigned char)(VAR_2>>0);
        return VAR_2 & 0x7fffFFFF;
    case 5:
        VAR_0[VAR_3+0] = 0;
        VAR_0[VAR_3+1] = (unsigned char)(VAR_2>>24);
        VAR_0[VAR_3+2] = (unsigned char)(VAR_2>>16);
        VAR_0[VAR_3+3] = (unsigned char)(VAR_2>>8);
        VAR_0[VAR_3+4] = (unsigned char)(VAR_2>>0);
        return VAR_2 & 0xffffFFFF;
    }
    return 0;
}
