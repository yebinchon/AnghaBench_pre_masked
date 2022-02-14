
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {int global; TYPE_1__* opts; } ;
struct TYPE_2__ {char** script_files; int auto_load_scripts; } ;


 char** FUNC_0 (void*,char*) ;
 char** FUNC_1 (void*,int ,char*) ;
 int FUNC_2 (struct MPContext*,char*) ;
 int FUNC_3 (struct MPContext*,char*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int *) ;

void FUNC_6(struct MPContext *VAR_0)
{

    char **VAR_1 = VAR_0->opts->script_files;
    for (int VAR_2 = 0; VAR_1 && VAR_1[VAR_2]; VAR_2++) {
        if (VAR_1[VAR_2][0])
            FUNC_3(VAR_0, VAR_1[VAR_2]);
    }
    if (!VAR_0->opts->auto_load_scripts)
        return;


    void *VAR_3 = FUNC_5(((void*)0));
    char **VAR_4 = FUNC_1(VAR_3, VAR_0->global, "scripts");
    for (int VAR_5 = 0; VAR_4 && VAR_4[VAR_5]; VAR_5++) {
        VAR_1 = FUNC_0(VAR_3, VAR_4[VAR_5]);
        for (int VAR_6 = 0; VAR_1 && VAR_1[VAR_6]; VAR_6++)
            FUNC_2(VAR_0, VAR_1[VAR_6]);
    }
    FUNC_4(VAR_3);
}
