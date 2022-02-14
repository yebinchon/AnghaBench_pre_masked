
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int ,int *,int ,int ,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,unsigned char*,unsigned char*,int,int) ;
 int * FUNC_6 (int ,char*,char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_7(void)
{

       cmsHPROFILE VAR_2;
       cmsHPROFILE VAR_3;
       cmsHTRANSFORM VAR_4;
       unsigned char VAR_5[3] = { 127, 32, 64 };


       VAR_2 = FUNC_3(FUNC_0());
       VAR_3 = FUNC_6(FUNC_0(), "ibm-t61.icc", "r");
       if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
              return 0;

       VAR_4 = FUNC_2(FUNC_0(), VAR_2, VAR_1, VAR_3, VAR_1, VAR_0, 0);
       FUNC_5(FUNC_0(), VAR_4, VAR_5, VAR_5, 1, 1);
       FUNC_4(FUNC_0(), VAR_4);
       FUNC_1(FUNC_0(), VAR_2);
       FUNC_1(FUNC_0(), VAR_3);


       return VAR_5[0] == 144 && VAR_5[1] == 0 && VAR_5[2] == 69;
}
