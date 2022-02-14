
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gl_vao {int num_entries; TYPE_1__* gl; } ;
struct TYPE_2__ {int (* DisableVertexAttribArray ) (int) ;int (* BindVertexArray ) (int ) ;} ;
typedef TYPE_1__ GL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct gl_vao *VAR_0)
{
    GL *VAR_1 = VAR_0->gl;

    if (VAR_1->BindVertexArray) {
        VAR_1->BindVertexArray(0);
    } else {
        for (int VAR_2 = 0; VAR_2 < VAR_0->num_entries; VAR_2++)
            VAR_1->DisableVertexAttribArray(VAR_2);
    }
}
