
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint16_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char,int) ;

void FUNC_1(bool VAR_5) {
    uint16_t VAR_6 = VAR_3 - &VAR_2[0];
    uint8_t VAR_7 = VAR_4 - (VAR_6 % VAR_4);

    if (VAR_5) {

        VAR_7 = VAR_7 / VAR_0;


        while (VAR_7--) FUNC_0(' ', 0);
    } else {

        if (VAR_6 + VAR_7 >= VAR_1) {
            VAR_6 = 0;
            VAR_7 = 0;
        }

        VAR_3 = &VAR_2[VAR_6 + VAR_7];
    }
}
