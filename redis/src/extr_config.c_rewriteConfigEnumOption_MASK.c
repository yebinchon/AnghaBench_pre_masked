
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rewriteConfigState {int dummy; } ;
typedef int sds ;
typedef int configEnum ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (struct rewriteConfigState*,char*,int ,int) ;
 int FUNC_2 (int ,char*,char*,char const*) ;
 int FUNC_3 () ;

void FUNC_4(struct rewriteConfigState *VAR_0, char *VAR_1, int VAR_2, configEnum *VAR_3, int VAR_4) {
    sds VAR_5;
    const char *VAR_6 = FUNC_0(VAR_3,VAR_2);
    int VAR_7 = VAR_2 != VAR_4;

    VAR_5 = FUNC_2(FUNC_3(),"%s %s",VAR_1,VAR_6);
    FUNC_1(VAR_0,VAR_1,VAR_5,VAR_7);
}
