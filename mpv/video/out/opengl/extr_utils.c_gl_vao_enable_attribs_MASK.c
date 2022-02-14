
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_renderpass_input {int type; int dim_m; scalar_t__ offset; int dim_v; } ;
struct gl_vao {int num_entries; int stride; struct ra_renderpass_input* entries; TYPE_1__* gl; } ;
struct TYPE_2__ {int (* VertexAttribPointer ) (int,int ,int ,int,int ,void*) ;int (* EnableVertexAttribArray ) (int) ;} ;
typedef int GLenum ;
typedef TYPE_1__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ,int,int ,void*) ;

__attribute__((used)) static void FUNC_4(struct gl_vao *VAR_3)
{
    GL *VAR_4 = VAR_3->gl;

    for (int VAR_5 = 0; VAR_5 < VAR_3->num_entries; VAR_5++) {
        const struct ra_renderpass_input *VAR_6 = &VAR_3->entries[VAR_5];
        GLenum VAR_7 = 0;
        bool VAR_8 = 0;
        switch (VAR_6->type) {
        case 128:
            VAR_7 = VAR_1;
            break;
        case 129:
            VAR_7 = VAR_0;
            break;
        case 130:
            VAR_7 = VAR_2;
            VAR_8 = 1;
            break;
        default:
            FUNC_0();
        }
        FUNC_1(VAR_6->dim_m == 1);

        VAR_4->EnableVertexAttribArray(VAR_5);
        VAR_4->VertexAttribPointer(VAR_5, VAR_6->dim_v, VAR_7, VAR_8,
                                VAR_3->stride, (void *)(intptr_t)VAR_6->offset);
    }
}
