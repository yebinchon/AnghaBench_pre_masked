
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_cs_flush {int opcode; } ;
struct wined3d_cs {int queries_flushed; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_flush* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wined3d_cs_flush* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;

void FUNC_2(struct wined3d_cs *VAR_3)
{
    struct wined3d_cs_flush *VAR_4;

    VAR_4 = VAR_3->ops->require_space(VAR_3, sizeof(*VAR_4), VAR_2);
    VAR_4->opcode = VAR_1;

    VAR_3->ops->submit(VAR_3, VAR_2);
    VAR_3->queries_flushed = VAR_0;
}
