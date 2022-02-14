
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra_renderpass_gl {int vao; int program; struct ra_renderpass_gl* priv; } ;
struct ra_renderpass {int vao; int program; struct ra_renderpass* priv; } ;
struct ra {int dummy; } ;
struct TYPE_3__ {int (* DeleteProgram ) (int ) ;} ;
typedef TYPE_1__ GL ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct ra*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ra_renderpass_gl*) ;

__attribute__((used)) static void FUNC_4(struct ra *VAR_0, struct ra_renderpass *VAR_1)
{
    GL *VAR_2 = FUNC_1(VAR_0);
    struct ra_renderpass_gl *VAR_3 = VAR_1->priv;
    VAR_2->DeleteProgram(VAR_3->program);
    FUNC_0(&VAR_3->vao);

    FUNC_3(VAR_3);
    FUNC_3(VAR_1);
}
