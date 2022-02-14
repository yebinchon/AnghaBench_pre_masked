
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gl_vao {size_t stride; int buffer; TYPE_1__* gl; } ;
struct TYPE_2__ {int (* DrawArrays ) (int ,int ,size_t) ;int (* BindBuffer ) (int ,int ) ;int (* BufferData ) (int ,size_t,void*,int ) ;} ;
typedef int GLenum ;
typedef TYPE_1__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gl_vao*) ;
 int FUNC_1 (struct gl_vao*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,size_t,void*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,size_t) ;

void FUNC_6(struct gl_vao *VAR_2, GLenum VAR_3, void *VAR_4, size_t VAR_5)
{
    GL *VAR_6 = VAR_2->gl;

    if (VAR_4) {
        VAR_6->BindBuffer(VAR_0, VAR_2->buffer);
        VAR_6->BufferData(VAR_0, VAR_5 * VAR_2->stride, VAR_4, VAR_1);
        VAR_6->BindBuffer(VAR_0, 0);
    }

    FUNC_0(VAR_2);

    VAR_6->DrawArrays(VAR_3, 0, VAR_5);

    FUNC_1(VAR_2);
}
