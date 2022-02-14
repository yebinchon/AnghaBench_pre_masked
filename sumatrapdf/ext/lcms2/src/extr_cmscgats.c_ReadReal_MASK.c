
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsInt32Number ;
struct TYPE_4__ {double dnum; char ch; } ;
typedef TYPE_1__ cmsIT8 ;
typedef double cmsFloat64Number ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char) ;
 char FUNC_2 (char) ;
 double FUNC_3 (int) ;

__attribute__((used)) static
void FUNC_4(cmsIT8* VAR_0, cmsInt32Number VAR_1)
{
    VAR_0->dnum = (cmsFloat64Number)VAR_1;

    while (FUNC_1(VAR_0->ch)) {

        VAR_0->dnum = (cmsFloat64Number)VAR_0->dnum * 10.0 + (cmsFloat64Number)(VAR_0->ch - '0');
        FUNC_0(VAR_0);
    }

    if (VAR_0->ch == '.') {

        cmsFloat64Number VAR_2 = 0.0;
        int VAR_3 = 0;

        FUNC_0(VAR_0);

        while (FUNC_1(VAR_0->ch)) {

            VAR_2 = VAR_2 * 10.0 + (cmsFloat64Number)(VAR_0->ch - '0');
            VAR_3++;
            FUNC_0(VAR_0);
        }

        VAR_0->dnum = VAR_0->dnum + (VAR_2 / FUNC_3(VAR_3));
    }


    if (FUNC_2(VAR_0->ch) == 'E') {

        cmsInt32Number VAR_4;
        cmsInt32Number VAR_5;

        FUNC_0(VAR_0); VAR_5 = 1;

        if (VAR_0->ch == '-') {

            VAR_5 = -1; FUNC_0(VAR_0);
        }
        else
            if (VAR_0->ch == '+') {

                VAR_5 = +1;
                FUNC_0(VAR_0);
            }

        VAR_4 = 0;
        while (FUNC_1(VAR_0->ch)) {

            cmsInt32Number VAR_6 = (VAR_0->ch - '0');

            if ((cmsFloat64Number)VAR_4 * 10.0 + (cmsFloat64Number)VAR_6 < (cmsFloat64Number)+2147483647.0)
                VAR_4 = VAR_4 * 10 + VAR_6;

            FUNC_0(VAR_0);
        }

        VAR_4 = VAR_5*VAR_4;
        VAR_0->dnum = VAR_0->dnum * FUNC_3(VAR_4);
    }
}
