
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct vo_w32_state {int input_ctx; } ;


 int FUNC_0 (struct vo_w32_state*,int ) ;
 int FUNC_1 (struct vo_w32_state*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static bool FUNC_3(struct vo_w32_state *VAR_0, wchar_t VAR_1)
{
    int VAR_2 = FUNC_0(VAR_0, VAR_1);

    if (VAR_2 == 0)
        return 1;
    if (VAR_2 < 0x20)
        return 0;

    FUNC_2(VAR_0->input_ctx, VAR_2 | FUNC_1(VAR_0));
    return 1;
}
