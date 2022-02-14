
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct input_ctx {TYPE_1__* opts; int global; } ;
struct TYPE_11__ {scalar_t__ len; } ;
typedef TYPE_2__ bstr ;
struct TYPE_10__ {char* config_file; scalar_t__ use_gamepad; } ;


 TYPE_2__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 TYPE_2__ FUNC_2 (TYPE_2__,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__,char*) ;
 int VAR_0 ;
 int FUNC_4 (struct input_ctx*) ;
 int FUNC_5 (struct input_ctx*) ;
 int VAR_1 ;
 char** FUNC_6 (void*,int ,char*) ;
 int FUNC_7 (struct input_ctx*,char*) ;
 int FUNC_8 (struct input_ctx*) ;
 int FUNC_9 (int ,char*,int *,char**) ;
 int FUNC_10 (struct input_ctx*,int,TYPE_2__,char*,int *) ;
 int FUNC_11 (struct input_ctx*,char*,int) ;
 int FUNC_12 (struct input_ctx*,int) ;
 int FUNC_13 (char*) ;
 void* FUNC_14 (int *) ;

void FUNC_15(struct input_ctx *VAR_2)
{
    FUNC_4(VAR_2);

    FUNC_12(VAR_2, 0);



    bstr VAR_3 = FUNC_0(VAR_0);
    while (VAR_3.len) {
        bstr VAR_4 = FUNC_2(VAR_3, &VAR_3);
        FUNC_1(&VAR_4, "#");
        if (!FUNC_3(VAR_4, " "))
            FUNC_10(VAR_2, 1, VAR_4, "<builtin>", ((void*)0));
    }

    bool VAR_5 = 0;
    if (VAR_2->opts->config_file && VAR_2->opts->config_file[0])
        VAR_5 = FUNC_11(VAR_2, VAR_2->opts->config_file, 1);
    if (!VAR_5) {

        void *VAR_6 = FUNC_14(((void*)0));
        char **VAR_7 = FUNC_6(VAR_6, VAR_2->global, "input.conf");
        for (int VAR_8 = 0; VAR_7 && VAR_7[VAR_8]; VAR_8++)
            FUNC_11(VAR_2, VAR_7[VAR_8], 0);
        FUNC_13(VAR_6);
    }
    FUNC_5(VAR_2);
}
