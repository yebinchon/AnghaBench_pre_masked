
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user ;
typedef char* sds ;
typedef int rax ;
typedef int buf ;
struct TYPE_2__ {int acl_filename; } ;
typedef int FILE ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,char*,scalar_t__) ;
 char* FUNC_8 () ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,int,int *) ;
 int * FUNC_11 (char const*,char*) ;
 int FUNC_12 (int *,unsigned char*,int,int *,int *) ;
 int * FUNC_13 () ;
 int FUNC_14 (int *,unsigned char*,int,int *) ;
 char* FUNC_15 (char*,char*) ;
 char* FUNC_16 (char*,char*,char const*,int,...) ;
 char* FUNC_17 () ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char**,int) ;
 scalar_t__ FUNC_20 (char*) ;
 char** FUNC_21 (char*,int*) ;
 char** FUNC_22 (char*,int ,char*,int,int*) ;
 char* FUNC_23 (char*,char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_24 (int) ;
 scalar_t__ FUNC_25 (char*,char*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (char*) ;

sds FUNC_28(const char *VAR_5) {
    FILE *VAR_6;
    char VAR_7[1024];


    if ((VAR_6 = FUNC_11(VAR_5,"r")) == ((void*)0)) {
        sds VAR_8 = FUNC_16(FUNC_17(),
            "Error loading ACLs, opening file '%s': %s",
            VAR_5, FUNC_26(VAR_3));
        return VAR_8;
    }


    sds VAR_9 = FUNC_17();
    while(FUNC_10(VAR_7,sizeof(VAR_7),VAR_6) != ((void*)0))
        VAR_9 = FUNC_15(VAR_9,VAR_7);
    FUNC_9(VAR_6);


    int VAR_10;
    sds *VAR_11, VAR_12 = FUNC_17();
    VAR_11 = FUNC_22(VAR_9,FUNC_27(VAR_9),"\n",1,&VAR_10);
    FUNC_18(VAR_9);



    user *VAR_13 = FUNC_1();




    rax *VAR_14 = VAR_2;
    user *VAR_15 = VAR_1;
    VAR_2 = FUNC_13();
    FUNC_6();


    for (int VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
        sds *VAR_17;
        int VAR_18;
        int VAR_19 = VAR_16+1;

        VAR_11[VAR_16] = FUNC_23(VAR_11[VAR_16]," \t\r\n");


        if (VAR_11[VAR_16][0] == '\0') continue;


        VAR_17 = FUNC_21(VAR_11[VAR_16],&VAR_18);
        if (VAR_17 == ((void*)0)) {
            VAR_12 = FUNC_16(VAR_12,
                     "%s:%d: unbalanced quotes in acl line. ",
                     VAR_4.acl_filename, VAR_19);
            continue;
        }


        if (VAR_18 == 0) {
            FUNC_19(VAR_17,VAR_18);
            continue;
        }


        if (FUNC_25(VAR_17[0],"user") || VAR_18 < 2) {
            VAR_12 = FUNC_16(VAR_12,
                     "%s:%d should start with user keyword followed "
                     "by the username. ", VAR_4.acl_filename,
                     VAR_19);
            FUNC_19(VAR_17,VAR_18);
            continue;
        }



        FUNC_7(VAR_13,"reset",-1);
        int VAR_20;
        for (VAR_20 = 2; VAR_20 < VAR_18; VAR_20++) {
            if (FUNC_7(VAR_13,VAR_17[VAR_20],FUNC_20(VAR_17[VAR_20])) != VAR_0) {
                char *VAR_21 = FUNC_8();
                VAR_12 = FUNC_16(VAR_12,
                         "%s:%d: %s. ",
                         VAR_4.acl_filename, VAR_19, VAR_21);
                continue;
            }
        }




        if (FUNC_20(VAR_12) != 0) {
            FUNC_19(VAR_17,VAR_18);
            continue;
        }



        user *VAR_22 = FUNC_2(VAR_17[1],FUNC_20(VAR_17[1]));
        if (!VAR_22) {
            VAR_22 = FUNC_5(VAR_17[1],FUNC_20(VAR_17[1]));
            FUNC_24(VAR_22 != ((void*)0));
            FUNC_7(VAR_22,"reset",-1);
        }



        for (VAR_20 = 2; VAR_20 < VAR_18; VAR_20++)
            FUNC_24(FUNC_7(VAR_22,VAR_17[VAR_20],FUNC_20(VAR_17[VAR_20])) == VAR_0);

        FUNC_19(VAR_17,VAR_18);
    }

    FUNC_3(VAR_13);
    FUNC_19(VAR_11,VAR_10);
    VAR_1 = VAR_15;


    if (FUNC_20(VAR_12) == 0) {



        user *VAR_23 = FUNC_5("default",7);
        FUNC_24(VAR_23 != ((void*)0));
        FUNC_0(VAR_1,VAR_23);
        FUNC_3(VAR_23);
        FUNC_12(VAR_2,(unsigned char*)"default",7,VAR_1,((void*)0));
        FUNC_14(VAR_14,(unsigned char*)"default",7,((void*)0));
        FUNC_4(VAR_14);
        FUNC_18(VAR_12);
        return ((void*)0);
    } else {
        FUNC_4(VAR_2);
        VAR_2 = VAR_14;
        VAR_12 = FUNC_15(VAR_12,"WARNING: ACL errors detected, no change to the previously active ACL rules was performed");
        return VAR_12;
    }
}
