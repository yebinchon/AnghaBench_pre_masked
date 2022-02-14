
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 unsigned int* VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static inline void FUNC_2(unsigned char VAR_2, int* VAR_3, int* VAR_4)
{
    unsigned VAR_5;
    int VAR_6;

    VAR_2 &= 0x0F;

    VAR_5 = VAR_1[*VAR_3];
    VAR_6 = VAR_5 >> 3;
    if (VAR_2 & 1) VAR_6 += VAR_5 >> 2;
    if (VAR_2 & 2) VAR_6 += VAR_5 >> 1;
    if (VAR_2 & 4) VAR_6 += VAR_5;
    if (VAR_2 & 8) *VAR_4 -= VAR_6;
    else *VAR_4 += VAR_6;
    FUNC_0(VAR_4);
    *VAR_3 += VAR_0[VAR_2];
    FUNC_1(VAR_3);
}
