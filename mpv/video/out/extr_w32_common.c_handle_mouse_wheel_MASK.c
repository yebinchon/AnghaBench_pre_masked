
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_w32_state {int input_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vo_w32_state*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct vo_w32_state *VAR_4, bool VAR_5, int VAR_6)
{
    int VAR_7;
    if (VAR_5)
        VAR_7 = VAR_6 > 0 ? VAR_2 : VAR_1;
    else
        VAR_7 = VAR_6 > 0 ? VAR_3 : VAR_0;
    FUNC_2(VAR_4->input_ctx, VAR_7 | FUNC_1(VAR_4), FUNC_0(VAR_6) / 120.);
}
