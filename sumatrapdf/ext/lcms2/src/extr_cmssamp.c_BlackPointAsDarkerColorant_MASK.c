
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int * cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;
typedef int cmsContext ;
typedef int cmsColorSpaceSignature ;
struct TYPE_7__ {double X; double Y; double Z; } ;
typedef TYPE_1__ cmsCIEXYZ ;
struct TYPE_8__ {int L; scalar_t__ b; scalar_t__ a; } ;
typedef TYPE_2__ cmsCIELab ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *,int **,scalar_t__*) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,int *,scalar_t__,int *,int ,scalar_t__,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,int *,TYPE_2__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ,int *,int,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *,scalar_t__,int ) ;
 int FUNC_10 (int ,int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static
cmsBool FUNC_12(cmsContext VAR_6,
                                    cmsHPROFILE VAR_7,
                                    cmsUInt32Number VAR_8,
                                    cmsCIEXYZ* VAR_9,
                                    cmsUInt32Number VAR_10)
{
    cmsUInt16Number *VAR_11;
    cmsHTRANSFORM VAR_12;
    cmsColorSpaceSignature VAR_13;
    cmsUInt32Number VAR_14;
    cmsUInt32Number VAR_15;
    cmsHPROFILE VAR_16;
    cmsCIELab VAR_17;
    cmsCIEXYZ VAR_18;


    if (!FUNC_9(VAR_6, VAR_7, VAR_8, VAR_1)) {

        VAR_9 -> X = VAR_9 ->Y = VAR_9 -> Z = 0.0;
        return VAR_0;
    }


    VAR_15 = FUNC_7(VAR_6, VAR_7, 2, VAR_0);


    VAR_13 = FUNC_8(VAR_6, VAR_7);


    if (!FUNC_1(VAR_13, ((void*)0), &VAR_11, &VAR_14)) {

        VAR_9 -> X = VAR_9 ->Y = VAR_9 -> Z = 0.0;
        return VAR_0;
    }

    if (VAR_14 != FUNC_0(VAR_15)) {
       VAR_9 -> X = VAR_9 ->Y = VAR_9 -> Z = 0.0;
       return VAR_0;
    }


    VAR_16 = FUNC_3(VAR_6, ((void*)0));
    if (VAR_16 == ((void*)0)) {
       VAR_9 -> X = VAR_9 ->Y = VAR_9 -> Z = 0.0;
       return VAR_0;
    }


    VAR_12 = FUNC_4(VAR_6, VAR_7, VAR_15,
                                VAR_16, VAR_3, VAR_8, VAR_5|VAR_4);
    FUNC_2(VAR_6, VAR_16);

    if (VAR_12 == ((void*)0)) {


        VAR_9 -> X = VAR_9 ->Y = VAR_9 -> Z = 0.0;
        return VAR_0;
    }


    FUNC_6(VAR_6, VAR_12, VAR_11, &VAR_17, 1);


    VAR_17.a = VAR_17.b = 0;
    if (VAR_17.L > 50) VAR_17.L = 50;


    FUNC_5(VAR_6, VAR_12);


    FUNC_10(VAR_6, ((void*)0), &VAR_18, &VAR_17);

    if (VAR_9 != ((void*)0))
        *VAR_9 = VAR_18;

    return VAR_2;

    FUNC_11(VAR_10);
}
