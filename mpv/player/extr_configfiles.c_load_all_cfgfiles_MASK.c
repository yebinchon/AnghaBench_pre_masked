
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int mconfig; int global; } ;


 int FUNC_0 (int ,char*,char*,int ) ;
 char** FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char**) ;

__attribute__((used)) static void FUNC_3(struct MPContext *VAR_0, char *VAR_1,
                              char *VAR_2)
{
    char **VAR_3 = FUNC_1(((void*)0), VAR_0->global, VAR_2);
    for (int VAR_4 = 0; VAR_3 && VAR_3[VAR_4]; VAR_4++)
        FUNC_0(VAR_0->mconfig, VAR_3[VAR_4], VAR_1, 0);
    FUNC_2(VAR_3);
}
