
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;


 int FUNC_0 (char*) ;
 int FUNC_1 (double) ;

__attribute__((used)) static
cmsInt32Number FUNC_2(void)
{
    if ((FUNC_1(1.234) != 1) ||
        (FUNC_1(32767.234) != 32767) ||
        (FUNC_1(-1.234) != -2) ||
        (FUNC_1(-32767.1) != -32768)) {

            FUNC_0("\nOOOPPSS! _cmsQuickFloor() does not work as expected in your machine!\n\n"
                "Please, edit lcms2mt.h and uncomment the CMS_DONT_USE_FAST_FLOOR toggle.\n");
            return 0;

    }

    return 1;
}
