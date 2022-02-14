
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(unsigned char *VAR_0)
{
    u32 VAR_1 = 16, VAR_2 = 1;

    do {
        --VAR_1;
        VAR_2 += VAR_0[VAR_1];
        VAR_0[VAR_1] = (u8)VAR_2;
        VAR_2 >>= 8;
    } while (VAR_1);
}
