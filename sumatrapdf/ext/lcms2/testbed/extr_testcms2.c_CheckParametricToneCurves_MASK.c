
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef double cmsFloat64Number ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,double*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static
cmsInt32Number FUNC_1(void)
{
    cmsFloat64Number VAR_9[10];



     VAR_9[0] = 2.2;

     if (!FUNC_0("Gamma", VAR_1, 1, VAR_9)) return 0;





     VAR_9[0] = 2.2;
     VAR_9[1] = 1.5;
     VAR_9[2] = -0.5;

     if (!FUNC_0("CIE122-1966", VAR_0, 2, VAR_9)) return 0;





     VAR_9[0] = 2.2;
     VAR_9[1] = 1.5;
     VAR_9[2] = -0.5;
     VAR_9[3] = 0.3;


     if (!FUNC_0("IEC 61966-3", VAR_3, 3, VAR_9)) return 0;





     VAR_9[0] = 2.4;
     VAR_9[1] = 1. / 1.055;
     VAR_9[2] = 0.055 / 1.055;
     VAR_9[3] = 1. / 12.92;
     VAR_9[4] = 0.04045;

     if (!FUNC_0("IEC 61966-2.1", VAR_2, 4, VAR_9)) return 0;





     VAR_9[0] = 2.2;
     VAR_9[1] = 0.7;
     VAR_9[2] = 0.2;
     VAR_9[3] = 0.3;
     VAR_9[4] = 0.1;
     VAR_9[5] = 0.5;
     VAR_9[6] = 0.2;

     if (!FUNC_0("param_5", VAR_4, 5, VAR_9)) return 0;



     VAR_9[0] = 2.2;
     VAR_9[1] = 0.7;
     VAR_9[2] = 0.2;
     VAR_9[3] = 0.3;

     if (!FUNC_0("param_6", VAR_5, 6, VAR_9)) return 0;



     VAR_9[0] = 2.2;
     VAR_9[1] = 0.9;
     VAR_9[2] = 0.9;
     VAR_9[3] = 0.02;
     VAR_9[4] = 0.1;

     if (!FUNC_0("param_7", VAR_6, 7, VAR_9)) return 0;



     VAR_9[0] = 0.9;
     VAR_9[1] = 0.9;
     VAR_9[2] = 1.02;
     VAR_9[3] = 0.1;
     VAR_9[4] = 0.2;

     if (!FUNC_0("param_8", VAR_7, 8, VAR_9)) return 0;



     VAR_9[0] = 1.9;
     if (!FUNC_0("sigmoidal", VAR_8, 108, VAR_9)) return 0;



     return 1;
}
