
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct input_ctx {int global; } ;
typedef int stream_t ;
struct TYPE_4__ {scalar_t__ start; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (struct input_ctx*,char*,char*) ;
 int FUNC_1 (struct input_ctx*,char*,char*,...) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (void*,int ,char*) ;
 int FUNC_4 (struct input_ctx*,int,TYPE_1__,char*,int *) ;
 int * FUNC_5 (char*,int ) ;
 TYPE_1__ FUNC_6 (int *,void*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct input_ctx *VAR_0, char *VAR_1, bool VAR_2)
{
    int VAR_3 = 0;
    void *VAR_4 = FUNC_9(((void*)0));
    stream_t *VAR_5 = ((void*)0);

    VAR_1 = FUNC_3(VAR_4, VAR_0->global, VAR_1);

    VAR_5 = FUNC_5(VAR_1, VAR_0->global);
    if (!VAR_5) {
        FUNC_0(VAR_0, "Can't open input config file %s.\n", VAR_1);
        goto done;
    }
    FUNC_7(VAR_5);
    bstr VAR_6 = FUNC_6(VAR_5, VAR_4, 1000000);
    if (VAR_6.start) {
        FUNC_1(VAR_0, "Parsing input config file %s\n", VAR_1);
        int VAR_7 = FUNC_4(VAR_0, 0, VAR_6, VAR_1, ((void*)0));
        FUNC_1(VAR_0, "Input config file %s parsed: %d binds\n", VAR_1, VAR_7);
        VAR_3 = 1;
    } else {
        FUNC_0(VAR_0, "Error reading input config file %s\n", VAR_1);
    }

done:
    FUNC_2(VAR_5);
    FUNC_8(VAR_4);
    return VAR_3;
}
