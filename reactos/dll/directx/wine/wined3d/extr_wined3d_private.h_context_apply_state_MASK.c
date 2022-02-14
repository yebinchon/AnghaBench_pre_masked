
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int dummy; } ;
struct wined3d_context {struct StateEntry* state_table; } ;
struct StateEntry {size_t representative; int (* apply ) (struct wined3d_context*,struct wined3d_state const*,size_t) ;} ;
typedef size_t DWORD ;


 int FUNC_0 (struct wined3d_context*,struct wined3d_state const*,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct wined3d_context *VAR_0,
        const struct wined3d_state *VAR_1, DWORD VAR_2)
{
    const struct StateEntry *VAR_3 = VAR_0->state_table;
    DWORD VAR_4 = VAR_3[VAR_2].representative;
    VAR_3[VAR_4].apply(VAR_0, VAR_1, VAR_4);
}
