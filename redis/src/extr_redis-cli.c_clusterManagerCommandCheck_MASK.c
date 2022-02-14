
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int clusterManagerNode ;


 char* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,char**,char**,int*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(int VAR_2, char **VAR_3) {
    int VAR_4 = 0;
    char *VAR_5 = ((void*)0);
    if (!FUNC_5(VAR_2, VAR_3, &VAR_5, &VAR_4)) goto invalid_args;
    clusterManagerNode *VAR_6 = FUNC_2(VAR_5, VAR_4);
    if (!FUNC_1(VAR_6, 0)) return 0;
    FUNC_3();
    return FUNC_0(0);
invalid_args:
    FUNC_4(VAR_1, "%s", VAR_0);
    return 0;
}
