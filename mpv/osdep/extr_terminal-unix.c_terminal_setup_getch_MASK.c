
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 struct input_ctx* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int ,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_6(struct input_ctx *VAR_13)
{
    if (!VAR_6 || VAR_7)
        return;

    if (FUNC_3(VAR_5) < 0)
        return;




    VAR_10 = FUNC_2(VAR_12) && FUNC_2(VAR_4);

    VAR_7 = VAR_13;

    if (FUNC_4(&VAR_8, ((void*)0), VAR_11, ((void*)0))) {
        VAR_7 = ((void*)0);
        FUNC_0();
        FUNC_1();
        return;
    }

    FUNC_5(VAR_1, VAR_9, VAR_0, 0);
    FUNC_5(VAR_2, VAR_9, VAR_0, 0);
    FUNC_5(VAR_3, VAR_9, VAR_0, 0);
}
