
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsInt32Number ;
typedef scalar_t__ cmsFloat64Number ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static
cmsInt32Number FUNC_2(void)
{
    cmsUInt32Number VAR_0;

    for (VAR_0=0; VAR_0 < 65535; VAR_0++) {

        if (FUNC_1((cmsFloat64Number) VAR_0 + 0.1234) != VAR_0) {

            FUNC_0("\nOOOPPSS! _cmsQuickFloorWord() does not work as expected in your machine!\n\n"
                "Please, edit lcms2mt.h and uncomment the CMS_DONT_USE_FAST_FLOOR toggle.\n");
            return 0;
        }
    }

    return 1;
}
