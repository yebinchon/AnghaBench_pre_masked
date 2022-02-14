
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsHPROFILE ;
typedef int cmsContext ;
typedef int cmsCIEXYZ ;
typedef int cmsBool ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

cmsBool FUNC_5(cmsContext VAR_3, cmsCIEXYZ* VAR_4, cmsHPROFILE VAR_5)
{
    cmsCIEXYZ* VAR_6;

    FUNC_0(VAR_4 != ((void*)0));

    VAR_6 = (cmsCIEXYZ*) FUNC_4(VAR_3, VAR_5, VAR_2);


    if (VAR_6 == ((void*)0)) {
        *VAR_4 = *FUNC_1(VAR_3);
        return VAR_0;
    }


    if (FUNC_3(VAR_3, VAR_5) < 0x4000000) {

        if (FUNC_2(VAR_3, VAR_5) == VAR_1) {
            *VAR_4 = *FUNC_1(VAR_3);
            return VAR_0;
        }
    }


    *VAR_4 = *VAR_6;
    return VAR_0;
}
