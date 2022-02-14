
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint32_t ;


 size_t VAR_0 ;
 int * VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (size_t) ;
 size_t* VAR_3 ;
 int FUNC_2 (size_t*,size_t*,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(bool VAR_4) {
    bool VAR_5 = 0;
    uint32_t VAR_6 = 0;

    for (uint8_t VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        VAR_2[VAR_7] = !FUNC_3(VAR_1[VAR_7]);
        VAR_6 |= VAR_2[VAR_7] << VAR_7;
        if (VAR_3[VAR_7] ^ VAR_2[VAR_7] || VAR_4) {
            VAR_5 = 1;
            FUNC_0(VAR_7, VAR_2[VAR_7]);
        }
    }
    if (VAR_5) {
        FUNC_1(VAR_6);
    }
    FUNC_2(VAR_3, VAR_2, sizeof(&VAR_2));
}
