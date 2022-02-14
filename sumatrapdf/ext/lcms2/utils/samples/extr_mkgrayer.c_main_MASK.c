
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsHPROFILE ;
typedef char* LPLUT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (char*,int,int,int) ;
 char* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int ,int *,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (char*) ;

int FUNC_12(int VAR_10, char *VAR_11[])
{
 LPLUT VAR_12;
 cmsHPROFILE VAR_13;

 FUNC_10(VAR_9, "Creating interpol2.icc...");

 FUNC_11("interpol2.icc");
 VAR_13 = FUNC_5("interpol2.icc", "w8");


    VAR_12 = FUNC_2();

 FUNC_1(VAR_12, 17, 3, 3);

 FUNC_6(VAR_12, VAR_0, ((void*)0), 0);

    FUNC_0(VAR_13, VAR_1, VAR_12);

 FUNC_7(VAR_13, VAR_8);
    FUNC_9(VAR_13, VAR_5);
    FUNC_8(VAR_13, VAR_6);

 FUNC_0(VAR_13, VAR_7, "Interpolation test");
    FUNC_0(VAR_13, VAR_2, "Copyright (c) HP 2007. All rights reserved.");
    FUNC_0(VAR_13, VAR_3, "Little cms");
    FUNC_0(VAR_13, VAR_4, "Interpolation test profile");


 FUNC_3(VAR_13);

 FUNC_4(VAR_12);

 FUNC_10(VAR_9, "Done.\n");

 return 0;
}
