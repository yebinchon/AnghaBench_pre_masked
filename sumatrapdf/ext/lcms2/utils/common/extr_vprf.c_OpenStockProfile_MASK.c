
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;
typedef int cmsCIExyY ;


 int * FUNC_0 (int ,double) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int **) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,char const*,char*) ;
 int VAR_0 ;
 int FUNC_11 (int ,int *,int) ;
 scalar_t__ FUNC_12 (char const*,char*) ;

cmsHPROFILE FUNC_13(cmsContext VAR_1, const char* VAR_2)
{
       if (!VAR_2)
            return FUNC_7(VAR_1);

       if (FUNC_12(VAR_2, "*Lab2") == 0)
                return FUNC_2(VAR_1, ((void*)0));

       if (FUNC_12(VAR_2, "*Lab4") == 0)
                return FUNC_3(VAR_1, ((void*)0));

       if (FUNC_12(VAR_2, "*Lab") == 0)
                return FUNC_3(VAR_1, ((void*)0));

       if (FUNC_12(VAR_2, "*LabD65") == 0) {

           cmsCIExyY VAR_3;

           FUNC_11(VAR_1, &VAR_3, 6504);
           return FUNC_3(VAR_1, &VAR_3);
       }

       if (FUNC_12(VAR_2, "*XYZ") == 0)
                return FUNC_6(VAR_1);

       if (FUNC_12(VAR_2, "*Gray22") == 0) {

           cmsToneCurve* VAR_4 = FUNC_0(VAR_1, 2.2);
           cmsHPROFILE VAR_5 = FUNC_1(VAR_1, FUNC_8(VAR_1), VAR_4);
           FUNC_9(VAR_1, VAR_4);
           return VAR_5;
       }

        if (FUNC_12(VAR_2, "*Gray30") == 0) {

           cmsToneCurve* VAR_6 = FUNC_0(VAR_1, 3.0);
           cmsHPROFILE VAR_7 = FUNC_1(VAR_1, FUNC_8(VAR_1), VAR_6);
           FUNC_9(VAR_1, VAR_6);
           return VAR_7;
       }

       if (FUNC_12(VAR_2, "*srgb") == 0)
                return FUNC_7(VAR_1);

       if (FUNC_12(VAR_2, "*null") == 0)
                return FUNC_5(VAR_1);


       if (FUNC_12(VAR_2, "*Lin2222") == 0) {

            cmsToneCurve* VAR_8 = FUNC_0(0, 2.2);
            cmsToneCurve* VAR_9[4];
            cmsHPROFILE VAR_10;

            VAR_9[0] = VAR_9[1] = VAR_9[2] = VAR_9[3] = VAR_8;
            VAR_10 = FUNC_4(VAR_1, VAR_0, VAR_9);
            FUNC_9(VAR_1, VAR_8);
            return VAR_10;
       }


        return FUNC_10(VAR_1, VAR_2, "r");
}
