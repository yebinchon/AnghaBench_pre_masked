
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_renderpass_params {scalar_t__ type; int num_vertex_attribs; TYPE_1__* vertex_attribs; int frag_shader; int vertex_shader; int compute_shader; } ;
struct ra {int dummy; } ;
struct TYPE_5__ {int (* DeleteProgram ) (scalar_t__) ;int (* BindAttribLocation ) (scalar_t__,int,int ) ;scalar_t__ (* CreateProgram ) () ;} ;
struct TYPE_4__ {int name; } ;
typedef scalar_t__ GLuint ;
typedef TYPE_2__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ra*,scalar_t__,int ,int ,int*) ;
 int FUNC_1 (struct ra*,scalar_t__,int*) ;
 TYPE_2__* FUNC_2 (struct ra*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,int,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static GLuint FUNC_6(struct ra *VAR_5, const struct ra_renderpass_params *VAR_6)
{
    GL *VAR_7 = FUNC_2(VAR_5);

    GLuint VAR_8 = VAR_7->CreateProgram();
    bool VAR_9 = 1;
    if (VAR_6->type == VAR_3)
        FUNC_0(VAR_5, VAR_8, VAR_0, VAR_6->compute_shader, &VAR_9);
    if (VAR_6->type == VAR_4) {
        FUNC_0(VAR_5, VAR_8, VAR_2, VAR_6->vertex_shader, &VAR_9);
        FUNC_0(VAR_5, VAR_8, VAR_1, VAR_6->frag_shader, &VAR_9);
        for (int VAR_10 = 0; VAR_10 < VAR_6->num_vertex_attribs; VAR_10++)
            VAR_7->BindAttribLocation(VAR_8, VAR_10, VAR_6->vertex_attribs[VAR_10].name);
    }
    FUNC_1(VAR_5, VAR_8, &VAR_9);
    if (!VAR_9) {
        VAR_7->DeleteProgram(VAR_8);
        VAR_8 = 0;
    }
    return VAR_8;
}
