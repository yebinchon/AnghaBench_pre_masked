
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {TYPE_1__* vertex_declaration; scalar_t__* shader; } ;
struct TYPE_2__ {int position_transformed; } ;
typedef int BOOL ;


 size_t VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0(const struct wined3d_state *VAR_1)
{


    return VAR_1->shader[VAR_0]
            && (!VAR_1->vertex_declaration || !VAR_1->vertex_declaration->position_transformed);
}
