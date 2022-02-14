
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsS1Fixed14Number ;
typedef int cmsContext ;
struct TYPE_2__ {int* Shaper1R; int* Shaper1G; int* Shaper1B; int** Mat; int* Off; int* Shaper2R; int* Shaper2G; int* Shaper2B; } ;
typedef TYPE_1__ MatShaper8Data ;


 int FUNC_0 (int ) ;

__attribute__((used)) static
void FUNC_1(cmsContext VAR_0, register const cmsUInt16Number VAR_1[],
                     register cmsUInt16Number VAR_2[],
                     register const void* VAR_3)
{
    MatShaper8Data* VAR_4 = (MatShaper8Data*) VAR_3;
    cmsS1Fixed14Number VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    cmsUInt32Number VAR_11, VAR_12, VAR_13;
    FUNC_0(VAR_0);



    VAR_11 = VAR_1[0] & 0xFFU;
    VAR_12 = VAR_1[1] & 0xFFU;
    VAR_13 = VAR_1[2] & 0xFFU;


    VAR_8 = VAR_4->Shaper1R[VAR_11];
    VAR_9 = VAR_4->Shaper1G[VAR_12];
    VAR_10 = VAR_4->Shaper1B[VAR_13];


    VAR_5 = (VAR_4->Mat[0][0] * VAR_8 + VAR_4->Mat[0][1] * VAR_9 + VAR_4->Mat[0][2] * VAR_10 + VAR_4->Off[0] + 0x2000) >> 14;
    VAR_6 = (VAR_4->Mat[1][0] * VAR_8 + VAR_4->Mat[1][1] * VAR_9 + VAR_4->Mat[1][2] * VAR_10 + VAR_4->Off[1] + 0x2000) >> 14;
    VAR_7 = (VAR_4->Mat[2][0] * VAR_8 + VAR_4->Mat[2][1] * VAR_9 + VAR_4->Mat[2][2] * VAR_10 + VAR_4->Off[2] + 0x2000) >> 14;


    VAR_11 = (VAR_5 < 0) ? 0 : ((VAR_5 > 16384) ? 16384U : (cmsUInt32Number) VAR_5);
    VAR_12 = (VAR_6 < 0) ? 0 : ((VAR_6 > 16384) ? 16384U : (cmsUInt32Number) VAR_6);
    VAR_13 = (VAR_7 < 0) ? 0 : ((VAR_7 > 16384) ? 16384U : (cmsUInt32Number) VAR_7);


    VAR_2[0] = VAR_4->Shaper2R[VAR_11];
    VAR_2[1] = VAR_4->Shaper2G[VAR_12];
    VAR_2[2] = VAR_4->Shaper2B[VAR_13];

}
