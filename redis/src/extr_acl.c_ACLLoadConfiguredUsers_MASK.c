
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ user ;
typedef char* sds ;
typedef int listNode ;
typedef int listIter ;


 TYPE_1__* FUNC_0 (char*,int) ;
 TYPE_1__* FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,int) ;
 char* FUNC_3 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_4 (int *) ;
 char** FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,char*,...) ;

int FUNC_10(void) {
    listIter VAR_6;
    listNode *VAR_7;
    FUNC_6(VAR_5,&VAR_6);
    while ((VAR_7 = FUNC_4(&VAR_6)) != ((void*)0)) {
        sds *VAR_8 = FUNC_5(VAR_7);
        sds VAR_9 = VAR_8[0];
        user *VAR_10 = FUNC_0(VAR_9,FUNC_7(VAR_9));
        if (!VAR_10) {
            VAR_10 = FUNC_1(VAR_9,FUNC_7(VAR_9));
            FUNC_8(VAR_10 != ((void*)0));
            FUNC_2(VAR_10,"reset",-1);
        }


        for (int VAR_11 = 1; VAR_8[VAR_11]; VAR_11++) {
            if (FUNC_2(VAR_10,VAR_8[VAR_11],FUNC_7(VAR_8[VAR_11])) != VAR_1) {
                char *VAR_12 = FUNC_3();
                FUNC_9(VAR_3,"Error loading ACL rule '%s' for "
                                     "the user named '%s': %s",
                          VAR_8[VAR_11],VAR_8[0],VAR_12);
                return VAR_0;
            }
        }



        if (VAR_10->flags & VAR_4) {
            FUNC_9(VAR_2, "The user '%s' is disabled (there is no "
                                 "'on' modifier in the user description). Make "
                                 "sure this is not a configuration error.",
                      VAR_8[0]);
        }
    }
    return VAR_1;
}
