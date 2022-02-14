
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
cmsInt32Number FUNC_3(cmsHTRANSFORM VAR_1, cmsHTRANSFORM VAR_2, cmsInt32Number VAR_3)
{
    cmsInt32Number VAR_4, VAR_5;
    cmsFloat32Number VAR_6[VAR_0], VAR_7[VAR_0], VAR_8[VAR_0];

    for (VAR_5=0; VAR_5 < 0xFFFF; VAR_5++) {

        for (VAR_4=0; VAR_4 < VAR_3; VAR_4++) VAR_6[VAR_4] = (cmsFloat32Number) (VAR_5 / 65535.0);;

        FUNC_2(FUNC_0(), VAR_1, VAR_6, VAR_7, 1);
        FUNC_2(FUNC_0(), VAR_2, VAR_6, VAR_8, 1);

        for (VAR_4=0; VAR_4 < VAR_3; VAR_4++) {


            if (!FUNC_1("linear xform cmsFloat32Number", VAR_7[VAR_4], VAR_8[VAR_4]))
                return 0;
        }

    }

    return 1;
}
