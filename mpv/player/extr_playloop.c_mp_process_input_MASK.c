
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int input; } ;
typedef int mp_cmd_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct MPContext*,int ) ;
 int FUNC_3 (struct MPContext*,int *,int *,int *,int *) ;

void FUNC_4(struct MPContext *VAR_0)
{
    for (;;) {
        mp_cmd_t *VAR_1 = FUNC_1(VAR_0->input);
        if (!VAR_1)
            break;
        FUNC_3(VAR_0, VAR_1, ((void*)0), ((void*)0), ((void*)0));
    }
    FUNC_2(VAR_0, FUNC_0(VAR_0->input));
}
