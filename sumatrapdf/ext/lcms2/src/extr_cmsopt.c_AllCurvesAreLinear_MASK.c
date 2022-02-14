
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t cmsUInt32Number ;
typedef int cmsToneCurve ;
typedef int cmsStage ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int ** FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 size_t FUNC_2 (int ,int *) ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_2, cmsStage* VAR_3)
{
    cmsToneCurve** VAR_4;
    cmsUInt32Number VAR_5, VAR_6;

    VAR_4 = FUNC_0(VAR_3);
    if (VAR_4 == ((void*)0)) return VAR_0;

    VAR_6 = FUNC_2(VAR_2, VAR_3);

    for (VAR_5=0; VAR_5 < VAR_6; VAR_5++) {
        if (!FUNC_1(VAR_2, VAR_4[VAR_5])) return VAR_0;
    }

    return VAR_1;
}
