
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ge_p3 ;
typedef int az ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int const*,int,int*) ;
 int VAR_0 ;
 int FUNC_2 (int*,int *) ;
 int FUNC_3 (int *,int*) ;

void FUNC_4(uint8_t VAR_1[32],
                                 const uint8_t VAR_2[32])
{
    uint8_t VAR_3[VAR_0];
    ge_p3 VAR_4;

    FUNC_1(VAR_2, 32, VAR_3);

    VAR_3[0] &= 248;
    VAR_3[31] &= 63;
    VAR_3[31] |= 64;

    FUNC_3(&VAR_4, VAR_3);
    FUNC_2(VAR_1, &VAR_4);

    FUNC_0(VAR_3, sizeof(VAR_3));
}
