
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_cmd {TYPE_1__* def; } ;
struct input_ctx {int key_history; } ;
struct TYPE_2__ {int is_ignore; } ;


 struct mp_cmd* FUNC_0 (struct input_ctx*,int *,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct input_ctx*,struct mp_cmd*) ;
 int FUNC_3 (struct mp_cmd*) ;
 int FUNC_4 (struct input_ctx*) ;

__attribute__((used)) static struct mp_cmd *FUNC_5(struct input_ctx *VAR_0, int VAR_1)
{
    FUNC_4(VAR_0);
    struct mp_cmd *VAR_2 = FUNC_0(VAR_0, ((void*)0), VAR_1);
    FUNC_1(VAR_0->key_history, VAR_1);
    if (VAR_2 && !VAR_2->def->is_ignore && !FUNC_2(VAR_0, VAR_2))
        return VAR_2;
    FUNC_3(VAR_2);
    return ((void*)0);
}
