
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * name; } ;
typedef TYPE_1__ user ;
typedef scalar_t__ ssize_t ;
typedef int * sds ;
struct TYPE_9__ {TYPE_1__* data; } ;
typedef TYPE_2__ raxIterator ;


 int * FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,char*,int *,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,char const*) ;
 int * FUNC_10 (int *,char*,int,int) ;
 int * FUNC_11 (int *,char*,int) ;
 int * FUNC_12 (int *,int *) ;
 int * FUNC_13 () ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int * FUNC_16 (char const*) ;
 int FUNC_17 (int ,char*,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int,int *,scalar_t__) ;

int FUNC_21(const char *VAR_7) {
    sds VAR_8 = FUNC_13();
    int VAR_9 = -1;
    sds VAR_10 = ((void*)0);
    int VAR_11 = VAR_0;



    raxIterator VAR_12;
    FUNC_7(&VAR_12,VAR_5);
    FUNC_6(&VAR_12,"^",((void*)0),0);
    while(FUNC_5(&VAR_12)) {
        user *VAR_13 = VAR_12.data;

        sds VAR_14 = FUNC_16("user ");
        VAR_14 = FUNC_12(VAR_14,VAR_13->name);
        VAR_14 = FUNC_11(VAR_14," ",1);
        sds VAR_15 = FUNC_0(VAR_13);
        VAR_14 = FUNC_12(VAR_14,VAR_15);
        FUNC_14(VAR_15);
        VAR_8 = FUNC_12(VAR_8,VAR_14);
        VAR_8 = FUNC_11(VAR_8,"\n",1);
        FUNC_14(VAR_14);
    }
    FUNC_8(&VAR_12);


    VAR_10 = FUNC_16(VAR_7);
    VAR_10 = FUNC_10(VAR_10,".tmp-%i-%I",
        (int)FUNC_2(),(int)FUNC_3());
    if ((VAR_9 = FUNC_4(VAR_10,VAR_4|VAR_3,0644)) == -1) {
        FUNC_17(VAR_2,"Opening temp ACL file for ACL SAVE: %s",
            FUNC_18(VAR_6));
        goto cleanup;
    }


    if (FUNC_20(VAR_9,VAR_8,FUNC_15(VAR_8)) != (ssize_t)FUNC_15(VAR_8)) {
        FUNC_17(VAR_2,"Writing ACL file for ACL SAVE: %s",
            FUNC_18(VAR_6));
        goto cleanup;
    }
    FUNC_1(VAR_9); VAR_9 = -1;


    if (FUNC_9(VAR_10,VAR_7) == -1) {
        FUNC_17(VAR_2,"Renaming ACL file for ACL SAVE: %s",
            FUNC_18(VAR_6));
        goto cleanup;
    }
    FUNC_14(VAR_10); VAR_10 = ((void*)0);
    VAR_11 = VAR_1;

cleanup:
    if (VAR_9 != -1) FUNC_1(VAR_9);
    if (VAR_10) FUNC_19(VAR_10);
    FUNC_14(VAR_10);
    FUNC_14(VAR_8);
    return VAR_11;
}
