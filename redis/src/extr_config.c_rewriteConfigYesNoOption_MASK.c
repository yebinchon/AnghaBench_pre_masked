
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rewriteConfigState {int dummy; } ;
typedef int sds ;


 int FUNC_0 (struct rewriteConfigState*,char const*,int ,int) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 int FUNC_2 () ;

void FUNC_3(struct rewriteConfigState *VAR_0, const char *VAR_1, int VAR_2, int VAR_3) {
    int VAR_4 = VAR_2 != VAR_3;
    sds VAR_5 = FUNC_1(FUNC_2(),"%s %s",VAR_1,
        VAR_2 ? "yes" : "no");

    FUNC_0(VAR_0,VAR_1,VAR_5,VAR_4);
}
