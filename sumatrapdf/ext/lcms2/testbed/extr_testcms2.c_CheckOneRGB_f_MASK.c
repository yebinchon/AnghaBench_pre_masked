
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int cmsFloat64Number ;
typedef scalar_t__ cmsFloat32Number ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__*,int *,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(cmsHTRANSFORM VAR_0, cmsInt32Number VAR_1, cmsInt32Number VAR_2, cmsInt32Number VAR_3, cmsFloat64Number VAR_4, cmsFloat64Number VAR_5, cmsFloat64Number VAR_6, cmsFloat64Number VAR_7)
{
    cmsFloat32Number VAR_8[3];
    cmsFloat64Number VAR_9[3];

    VAR_8[0] = (cmsFloat32Number) (VAR_1 / 255.0);
    VAR_8[1] = (cmsFloat32Number) (VAR_2 / 255.0);
    VAR_8[2] = (cmsFloat32Number) (VAR_3 / 255.0);

    FUNC_2(FUNC_0(), VAR_0, VAR_8, VAR_9, 1);

    return FUNC_1("X", VAR_4 , VAR_9[0], VAR_7) &&
           FUNC_1("Y", VAR_5 , VAR_9[1], VAR_7) &&
           FUNC_1("Z", VAR_6 , VAR_9[2], VAR_7);
}
