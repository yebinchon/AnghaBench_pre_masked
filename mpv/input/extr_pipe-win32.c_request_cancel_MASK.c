
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int file; int thread; int cancel_requested; } ;
struct mp_input_src {struct priv* priv; } ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mp_input_src*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(struct mp_input_src *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    FUNC_1(VAR_1, "Exiting...\n");
    FUNC_3(&VAR_2->cancel_requested, 1);




    do {
        if (FUNC_0(VAR_2->file, ((void*)0)))
            break;
    } while (FUNC_2(VAR_2->thread, 1) != VAR_0);
}
