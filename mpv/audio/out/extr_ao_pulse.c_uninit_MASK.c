
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int wakeup_lock; int wakeup; int * mainloop; int * context; int * stream; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->mainloop)
        FUNC_5(VAR_1->mainloop);

    if (VAR_1->stream) {
        FUNC_2(VAR_1->stream);
        FUNC_3(VAR_1->stream);
        VAR_1->stream = ((void*)0);
    }

    if (VAR_1->context) {
        FUNC_0(VAR_1->context);
        FUNC_1(VAR_1->context);
        VAR_1->context = ((void*)0);
    }

    if (VAR_1->mainloop) {
        FUNC_4(VAR_1->mainloop);
        VAR_1->mainloop = ((void*)0);
    }

    FUNC_6(&VAR_1->wakeup);
    FUNC_7(&VAR_1->wakeup_lock);
}
