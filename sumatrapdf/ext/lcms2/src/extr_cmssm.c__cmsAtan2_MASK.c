
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double cmsFloat64Number ;


 double VAR_0 ;
 double FUNC_0 (double,double) ;

__attribute__((used)) static
cmsFloat64Number FUNC_1(cmsFloat64Number VAR_1, cmsFloat64Number VAR_2)
{
    cmsFloat64Number VAR_3;


    if (VAR_2 == 0.0 && VAR_1 == 0.0) return 0;

    VAR_3 = (FUNC_0(VAR_1, VAR_2) * 180.0) / VAR_0;

    while (VAR_3 < 0) {
        VAR_3 += 360;
    }

    return VAR_3;
}
