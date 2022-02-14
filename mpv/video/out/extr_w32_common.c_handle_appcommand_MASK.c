
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_w32_state {int input_ctx; } ;
typedef int UINT ;


 int FUNC_0 (struct vo_w32_state*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct vo_w32_state *VAR_0, UINT VAR_1)
{
    if (!FUNC_2(VAR_0->input_ctx))
        return 0;
    int VAR_2 = FUNC_3(VAR_1);
    if (!VAR_2)
        return 0;
    FUNC_1(VAR_0->input_ctx, VAR_2 | FUNC_0(VAR_0));
    return 1;
}
