
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,int,char*,unsigned long long) ;

char *FUNC_2(void) {
    static char VAR_0[32];
    static int VAR_1 = 0;
    if (!VAR_1) {
        FUNC_1(VAR_0,sizeof(VAR_0),"%llx",(unsigned long long) FUNC_0());
        VAR_1 = 1;
    }
    return VAR_0;
}
