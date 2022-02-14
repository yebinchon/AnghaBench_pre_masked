
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gl_vao {int buffer; int vao; TYPE_1__* gl; } ;
struct TYPE_2__ {int (* BindBuffer ) (int ,int ) ;int (* BindVertexArray ) (int ) ;} ;
typedef TYPE_1__ GL ;


 int VAR_0 ;
 int FUNC_0 (struct gl_vao*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gl_vao *VAR_1)
{
    GL *VAR_2 = VAR_1->gl;

    if (VAR_2->BindVertexArray) {
        VAR_2->BindVertexArray(VAR_1->vao);
    } else {
        VAR_2->BindBuffer(VAR_0, VAR_1->buffer);
        FUNC_0(VAR_1);
        VAR_2->BindBuffer(VAR_0, 0);
    }
}
