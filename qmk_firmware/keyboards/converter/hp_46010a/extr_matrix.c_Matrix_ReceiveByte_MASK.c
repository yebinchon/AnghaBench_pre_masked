
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;

__attribute__((used)) inline
static
uint8_t FUNC_1 (void) {
    uint8_t VAR_3 = 0 ;
    uint8_t VAR_4 = 0 ;
    for ( uint8_t VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5 ) {

        FUNC_0();
        VAR_4 = (VAR_1 & VAR_2) << 4 ;
        VAR_3 |= VAR_4 >> VAR_5 ;
    }

    return VAR_3 ;
}
