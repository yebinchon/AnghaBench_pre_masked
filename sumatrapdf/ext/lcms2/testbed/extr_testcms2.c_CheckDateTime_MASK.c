
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_hour; int tm_min; int tm_sec; int tm_mday; int tm_mon; int tm_year; } ;
typedef int cmsTagSignature ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,struct tm*) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(cmsInt32Number VAR_0, cmsHPROFILE VAR_1, cmsTagSignature VAR_2)
{
    struct tm *VAR_3, VAR_4;

    switch (VAR_0) {

        case 1:

            VAR_4.tm_hour = 1;
            VAR_4.tm_min = 2;
            VAR_4.tm_sec = 3;
            VAR_4.tm_mday = 4;
            VAR_4.tm_mon = 5;
            VAR_4.tm_year = 2009 - 1900;
            return FUNC_2(FUNC_0(), VAR_1, VAR_2, &VAR_4);

        case 2:
            VAR_3 = (struct tm *) FUNC_1(FUNC_0(), VAR_1, VAR_2);
            if (VAR_3 == ((void*)0)) return 0;

            return (VAR_3 ->tm_hour == 1 &&
                VAR_3 ->tm_min == 2 &&
                VAR_3 ->tm_sec == 3 &&
                VAR_3 ->tm_mday == 4 &&
                VAR_3 ->tm_mon == 5 &&
                VAR_3 ->tm_year == 2009 - 1900);

        default:
            return 0;
    }

}
