
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_w32_state {int window; int input_ctx; int current_fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct vo_w32_state*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static bool FUNC_6(struct vo_w32_state *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    VAR_6 |= FUNC_3(VAR_5);
    FUNC_4(VAR_5->input_ctx, VAR_6 | VAR_1);

    if (VAR_6 == VAR_3 && !VAR_5->current_fs &&
        !FUNC_5(VAR_5->input_ctx, VAR_7, VAR_8))
    {

        FUNC_0();
        FUNC_1(VAR_5->window, VAR_4, VAR_0, 0);
        FUNC_4(VAR_5->input_ctx, VAR_3 | VAR_2);


        return 1;
    }

    FUNC_2(VAR_5->window);
    return 0;
}
