
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usbMsgLen_t ;
typedef int uchar ;


 int FUNC_0 (int,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int) ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline void FUNC_3(void) {
    usbMsgLen_t VAR_7;
    uchar VAR_8;

    VAR_7 = VAR_4;
    if (VAR_7 > 8) VAR_7 = 8;
    VAR_4 -= VAR_7;
    VAR_5[0] ^= VAR_0 ^ VAR_1;
    VAR_8 = FUNC_2(VAR_5 + 1, VAR_7);
    if (VAR_8 <= 8) {
        FUNC_1(&VAR_5[1], VAR_8);
        VAR_8 += 4;
        if (VAR_8 < 12)
            VAR_4 = VAR_3;
    } else {
        VAR_8 = VAR_2;
        VAR_4 = VAR_3;
    }
    VAR_6 = VAR_8;
    FUNC_0(0x20, VAR_5, VAR_8 - 1);
}
