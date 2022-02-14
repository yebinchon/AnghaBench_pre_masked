
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (char*,int,char*,int ,int ) ;
 char* FUNC_4 (int ) ;

static inline int FUNC_5() {
    char VAR_7[(VAR_2 * 2) + 1];
    static char *VAR_8 = ((void*)0);


    if(FUNC_1(!VAR_8)) {
        FUNC_3(VAR_7, VAR_2 * 2, "\"%s\" \"%s/custom-plugins.d\"", VAR_4, VAR_0);
        VAR_8 = FUNC_4(FUNC_0(VAR_1, "plugins directory", VAR_7));
    }


    return FUNC_2(VAR_8, VAR_6, VAR_3, VAR_5);
}
