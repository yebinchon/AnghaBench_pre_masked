
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct priv {int renderer_enabled; int * swpool; TYPE_1__* renderer; } ;
struct TYPE_2__ {int * input; int control; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->renderer_enabled) {
        FUNC_2(VAR_1->renderer->control);
        FUNC_2(VAR_1->renderer->input[0]);

        FUNC_3(VAR_1->renderer->control);
        FUNC_3(VAR_1->renderer->input[0]);

        FUNC_0(VAR_1->renderer);
    }
    FUNC_1(VAR_1->swpool);
    VAR_1->swpool = ((void*)0);
    VAR_1->renderer_enabled = 0;
}
