
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static inline unsigned char
FUNC_1(int VAR_3)

{
    int VAR_4;
    int VAR_5;
    unsigned char VAR_6;

    VAR_3 = VAR_3 >> 3;

    if (VAR_3 >= 0) {
        VAR_4 = 0xD5;
    } else {
        VAR_4 = 0x55;
        VAR_3 = -VAR_3 - 1;
    }


    VAR_5 = FUNC_0(VAR_3, VAR_2, 8);



    if (VAR_5 >= 8)
        return (unsigned char) (0x7F ^ VAR_4);
    else {
        VAR_6 = (unsigned char) VAR_5 << VAR_1;
        if (VAR_5 < 2)
            VAR_6 |= (VAR_3 >> 1) & VAR_0;
        else
            VAR_6 |= (VAR_3 >> VAR_5) & VAR_0;
        return (VAR_6 ^ VAR_4);
    }
}
