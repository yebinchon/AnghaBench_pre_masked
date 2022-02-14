
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsFloat64Number ;
typedef int cmsFloat32Number ;


 int const FUNC_0 (int const) ;
 int const FUNC_1 (int ,int const) ;

__attribute__((used)) static
cmsFloat32Number FUNC_2(cmsFloat32Number VAR_0, const cmsFloat64Number VAR_1[])
{
    cmsFloat64Number VAR_2;


    VAR_2 = VAR_1[1]*FUNC_0(VAR_1[2] * FUNC_1(VAR_0, VAR_1[0]) + VAR_1[3]) + VAR_1[4];

    return (cmsFloat32Number) VAR_2;
}
