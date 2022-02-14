
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char**,int*,int *) ;

__attribute__((used)) static int FUNC_2(int VAR_0, char **VAR_1,
                                     char **VAR_2, int *VAR_3) {
    int VAR_4 = 0;
    char *VAR_5 = ((void*)0);
    if (VAR_0 == 1) {
        char *VAR_6 = VAR_1[0];
        if (!FUNC_1(VAR_6, &VAR_5, &VAR_4, ((void*)0))) return 0;
    } else {
        VAR_5 = VAR_1[0];
        VAR_4 = FUNC_0(VAR_1[1]);
    }
    if (!VAR_5 || !VAR_4) return 0;
    else {
        *VAR_2 = VAR_5;
        *VAR_3 = VAR_4;
    }
    return 1;
}
