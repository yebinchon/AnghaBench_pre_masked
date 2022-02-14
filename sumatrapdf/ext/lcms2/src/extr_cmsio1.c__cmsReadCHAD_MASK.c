
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsMAT3 ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;
typedef int cmsCIEXYZ ;
typedef int cmsBool ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

cmsBool FUNC_7(cmsContext VAR_4, cmsMAT3* VAR_5, cmsHPROFILE VAR_6)
{
    cmsMAT3* VAR_7;

    FUNC_1(VAR_5 != ((void*)0));

    VAR_7 = (cmsMAT3*) FUNC_6(VAR_4, VAR_6, VAR_1);

    if (VAR_7 != ((void*)0)) {
        *VAR_5 = *VAR_7;
        return VAR_0;
    }


    FUNC_2(VAR_4, VAR_5);


    if (FUNC_5(VAR_4, VAR_6) < 0x4000000) {

        if (FUNC_4(VAR_4, VAR_6) == VAR_2) {

            cmsCIEXYZ* VAR_8 = (cmsCIEXYZ*) FUNC_6(VAR_4, VAR_6, VAR_3);

            if (VAR_8 == ((void*)0)) {

                FUNC_2(VAR_4, VAR_5);
                return VAR_0;
            }

            return FUNC_0(VAR_4, VAR_5, ((void*)0), VAR_8, FUNC_3(VAR_4));
        }
    }

    return VAR_0;
}
