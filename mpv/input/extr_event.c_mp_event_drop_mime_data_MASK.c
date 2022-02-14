
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct input_ctx {int dummy; } ;
typedef enum mp_dnd_action { ____Placeholder_mp_dnd_action } mp_dnd_action ;
struct TYPE_10__ {int * start; scalar_t__ len; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (void*,char**,int,char*) ;
 TYPE_1__ FUNC_1 (TYPE_1__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__,char*) ;
 TYPE_1__ FUNC_3 (TYPE_1__) ;
 char* FUNC_4 (void*,TYPE_1__) ;
 int FUNC_5 (struct input_ctx*,int,char**,int) ;
 scalar_t__ FUNC_6 (struct input_ctx*,char const*) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (int *) ;

int FUNC_9(struct input_ctx *VAR_0, const char *VAR_1,
                            bstr VAR_2, enum mp_dnd_action VAR_3)
{

    if (FUNC_6(VAR_0, VAR_1) >= 0) {
        void *VAR_4 = FUNC_8(((void*)0));
        int VAR_5 = 0;
        char **VAR_6 = ((void*)0);
        while (VAR_2.len) {
            bstr VAR_7 = FUNC_1(VAR_2, &VAR_2);
            VAR_7 = FUNC_3(VAR_7);
            if (FUNC_2(VAR_7, "#") || !VAR_7.start[0])
                continue;
            char *VAR_8 = FUNC_4(VAR_4, VAR_7);
            FUNC_0(VAR_4, VAR_6, VAR_5, VAR_8);
        }
        FUNC_5(VAR_0, VAR_5, VAR_6, VAR_3);
        FUNC_7(VAR_4);
        return VAR_5 > 0;
    } else {
        return -1;
    }
}
