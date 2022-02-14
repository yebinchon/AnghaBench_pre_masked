
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int,scalar_t__*) ;
 int* VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_4(void) {
    uint32_t VAR_3[2], VAR_4[2], VAR_5[2], VAR_6, VAR_7;

    FUNC_3(VAR_0[0], VAR_2[0], VAR_3);
    FUNC_0(VAR_3[0], VAR_1, VAR_6);
    FUNC_0(VAR_3[1], VAR_6, VAR_7);
    FUNC_3(VAR_0[0], VAR_2[1], VAR_4);
    FUNC_0(VAR_3[1], VAR_4[0], VAR_6);
    FUNC_3(VAR_0[1], VAR_2[0], VAR_5);
    VAR_2[2] = FUNC_2(VAR_6 + VAR_7 + FUNC_1(VAR_3[1], VAR_5[0]) + VAR_4[1] + VAR_5[1] +
            VAR_0[0] * VAR_2[2] + VAR_0[1] * VAR_2[1] + VAR_0[2] * VAR_2[0]);
    VAR_2[1] = FUNC_2(VAR_3[1] + VAR_5[0]);
    VAR_2[0] = FUNC_2(VAR_3[0]);
}
