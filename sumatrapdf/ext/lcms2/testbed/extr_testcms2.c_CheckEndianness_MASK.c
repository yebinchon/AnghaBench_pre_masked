
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_1(void)
{
    cmsInt32Number VAR_0, VAR_1;
    union {
        long l;
        char c[sizeof (long)];
    } VAR_2;

    VAR_2.l = 1;
    VAR_0 = (VAR_2.c[sizeof (long) - 1] == 1);




    VAR_1 = !VAR_0;


    if (!VAR_1) {
        FUNC_0("\nOOOPPSS! You have CMS_USE_BIG_ENDIAN toggle misconfigured!\n\n"
            "Please, edit lcms2mt.h and %s the CMS_USE_BIG_ENDIAN toggle.\n", VAR_0? "uncomment" : "comment");
        return 0;
    }

    return 1;
}
