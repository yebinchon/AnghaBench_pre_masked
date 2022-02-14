
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_uvec4 {int dummy; } ;
struct wined3d_unordered_access_view {int resource; } ;
struct wined3d_cs_clear_unordered_access_view {struct wined3d_uvec4 clear_value; struct wined3d_unordered_access_view* view; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_clear_unordered_access_view* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_clear_unordered_access_view* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct wined3d_cs *VAR_2,
        struct wined3d_unordered_access_view *VAR_3, const struct wined3d_uvec4 *VAR_4)
{
    struct wined3d_cs_clear_unordered_access_view *VAR_5;

    VAR_5 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_5), VAR_1);
    VAR_5->opcode = VAR_0;
    VAR_5->view = VAR_3;
    VAR_5->clear_value = *VAR_4;

    FUNC_2(VAR_3->resource);

    VAR_2->ops->submit(VAR_2, VAR_1);
}
