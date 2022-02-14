
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_texture {int dummy; } ;
struct wined3d_color_key {int dummy; } ;
struct wined3d_cs_set_color_key {int set; struct wined3d_color_key color_key; int flags; struct wined3d_texture* texture; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
typedef int WORD ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_set_color_key* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_set_color_key* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;

void FUNC_2(struct wined3d_cs *VAR_2, struct wined3d_texture *VAR_3,
        WORD VAR_4, const struct wined3d_color_key *VAR_5)
{
    struct wined3d_cs_set_color_key *VAR_6;

    VAR_6 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_6), VAR_1);
    VAR_6->opcode = VAR_0;
    VAR_6->texture = VAR_3;
    VAR_6->flags = VAR_4;
    if (VAR_5)
    {
        VAR_6->color_key = *VAR_5;
        VAR_6->set = 1;
    }
    else
        VAR_6->set = 0;

    VAR_2->ops->submit(VAR_2, VAR_1);
}
