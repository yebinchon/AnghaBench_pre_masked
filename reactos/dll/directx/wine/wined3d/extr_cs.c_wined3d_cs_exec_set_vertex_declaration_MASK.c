
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_cs_set_vertex_declaration {int declaration; } ;
struct TYPE_2__ {int vertex_declaration; } ;
struct wined3d_cs {int device; TYPE_1__ state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct wined3d_cs *VAR_1, const void *VAR_2)
{
    const struct wined3d_cs_set_vertex_declaration *VAR_3 = VAR_2;

    VAR_1->state.vertex_declaration = VAR_3->declaration;
    FUNC_0(VAR_1->device, VAR_0);
}
