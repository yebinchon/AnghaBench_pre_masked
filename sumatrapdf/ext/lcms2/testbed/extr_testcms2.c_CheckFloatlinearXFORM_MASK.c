
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef scalar_t__ cmsFloat32Number ;


 int FUNC_0 () ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__*,scalar_t__*,int) ;
 int VAR_0 ;

__attribute__((used)) static
cmsInt32Number FUNC_3(cmsHTRANSFORM VAR_1, cmsInt32Number VAR_2)
{
    cmsInt32Number VAR_3, VAR_4;
    cmsFloat32Number VAR_5[VAR_0], VAR_6[VAR_0];

    for (VAR_4=0; VAR_4 < 0xFFFF; VAR_4++) {

        for (VAR_3=0; VAR_3 < VAR_2; VAR_3++) VAR_5[VAR_3] = (cmsFloat32Number) (VAR_4 / 65535.0);;

        FUNC_2(FUNC_0(), VAR_1, VAR_5, VAR_6, 1);

        for (VAR_3=0; VAR_3 < VAR_2; VAR_3++) {


            if (!FUNC_1("linear xform cmsFloat32Number", VAR_6[VAR_3], (cmsFloat32Number) (VAR_4 / 65535.0)))
                return 0;
        }
    }

    return 1;
}
