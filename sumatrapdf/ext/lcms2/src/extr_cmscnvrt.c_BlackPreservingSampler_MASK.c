
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef double cmsUInt16Number ;
typedef double cmsFloat64Number ;
typedef double cmsFloat32Number ;
typedef int cmsContext ;
typedef double cmsCIELab ;
struct TYPE_2__ {double MaxTAC; double MaxError; int hProofOutput; int LabK2cmyk; int cmyk2Lab; int cmyk2cmyk; int KTone; } ;
typedef TYPE_1__ PreserveKPlaneParams ;


 int VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (int ,double*,double*) ;
 int FUNC_2 (int ,int ,double*,double*,int) ;
 double FUNC_3 (int ,int ,double) ;
 int FUNC_4 (int ,double*,double*,int ) ;
 int FUNC_5 (int ,double*,double*,double*,int ) ;
 double FUNC_6 (double) ;

__attribute__((used)) static
int FUNC_7(cmsContext VAR_1, register const cmsUInt16Number VAR_2[], register cmsUInt16Number VAR_3[], register void* VAR_4)
{
    int VAR_5;
    cmsFloat32Number VAR_6[4], VAR_7[4];
    cmsFloat32Number VAR_8[4];
    cmsFloat64Number VAR_9, VAR_10, VAR_11, VAR_12;
    cmsCIELab VAR_13, VAR_14;
    PreserveKPlaneParams* VAR_15 = (PreserveKPlaneParams*) VAR_4;


    for (VAR_5=0; VAR_5 < 4; VAR_5++)
        VAR_6[VAR_5] = (cmsFloat32Number) (VAR_2[VAR_5] / 65535.0);


    VAR_8[3] = FUNC_3(VAR_1, VAR_15 ->KTone, VAR_6[3]);


    if (VAR_2[0] == 0 && VAR_2[1] == 0 && VAR_2[2] == 0) {

        VAR_3[0] = VAR_3[1] = VAR_3[2] = 0;
        VAR_3[3] = FUNC_0(VAR_8[3] * 65535.0);
        return VAR_0;
    }


    FUNC_4(VAR_1, VAR_6, VAR_7, VAR_15 ->cmyk2cmyk);


    for (VAR_5=0; VAR_5 < 4; VAR_5++)
            VAR_3[VAR_5] = FUNC_0(VAR_7[VAR_5] * 65535.0);


    if ( FUNC_6(VAR_7[3] - VAR_8[3]) < (3.0 / 65535.0) ) {
        return VAR_0;
    }



    FUNC_2(VAR_1, VAR_15->hProofOutput, VAR_3, &VAR_13, 1);



    FUNC_2(VAR_1, VAR_15 ->cmyk2Lab, VAR_7, VAR_8, 1);



    if (!FUNC_5(VAR_1, VAR_8, VAR_7, VAR_7, VAR_15 ->LabK2cmyk)) {



        return VAR_0;
    }


    VAR_7[3] = VAR_8[3];


    VAR_9 = VAR_7[0] + VAR_7[1] + VAR_7[2];
    VAR_10 = VAR_9 + VAR_7[3];

    if (VAR_10 > VAR_15 ->MaxTAC) {

        VAR_12 = 1 - ((VAR_10 - VAR_15->MaxTAC) / VAR_9);
        if (VAR_12 < 0)
            VAR_12 = 0;
    }
    else
       VAR_12 = 1.0;

    VAR_3[0] = FUNC_0(VAR_7[0] * VAR_12 * 65535.0);
    VAR_3[1] = FUNC_0(VAR_7[1] * VAR_12 * 65535.0);
    VAR_3[2] = FUNC_0(VAR_7[2] * VAR_12 * 65535.0);
    VAR_3[3] = FUNC_0(VAR_7[3] * 65535.0);


    FUNC_2(VAR_1, VAR_15->hProofOutput, VAR_3, &VAR_14, 1);
    VAR_11 = FUNC_1(VAR_1, &VAR_13, &VAR_14);
    if (VAR_11 > VAR_15 -> MaxError)
        VAR_15->MaxError = VAR_11;

    return VAR_0;
}
