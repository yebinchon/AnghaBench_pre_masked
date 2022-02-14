
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int RCC_SR; } ;


 int* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;

void FUNC_2(void) {
    uint32_t VAR_4 = VAR_0[1];
    VAR_0[1] = 1;
    if ((VAR_4 & 0xfff) == 0 && (VAR_1->RCC_SR & VAR_3)) {

        VAR_1->RCC_SR = VAR_2;



        uint32_t VAR_5 = VAR_0[0];
        FUNC_1(VAR_5, VAR_4);
    }
}
