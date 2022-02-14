
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
typedef unsigned long uint32 ;
typedef int uint16 ;
struct TYPE_2__ {int* word; int dword; } ;
typedef TYPE_1__ spi_buf_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int) ;

uint32 FUNC_4(uint8 VAR_1, uint16 VAR_2, uint8 VAR_3)
{
    uint8 VAR_4;
    spi_buf_t VAR_5;
    uint32 VAR_6;

    if (VAR_1 > 1)
        return 0;


    VAR_4 = VAR_2 >> 5;
    if (VAR_4 > 15)
        return 0;

    while(FUNC_0(FUNC_1(VAR_1)) & VAR_0);


    VAR_5.word[1] = FUNC_0(FUNC_2(VAR_1) + VAR_4*4);
    VAR_5.word[1] = FUNC_3(VAR_5.word[1]);
    if (VAR_4 < 15) {
        VAR_5.word[0] = FUNC_0(FUNC_2(VAR_1) + (VAR_4+1)*4);
        VAR_5.word[0] = FUNC_3(VAR_5.word[0]);
    }

    VAR_6 = (uint32)(VAR_5.dword >> (64 - ((VAR_2 & 0x1f) + VAR_3)));
    VAR_6 &= (1UL << VAR_3)-1;

    return VAR_6;
}
