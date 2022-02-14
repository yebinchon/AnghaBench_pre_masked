
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int LED_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int,int ) ;
 int FUNC_1 () ;

void FUNC_2(LED_TYPE *VAR_2, uint16_t VAR_3) {
    static bool VAR_4 = 0;
    if (!VAR_4) {
        FUNC_1();
        VAR_4 = 1;
    }

    FUNC_0(VAR_0, (uint8_t *)VAR_2, sizeof(LED_TYPE) * VAR_3, VAR_1);
}
