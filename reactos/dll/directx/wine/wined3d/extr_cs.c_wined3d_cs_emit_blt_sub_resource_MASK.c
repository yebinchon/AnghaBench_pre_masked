
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_resource {int dummy; } ;
struct wined3d_blt_fx {int dummy; } ;
struct wined3d_box {int dummy; } ;
struct wined3d_cs_blt_sub_resource {unsigned int dst_sub_resource_idx; unsigned int src_sub_resource_idx; int flags; int filter; struct wined3d_blt_fx fx; struct wined3d_box src_box; struct wined3d_resource* src_resource; struct wined3d_box dst_box; struct wined3d_resource* dst_resource; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
typedef enum wined3d_texture_filter_type { ____Placeholder_wined3d_texture_filter_type } wined3d_texture_filter_type ;
struct TYPE_2__ {int (* finish ) (struct wined3d_cs*,int ) ;int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_blt_sub_resource* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wined3d_blt_fx*,int ,int) ;
 struct wined3d_cs_blt_sub_resource* FUNC_1 (struct wined3d_cs*,int,int ) ;
 int FUNC_2 (struct wined3d_cs*,int ) ;
 int FUNC_3 (struct wined3d_cs*,int ) ;
 int FUNC_4 (struct wined3d_resource*) ;

void FUNC_5(struct wined3d_cs *VAR_3, struct wined3d_resource *VAR_4,
        unsigned int VAR_5, const struct wined3d_box *VAR_6, struct wined3d_resource *VAR_7,
        unsigned int VAR_8, const struct wined3d_box *VAR_9, DWORD VAR_10,
        const struct wined3d_blt_fx *VAR_11, enum wined3d_texture_filter_type VAR_12)
{
    struct wined3d_cs_blt_sub_resource *VAR_13;

    VAR_13 = VAR_3->ops->require_space(VAR_3, sizeof(*VAR_13), VAR_2);
    VAR_13->opcode = VAR_1;
    VAR_13->dst_resource = VAR_4;
    VAR_13->dst_sub_resource_idx = VAR_5;
    VAR_13->dst_box = *VAR_6;
    VAR_13->src_resource = VAR_7;
    VAR_13->src_sub_resource_idx = VAR_8;
    VAR_13->src_box = *VAR_9;
    VAR_13->flags = VAR_10;
    if (VAR_11)
        VAR_13->fx = *VAR_11;
    else
        FUNC_0(&VAR_13->fx, 0, sizeof(VAR_13->fx));
    VAR_13->filter = VAR_12;

    FUNC_4(VAR_4);
    if (VAR_7)
        FUNC_4(VAR_7);

    VAR_3->ops->submit(VAR_3, VAR_2);
    if (VAR_10 & VAR_0)
        VAR_3->ops->finish(VAR_3, VAR_2);
}
