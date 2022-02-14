
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsHPROFILE ;
typedef char* LPLUT ;
typedef int CARGO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (char*,int,int,int) ;
 char* FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,int *,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_13(void)
{
 LPLUT VAR_11, VAR_12;
 CARGO VAR_13;
 cmsHPROFILE VAR_14;

 FUNC_12(VAR_10, "Creating lcmscmy.icm...");

 FUNC_1(&VAR_13);

 VAR_14 = FUNC_7(((void*)0));


    VAR_11 = FUNC_5();
 VAR_12 = FUNC_5();

 FUNC_4(VAR_11, 25, 3, 3);
 FUNC_4(VAR_12, 25, 3, 3);


 FUNC_9(VAR_11, VAR_1, &VAR_13, 0);
 FUNC_9(VAR_12, VAR_0, &VAR_13, 0);


    FUNC_3(VAR_14, VAR_2, VAR_11);
 FUNC_3(VAR_14, VAR_3, VAR_12);

 FUNC_10(VAR_14, VAR_4);
 FUNC_11(VAR_14, VAR_8);

 FUNC_3(VAR_14, VAR_9, "CMY ");
    FUNC_3(VAR_14, VAR_5, "Copyright (c) HP, 2007. All rights reserved.");
    FUNC_3(VAR_14, VAR_6, "Little cms");
    FUNC_3(VAR_14, VAR_7, "CMY space");

 FUNC_2(VAR_14, "lcmscmy.icm");


 FUNC_8(VAR_11);
 FUNC_8(VAR_12);
 FUNC_6(VAR_14);
 FUNC_0(&VAR_13);
 FUNC_12(VAR_10, "Done.\n");



 return 0;
}
