
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_cs_reset_state {int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_reset_state* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_reset_state* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;

void FUNC_2(struct wined3d_cs *VAR_2)
{
    struct wined3d_cs_reset_state *VAR_3;

    VAR_3 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_3), VAR_1);
    VAR_3->opcode = VAR_0;

    VAR_2->ops->submit(VAR_2, VAR_1);
}
