
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_resource {int dummy; } ;
struct wined3d_cs_unmap {unsigned int sub_resource_idx; int * hr; struct wined3d_resource* resource; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* finish ) (struct wined3d_cs*,int ) ;int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_unmap* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_unmap* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;
 int FUNC_2 (struct wined3d_cs*,int ) ;
 int FUNC_3 (struct wined3d_cs*) ;

HRESULT FUNC_4(struct wined3d_cs *VAR_2, struct wined3d_resource *VAR_3, unsigned int VAR_4)
{
    struct wined3d_cs_unmap *VAR_5;
    HRESULT VAR_6;

    FUNC_3(VAR_2);

    VAR_5 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_5), VAR_1);
    VAR_5->opcode = VAR_0;
    VAR_5->resource = VAR_3;
    VAR_5->sub_resource_idx = VAR_4;
    VAR_5->hr = &VAR_6;

    VAR_2->ops->submit(VAR_2, VAR_1);
    VAR_2->ops->finish(VAR_2, VAR_1);

    return VAR_6;
}
