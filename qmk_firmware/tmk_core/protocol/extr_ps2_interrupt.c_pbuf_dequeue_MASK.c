
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static inline uint8_t FUNC_1(void) {
    uint8_t VAR_5 = 0;

    uint8_t VAR_6 = VAR_1;
    FUNC_0();
    if (VAR_3 != VAR_4) {
        VAR_5 = VAR_2[VAR_4];
        VAR_4 = (VAR_4 + 1) % VAR_0;
    }
    VAR_1 = VAR_6;

    return VAR_5;
}
