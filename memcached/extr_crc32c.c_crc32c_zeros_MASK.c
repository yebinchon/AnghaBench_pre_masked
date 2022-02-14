
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int*,size_t) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static void FUNC_2(uint32_t VAR_0[][256], size_t VAR_1)
{
    uint32_t VAR_2;
    uint32_t VAR_3[32];

    FUNC_0(VAR_3, VAR_1);
    for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
        VAR_0[0][VAR_2] = FUNC_1(VAR_3, VAR_2);
        VAR_0[1][VAR_2] = FUNC_1(VAR_3, VAR_2 << 8);
        VAR_0[2][VAR_2] = FUNC_1(VAR_3, VAR_2 << 16);
        VAR_0[3][VAR_2] = FUNC_1(VAR_3, VAR_2 << 24);
    }
}
