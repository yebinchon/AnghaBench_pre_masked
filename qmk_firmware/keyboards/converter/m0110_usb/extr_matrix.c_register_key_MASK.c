
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int* VAR_0 ;

__attribute__((used)) inline
static void FUNC_2(uint8_t VAR_1)
{
    if (VAR_1&0x80) {
        VAR_0[FUNC_1(VAR_1)] &= ~(1<<FUNC_0(VAR_1));
    } else {
        VAR_0[FUNC_1(VAR_1)] |= (1<<FUNC_0(VAR_1));
    }
}
