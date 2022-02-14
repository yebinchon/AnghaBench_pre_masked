
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ MV_U8 ;
typedef int MV_U32 ;


 int VAR_0 ;

void FUNC_0(MV_U8 VAR_1[4][VAR_0]) {



    MV_U8 VAR_2[VAR_0];

    VAR_2[0] = VAR_1[1][3];
    VAR_2[1] = VAR_1[1][0];
    VAR_2[2] = VAR_1[1][1];
    VAR_2[3] = VAR_1[1][2];

    ((MV_U32*)(&(VAR_1[1][0])))[0] = ((MV_U32*)(&(VAR_2[0])))[0];







    VAR_2[0] = VAR_1[2][2];
    VAR_2[1] = VAR_1[2][3];
    VAR_2[2] = VAR_1[2][0];
    VAR_2[3] = VAR_1[2][1];

    ((MV_U32*)(&(VAR_1[2][0])))[0] = ((MV_U32*)(&(VAR_2[0])))[0];







    VAR_2[0] = VAR_1[3][1];
    VAR_2[1] = VAR_1[3][2];
    VAR_2[2] = VAR_1[3][3];
    VAR_2[3] = VAR_1[3][0];

    ((MV_U32*)(&(VAR_1[3][0])))[0] = ((MV_U32*)(&(VAR_2[0])))[0];






}
