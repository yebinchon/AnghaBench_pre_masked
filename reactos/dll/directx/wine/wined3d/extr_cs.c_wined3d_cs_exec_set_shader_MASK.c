
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_cs_set_shader {size_t type; int shader; } ;
struct TYPE_2__ {int * shader; } ;
struct wined3d_cs {int device; TYPE_1__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wined3d_cs *VAR_3, const void *VAR_4)
{
    const struct wined3d_cs_set_shader *VAR_5 = VAR_4;

    VAR_3->state.shader[VAR_5->type] = VAR_5->shader;
    FUNC_1(VAR_3->device, FUNC_0(VAR_5->type));
    if (VAR_5->type != VAR_2)
        FUNC_1(VAR_3->device, VAR_1);
    else
        FUNC_1(VAR_3->device, VAR_0);
}
