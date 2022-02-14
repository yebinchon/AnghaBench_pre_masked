
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt8Number ;
typedef int * cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int*,int*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int*,int) ;
 int VAR_2 ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,...) ;
 double FUNC_7 (double) ;

int FUNC_8(int VAR_3, char* VAR_4[])
{

    int VAR_5, VAR_6, VAR_7;
    cmsUInt8Number VAR_8[3], VAR_9[3];
    cmsHTRANSFORM VAR_10;
    cmsHPROFILE VAR_11;
    double VAR_12, VAR_13=0, VAR_14=0, VAR_15 = 0, VAR_16 = 0;


    if (VAR_3 != 2) {
        FUNC_6("roundtrip <RGB icc profile>\n");
        return 1;
    }

    VAR_11 = FUNC_5(VAR_4[1], "r");
    if (VAR_11 == ((void*)0))
    {
        FUNC_6("invalid profile\n");
        return 1;
    }

    VAR_10 = FUNC_2(VAR_11,VAR_1, VAR_11, VAR_1, VAR_0, VAR_2);
    if (VAR_10 == ((void*)0))
    {
        FUNC_6("Not a valid RGB profile\n");
        return 1;
    }

    for (VAR_5=0; VAR_5< 256; VAR_5++) {
        FUNC_6("%d  \r", VAR_5);
        for (VAR_6=0; VAR_6 < 256; VAR_6++) {
            for (VAR_7=0; VAR_7 < 256; VAR_7++) {

                VAR_8[0] = VAR_5;
                VAR_8[1] = VAR_6;
                VAR_8[2] = VAR_7;

                FUNC_4(VAR_10, VAR_8, VAR_9, 1);

                VAR_12 = FUNC_0(VAR_8, VAR_9);

                VAR_13 += VAR_12;
                VAR_14 += VAR_12 * VAR_12;
                VAR_16 += 1.0;
                if (VAR_12 > VAR_15)
                    VAR_15 = VAR_12;

            }
        }
    }

    FUNC_6("Average %g\n", VAR_13 / VAR_16);
    FUNC_6("Max %g\n", VAR_15);
    FUNC_6("Std  %g\n", FUNC_7((VAR_16*VAR_14 - VAR_13 * VAR_13) / (VAR_16*(VAR_16-1))));
    FUNC_1(VAR_11);
    FUNC_3(VAR_10);

    return 0;
}
