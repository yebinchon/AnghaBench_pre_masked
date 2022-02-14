
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef int cmsStage ;
typedef int cmsPipeline ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_2__ {int nCurves; int * TheCurves; } ;
typedef TYPE_1__ _cmsStageToneCurvesData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,int *,int *,int *) ;
 double FUNC_1 (int ,int ,double) ;
 int VAR_3 ;
 int * FUNC_2 (int ,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static
cmsBool FUNC_6(cmsContext VAR_5, cmsPipeline** VAR_6,
                   cmsUInt32Number VAR_7,
                   cmsUInt32Number* VAR_8,
                   cmsUInt32Number* VAR_9,
                   cmsUInt32Number* VAR_10)
{
    cmsStage* VAR_11;
     _cmsStageToneCurvesData* VAR_12;


    for (VAR_11 = FUNC_2(VAR_5, *VAR_6);
         VAR_11 != ((void*)0);
         VAR_11 = FUNC_4(VAR_5, VAR_11)) {

            if (FUNC_5(VAR_5, VAR_11) != VAR_4) return VAR_0;


            VAR_12 = (_cmsStageToneCurvesData*) FUNC_3(VAR_5, VAR_11);
            if (VAR_12 ->nCurves != 1) return VAR_0;
            if (FUNC_1(VAR_5, VAR_12->TheCurves[0], 0.1) > 1.0) return VAR_0;

    }

    *VAR_10 |= VAR_3;
    FUNC_0(VAR_5, *VAR_6, VAR_1, ((void*)0), ((void*)0), ((void*)0));

    return VAR_2;
}
