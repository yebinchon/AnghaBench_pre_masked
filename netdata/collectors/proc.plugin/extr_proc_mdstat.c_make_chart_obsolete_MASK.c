
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RRDSET ;


 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static inline void FUNC_4(char *VAR_0, const char *VAR_1) {
    char VAR_2[50 + 1];
    RRDSET *VAR_3 = ((void*)0);

    if(FUNC_0(VAR_0 && VAR_1)) {
        FUNC_3(VAR_2, 50, "mdstat.%s_%s", VAR_0, VAR_1);
        VAR_3 = FUNC_1(VAR_2);
        if(FUNC_0(*VAR_3)) FUNC_2(VAR_3);
    }
}
