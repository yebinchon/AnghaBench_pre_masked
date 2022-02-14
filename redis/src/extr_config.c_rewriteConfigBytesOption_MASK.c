
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rewriteConfigState {int dummy; } ;
typedef int sds ;
typedef int buf ;


 int FUNC_0 (char*,int,long long) ;
 int FUNC_1 (struct rewriteConfigState*,char*,int ,int) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 () ;

void FUNC_4(struct rewriteConfigState *VAR_0, char *VAR_1, long long VAR_2, long long VAR_3) {
    char VAR_4[64];
    int VAR_5 = VAR_2 != VAR_3;
    sds VAR_6;

    FUNC_0(VAR_4,sizeof(VAR_4),VAR_2);
    VAR_6 = FUNC_2(FUNC_3(),"%s %s",VAR_1,VAR_4);
    FUNC_1(VAR_0,VAR_1,VAR_6,VAR_5);
}
