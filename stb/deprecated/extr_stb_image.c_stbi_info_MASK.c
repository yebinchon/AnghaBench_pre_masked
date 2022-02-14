
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,int*,int*,int*) ;

int FUNC_4(char const *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
    FILE *VAR_4 = FUNC_2(VAR_0, "rb");
    int VAR_5;
    if (!VAR_4) return FUNC_0("can't fopen", "Unable to open file");
    VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_2, VAR_3);
    FUNC_1(VAR_4);
    return VAR_5;
}
