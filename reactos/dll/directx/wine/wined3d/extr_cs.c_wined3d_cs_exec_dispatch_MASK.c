
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_state {int * unordered_access_view; int * shader; } ;
struct TYPE_6__ {TYPE_1__* buffer; } ;
struct TYPE_7__ {TYPE_2__ indirect; } ;
struct TYPE_8__ {TYPE_3__ u; scalar_t__ indirect; } ;
struct wined3d_cs_dispatch {TYPE_4__ parameters; } ;
struct wined3d_cs {int device; struct wined3d_state state; } ;
struct TYPE_5__ {int resource; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,struct wined3d_state*,TYPE_4__*) ;
 int FUNC_1 (struct wined3d_state*,unsigned int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct wined3d_cs *VAR_2, const void *VAR_3)
{
    const struct wined3d_cs_dispatch *VAR_4 = VAR_3;
    struct wined3d_state *VAR_5 = &VAR_2->state;

    FUNC_0(VAR_2->device, VAR_5, &VAR_4->parameters);

    if (VAR_4->parameters.indirect)
        FUNC_3(&VAR_4->parameters.u.indirect.buffer->resource);

    FUNC_1(VAR_5, 1u << VAR_1);
    FUNC_2(VAR_5->shader[VAR_1],
            VAR_5->unordered_access_view[VAR_0]);
}
