
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsFloat64Number ;
typedef int const cmsFloat32Number ;


 int const FUNC_0 (int,int const) ;

__attribute__((used)) static
cmsFloat32Number FUNC_1(cmsFloat32Number VAR_0, const cmsFloat64Number VAR_1[])
{
    cmsFloat64Number VAR_2, VAR_3;

    if (VAR_0 >= -VAR_1[2] / VAR_1[1]) {

        VAR_2 = VAR_1[1]*VAR_0 + VAR_1[2];

        if (VAR_2 > 0)
            VAR_3 = FUNC_0(VAR_2, VAR_1[0]) + VAR_1[3];
        else
            VAR_3 = 0;
    }
    else
        VAR_3 = VAR_1[3];

    return (cmsFloat32Number) VAR_3;
}
