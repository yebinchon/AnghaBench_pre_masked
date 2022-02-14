
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint64 ;
typedef scalar_t__ uint32 ;
typedef int uint16 ;
struct TYPE_2__ {int* word; unsigned long long dword; } ;
typedef TYPE_1__ spi_buf_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,void*) ;
 void* FUNC_4 (int) ;

void FUNC_5(uint8 VAR_1, uint16 VAR_2, uint8 VAR_3, uint32 VAR_4)
{
    spi_buf_t VAR_5;
    uint8 VAR_6, VAR_7;

    if (VAR_1 > 1)
        return;
    if (VAR_3 > 32)
        return;


    VAR_6 = VAR_2 >> 5;
    if (VAR_6 > 15) {
        return;
    }

    while(FUNC_0(FUNC_1(VAR_1)) & VAR_0);


    VAR_5.word[1] = FUNC_0(FUNC_2(VAR_1) + VAR_6*4);
    VAR_5.word[1] = FUNC_4(VAR_5.word[1]);
    if (VAR_6 < 15) {
        VAR_5.word[0] = FUNC_0(FUNC_2(VAR_1) + (VAR_6+1)*4);
        VAR_5.word[0] = FUNC_4(VAR_5.word[0]);
    }

    VAR_7 = 64 - (VAR_2 & 0x1f) - VAR_3;
    VAR_5.dword &= ~(((1ULL << VAR_3)-1) << VAR_7);
    VAR_5.dword |= (uint64)VAR_4 << VAR_7;

    if (VAR_6 < 15) {
        FUNC_3(FUNC_2(VAR_1) + (VAR_6+1)*4, FUNC_4(VAR_5.word[0]));
    }
    FUNC_3(FUNC_2(VAR_1) + VAR_6*4, FUNC_4(VAR_5.word[1]));

    return;
}
