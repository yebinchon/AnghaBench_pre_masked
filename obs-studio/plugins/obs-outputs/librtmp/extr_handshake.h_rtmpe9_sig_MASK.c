
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int bf_key ;


 int VAR_0 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_2, uint8_t *VAR_3, int VAR_4)
{
    uint32_t VAR_5[2];
    bf_key VAR_6;

    FUNC_1(VAR_1[VAR_4], VAR_0, &VAR_6);


    VAR_5[0] = VAR_2[0] | (VAR_2[1] << 8) | (VAR_2[2] << 16) | (VAR_2[3] << 24);
    VAR_5[1] = VAR_2[4] | (VAR_2[5] << 8) | (VAR_2[6] << 16) | (VAR_2[7] << 24);
    FUNC_0(VAR_5, &VAR_6);
    VAR_3[0] = VAR_5[0] & 0xff;
    VAR_3[1] = (VAR_5[0] >> 8) & 0xff;
    VAR_3[2] = (VAR_5[0] >> 16) & 0xff;
    VAR_3[3] = (VAR_5[0] >> 24) & 0xff;
    VAR_3[4] = VAR_5[1] & 0xff;
    VAR_3[5] = (VAR_5[1] >> 8) & 0xff;
    VAR_3[6] = (VAR_5[1] >> 16) & 0xff;
    VAR_3[7] = (VAR_5[1] >> 24) & 0xff;
}
