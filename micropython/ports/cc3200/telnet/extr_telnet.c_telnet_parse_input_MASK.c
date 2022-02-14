
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_2 (uint8_t *VAR_3, int16_t *VAR_4) {
    int16_t VAR_5 = *VAR_4;
    uint8_t *VAR_6 = VAR_3;

    for (uint8_t *VAR_7 = VAR_6; VAR_7 < VAR_6 + VAR_5; ) {
        if (*VAR_7 <= 127) {
            if (VAR_2.state == VAR_0 && *VAR_7 == VAR_1) {

                FUNC_1();
                (*VAR_4)--;
                VAR_7++;
            }
            else if (*VAR_7 > 0) {
                *VAR_3++ = *VAR_7++;
            }
            else {
                VAR_7++;
                *VAR_4 -= 1;
            }
        }
        else {

            VAR_7 += FUNC_0(3, *VAR_4);
            *VAR_4 -= FUNC_0(3, *VAR_4);
        }
    }
}
