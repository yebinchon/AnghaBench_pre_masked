
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_cs_push_constants {int constants; int count; int start_idx; int type; } ;
struct wined3d_cs {int dummy; } ;


 int FUNC_0 (struct wined3d_cs*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    const struct wined3d_cs_push_constants *VAR_2 = VAR_1;

    FUNC_0(VAR_0, VAR_2->type, VAR_2->start_idx, VAR_2->count, VAR_2->constants);
}
