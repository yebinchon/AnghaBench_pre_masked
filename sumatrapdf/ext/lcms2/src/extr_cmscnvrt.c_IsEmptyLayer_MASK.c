
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsVEC3 ;
typedef int cmsMAT3 ;
typedef double cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (double) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_2, cmsMAT3* VAR_3, cmsVEC3* VAR_4)
{
    cmsFloat64Number VAR_5 = 0;
    cmsMAT3 VAR_6;
    int VAR_7;

    if (VAR_3 == ((void*)0) && VAR_4 == ((void*)0)) return VAR_1;
    if (VAR_3 == ((void*)0) && VAR_4 != ((void*)0)) return VAR_0;

    FUNC_0(VAR_2, &VAR_6);

    for (VAR_7=0; VAR_7 < 3*3; VAR_7++)
        VAR_5 += FUNC_1(((cmsFloat64Number*)VAR_3)[VAR_7] - ((cmsFloat64Number*)&VAR_6)[VAR_7]);

    for (VAR_7=0; VAR_7 < 3; VAR_7++)
        VAR_5 += FUNC_1(((cmsFloat64Number*)VAR_4)[VAR_7]);


    return (VAR_5 < 0.002);
}
