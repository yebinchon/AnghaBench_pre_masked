
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 short VAR_1 ;
 short FUNC_0 (short,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static inline unsigned char
FUNC_1(short VAR_3)
{
    short VAR_4;
    short VAR_5;
    unsigned char VAR_6;


    VAR_3 = VAR_3 >> 2;
    if (VAR_3 < 0) {
        VAR_3 = -VAR_3;
        VAR_4 = 0x7F;
    } else {
        VAR_4 = 0xFF;
    }
    if ( VAR_3 > VAR_1 ) VAR_3 = VAR_1;
    VAR_3 += (VAR_0 >> 2);


    VAR_5 = FUNC_0(VAR_3, VAR_2, 8);





    if (VAR_5 >= 8)
        return (unsigned char) (0x7F ^ VAR_4);
    else {
        VAR_6 = (unsigned char) (VAR_5 << 4) | ((VAR_3 >> (VAR_5 + 1)) & 0xF);
        return (VAR_6 ^ VAR_4);
    }
}
