
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_2(uint8_t VAR_5) {
    uint8_t VAR_6 = VAR_1;
    FUNC_0();
    uint8_t VAR_7 = (VAR_3 + 1) % VAR_0;
    if (VAR_7 != VAR_4) {
        VAR_2[VAR_3] = VAR_5;
        VAR_3 = VAR_7;
    } else {
        FUNC_1("pbuf: full\n");
    }
    VAR_1 = VAR_6;
}
