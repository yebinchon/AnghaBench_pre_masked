
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int dummy; } ;
struct wined3d_context {int constant_update_mask; } ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct wined3d_context *VAR_0,
        const struct wined3d_state *VAR_1, DWORD VAR_2)
{
    int VAR_3 = VAR_2 - FUNC_0(FUNC_2(0));
    VAR_0->constant_update_mask |= FUNC_1(VAR_3);
}
