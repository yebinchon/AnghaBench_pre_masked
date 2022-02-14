
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int mconfig; int global; } ;


 int FUNC_0 (int ,char*,int *,int) ;
 char* FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, char *VAR_1, int VAR_2)
{
    struct MPContext *VAR_3 = VAR_0;
    char *VAR_4 = FUNC_1(((void*)0), VAR_3->global, VAR_1);
    int VAR_5 = FUNC_0(VAR_3->mconfig, VAR_4, ((void*)0), VAR_2);
    FUNC_2(VAR_4);
    return VAR_5;
}
