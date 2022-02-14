
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_w32_state {int input_ctx; } ;
typedef int UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vo_w32_state*,int,int) ;
 int FUNC_1 (struct vo_w32_state*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct vo_w32_state *VAR_3, UINT VAR_4, UINT VAR_5)
{

    if (VAR_5 & VAR_1)
        return;

    int VAR_6 = FUNC_3(VAR_4, VAR_5 & VAR_0);
    if (!VAR_6) {
        VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5 & (0xff | VAR_0));
        if (!VAR_6)
            return;
    }

    FUNC_2(VAR_3->input_ctx, VAR_6 | FUNC_1(VAR_3) | VAR_2);
}
