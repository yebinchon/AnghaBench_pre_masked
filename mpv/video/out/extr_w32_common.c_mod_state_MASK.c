
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_w32_state {int input_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct vo_w32_state *VAR_8)
{
    int VAR_9 = 0;


    bool VAR_10 = FUNC_1(VAR_8->input_ctx) &&
        FUNC_0(VAR_6) && FUNC_0(VAR_3);

    if (FUNC_0(VAR_5) || (FUNC_0(VAR_3) && !VAR_10))
        VAR_9 |= VAR_1;
    if (FUNC_0(VAR_7))
        VAR_9 |= VAR_2;
    if (FUNC_0(VAR_4) || (FUNC_0(VAR_6) && !VAR_10))
        VAR_9 |= VAR_0;
    return VAR_9;
}
