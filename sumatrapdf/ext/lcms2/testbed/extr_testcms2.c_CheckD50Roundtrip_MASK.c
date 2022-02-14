
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsS15Fixed16Number ;
typedef int cmsInt32Number ;
typedef double cmsFloat64Number ;


 int FUNC_0 () ;
 int FUNC_1 (char*,double) ;
 double FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,double) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double FUNC_4 (double) ;
 double FUNC_5 (double) ;

__attribute__((used)) static
cmsInt32Number FUNC_6(void)
{
    cmsFloat64Number VAR_3 = 0.96420288;
    cmsFloat64Number VAR_4 = 1.0;
    cmsFloat64Number VAR_5 = 0.82490540;

    cmsS15Fixed16Number VAR_6 = FUNC_3(FUNC_0(), VAR_0);
    cmsS15Fixed16Number VAR_7 = FUNC_3(FUNC_0(), VAR_1);
    cmsS15Fixed16Number VAR_8 = FUNC_3(FUNC_0(), VAR_2);

    cmsFloat64Number VAR_9 = FUNC_2(FUNC_0(), VAR_6);
    cmsFloat64Number VAR_10 = FUNC_2(FUNC_0(), VAR_7);
    cmsFloat64Number VAR_11 = FUNC_2(FUNC_0(), VAR_8);

    double VAR_12 = FUNC_4(VAR_0 - VAR_9);
    double VAR_13 = FUNC_4(VAR_1 - VAR_10);
    double VAR_14 = FUNC_4(VAR_2 - VAR_11);

    double VAR_15 = FUNC_5(VAR_12*VAR_12 + VAR_13*VAR_13 + VAR_14* VAR_14);

    if (VAR_15 > 1E-5) {

        FUNC_1("D50 roundtrip |err| > (%f) ", VAR_15);
        return 0;
    }

    VAR_6 = FUNC_3(FUNC_0(), VAR_3);
    VAR_7 = FUNC_3(FUNC_0(), VAR_4);
    VAR_8 = FUNC_3(FUNC_0(), VAR_5);

    VAR_9 = FUNC_2(FUNC_0(), VAR_6);
    VAR_10 = FUNC_2(FUNC_0(), VAR_7);
    VAR_11 = FUNC_2(FUNC_0(), VAR_8);

    VAR_12 = FUNC_4(VAR_3 - VAR_9);
    VAR_13 = FUNC_4(VAR_4 - VAR_10);
    VAR_14 = FUNC_4(VAR_5 - VAR_11);

    VAR_15 = FUNC_5(VAR_12*VAR_12 + VAR_13*VAR_13 + VAR_14* VAR_14);

    if (VAR_15 > 1E-5) {

        FUNC_1("D50 roundtrip |err| > (%f) ", VAR_15);
        return 0;
    }


    return 1;
}
