
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int* felem ;



__attribute__((used)) static void FUNC_0(u8 VAR_0[28], const felem VAR_1)
{
    unsigned VAR_2;
    for (VAR_2 = 0; VAR_2 < 7; ++VAR_2) {
        VAR_0[VAR_2] = VAR_1[0] >> (8 * VAR_2);
        VAR_0[VAR_2 + 7] = VAR_1[1] >> (8 * VAR_2);
        VAR_0[VAR_2 + 14] = VAR_1[2] >> (8 * VAR_2);
        VAR_0[VAR_2 + 21] = VAR_1[3] >> (8 * VAR_2);
    }
}
