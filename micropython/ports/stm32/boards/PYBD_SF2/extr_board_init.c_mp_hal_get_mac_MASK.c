
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int series; char* mac; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int*,char*,int) ;
 int FUNC_1 (int,int*) ;

void FUNC_2(int VAR_1, uint8_t VAR_2[6]) {

    if (VAR_0->series == 0x00d1 && VAR_0->mac[0] == 'H' && VAR_0->mac[1] == 'J' && VAR_0->mac[2] == '0') {
        FUNC_0(VAR_2, VAR_0->mac, 6);
        VAR_2[5] += VAR_1;
        return;
    }


    FUNC_1(VAR_1, VAR_2);
}
