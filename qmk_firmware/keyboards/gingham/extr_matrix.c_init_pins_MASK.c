
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int,int,int*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void) {
    FUNC_2();

    uint8_t VAR_3 = 0x07;
    FUNC_0((VAR_1 << 1), 0x00, &VAR_3, 1, 20);

    FUNC_0((VAR_1 << 1), 0x06, &VAR_3, 1, 20);

    for (uint8_t VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if ( (VAR_4 > 0) && (VAR_4 < 12) ) {
        FUNC_1(VAR_2[VAR_4]);
        }
    }
}
