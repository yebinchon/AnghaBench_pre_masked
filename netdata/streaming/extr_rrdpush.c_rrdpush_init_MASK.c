
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (int *,int ,char*,char*) ;
 scalar_t__ FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (char*,char*) ;
 int VAR_15 ;
 char* FUNC_7 (int *,char*) ;

int FUNC_8() {


    FUNC_5();

    VAR_8 = (unsigned int)FUNC_1(&VAR_15, VAR_1, "enabled", VAR_8);
    VAR_7 = FUNC_0(&VAR_15, VAR_1, "destination", "");
    VAR_6 = FUNC_0(&VAR_15, VAR_1, "api key", "");
    VAR_9 = FUNC_0(&VAR_15, VAR_1, "send charts matching", "*");
    VAR_14 = FUNC_2(VAR_0, "cleanup orphan hosts after seconds", VAR_14);

    if(VAR_8 && (!VAR_7 || !*VAR_7 || !VAR_6 || !*VAR_6)) {
        FUNC_3("STREAM [send]: cannot enable sending thread - information is missing.");
        VAR_8 = 0;
    }
    return VAR_8;
}
