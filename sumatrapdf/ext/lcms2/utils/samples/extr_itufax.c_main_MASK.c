
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsHPROFILE ;
typedef char* LPLUT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (char*,int ,int,int) ;
 char* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int ,int *,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (char*) ;

int FUNC_12(int VAR_12, char *VAR_13[])
{
 LPLUT VAR_14, VAR_15;
 cmsHPROFILE VAR_16;

 FUNC_10(VAR_11, "Creating itufax.icm...");

 FUNC_11("itufax.icm");
 VAR_16 = FUNC_5("itufax.icm", "w");

    VAR_14 = FUNC_2();
 VAR_15 = FUNC_2();

 FUNC_1(VAR_14, VAR_0, 3, 3);
 FUNC_1(VAR_15, VAR_0, 3, 3);

 FUNC_6(VAR_14, VAR_1, ((void*)0), 0);
 FUNC_6(VAR_15, VAR_2, ((void*)0), 0);

    FUNC_0(VAR_16, VAR_3, VAR_14);
 FUNC_0(VAR_16, VAR_4, VAR_15);


 FUNC_7(VAR_16, VAR_9);
    FUNC_9(VAR_16, VAR_9);
    FUNC_8(VAR_16, VAR_5);

 FUNC_0(VAR_16, VAR_10, "ITU T.42/Fax JPEG CIEL*a*b*");
    FUNC_0(VAR_16, VAR_6, "No Copyright, use freely.");
    FUNC_0(VAR_16, VAR_7, "Little cms");
    FUNC_0(VAR_16, VAR_8, "ITU T.42/Fax JPEG CIEL*a*b*");

 FUNC_3(VAR_16);

 FUNC_4(VAR_14);
 FUNC_4(VAR_15);

 FUNC_10(VAR_11, "Done.\n");

 return 0;
}
