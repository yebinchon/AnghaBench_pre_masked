
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsPipeline ;
typedef int cmsHPROFILE ;


 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;
 int * FUNC_6 (int ,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,double) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (int ,int,int **) ;
 int FUNC_14 (int ,int ,int *) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (char*) ;
 int VAR_4 ;

int FUNC_17(int VAR_5, char *VAR_6[])
{
 cmsHPROFILE VAR_7;
 cmsPipeline *VAR_8;
 cmsToneCurve* VAR_9[3];
 cmsToneCurve *VAR_10, *VAR_11;

 FUNC_15(VAR_4, "Creating lcmstiff8.icm...");

    FUNC_16("lcmstiff8.icm");
 VAR_7 = FUNC_5("lcmstiff8.icm", "w");


 VAR_10 = FUNC_0();
 VAR_11 = FUNC_1();

 VAR_9[0] = VAR_10;
 VAR_9[1] = VAR_11;
 VAR_9[2] = VAR_11;

    VAR_8 = FUNC_6(0, 3, 3);

 FUNC_8(VAR_8,
  VAR_0, FUNC_13(0, 3, VAR_9));

 FUNC_9(VAR_7, VAR_2);
 FUNC_11(VAR_7, VAR_2);
 FUNC_10(VAR_7, VAR_3);
 FUNC_12(VAR_7, 4.2);

    FUNC_14(VAR_7, VAR_1, VAR_8);

    FUNC_2(VAR_7);

 FUNC_3(VAR_7);

 FUNC_4(VAR_10);
 FUNC_4(VAR_11);
 FUNC_7(VAR_8);

 FUNC_15(VAR_4, "Done.\n");

 return 0;
}
