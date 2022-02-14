
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MV_U8 ;
typedef int MV_U32 ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

void FUNC_1(MV_U8 VAR_1[4][VAR_0], MV_U8 VAR_2[4][VAR_0]) {


 MV_U8 VAR_3[4][VAR_0];
 int VAR_4, VAR_5;

 for(VAR_5 = 0; VAR_5 < 4; VAR_5++){
        VAR_3[0][VAR_5] = FUNC_0(25,VAR_1[0][VAR_5]) ^ FUNC_0(1,VAR_1[1][VAR_5]) ^ VAR_1[2][VAR_5] ^ VAR_1[3][VAR_5];
        VAR_3[1][VAR_5] = FUNC_0(25,VAR_1[1][VAR_5]) ^ FUNC_0(1,VAR_1[2][VAR_5]) ^ VAR_1[3][VAR_5] ^ VAR_1[0][VAR_5];
        VAR_3[2][VAR_5] = FUNC_0(25,VAR_1[2][VAR_5]) ^ FUNC_0(1,VAR_1[3][VAR_5]) ^ VAR_1[0][VAR_5] ^ VAR_1[1][VAR_5];
        VAR_3[3][VAR_5] = FUNC_0(25,VAR_1[3][VAR_5]) ^ FUNC_0(1,VAR_1[0][VAR_5]) ^ VAR_1[1][VAR_5] ^ VAR_1[2][VAR_5];
    }
 for(VAR_4 = 0; VAR_4 < 4; VAR_4++)

        ((MV_U32*)(&(VAR_1[VAR_4][0])))[0] = ((MV_U32*)(&(VAR_3[VAR_4][0])))[0] ^ ((MV_U32*)(&(VAR_2[VAR_4][0])))[0];
}
