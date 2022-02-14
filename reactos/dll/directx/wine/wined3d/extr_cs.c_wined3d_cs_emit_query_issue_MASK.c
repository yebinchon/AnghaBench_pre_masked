
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_query {int dummy; } ;
struct wined3d_cs_query_issue {int flags; struct wined3d_query* query; int opcode; } ;
struct wined3d_cs {int queries_flushed; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_query_issue* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wined3d_cs_query_issue* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;

void FUNC_2(struct wined3d_cs *VAR_3, struct wined3d_query *VAR_4, DWORD VAR_5)
{
    struct wined3d_cs_query_issue *VAR_6;

    VAR_6 = VAR_3->ops->require_space(VAR_3, sizeof(*VAR_6), VAR_2);
    VAR_6->opcode = VAR_1;
    VAR_6->query = VAR_4;
    VAR_6->flags = VAR_5;

    VAR_3->ops->submit(VAR_3, VAR_2);
    VAR_3->queries_flushed = VAR_0;
}
