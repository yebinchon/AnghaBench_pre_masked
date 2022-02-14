
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_push_state {int terminate; int thread; int lock; } ;
struct ao {struct ao_push_state* api_priv; } ;


 int FUNC_0 (struct ao*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ao*) ;

__attribute__((used)) static void FUNC_5(struct ao *VAR_0)
{
    struct ao_push_state *VAR_1 = VAR_0->api_priv;

    FUNC_2(&VAR_1->lock);
    VAR_1->terminate = 1;
    FUNC_4(VAR_0);
    FUNC_3(&VAR_1->lock);

    FUNC_1(VAR_1->thread, ((void*)0));

    FUNC_0(VAR_0);
}
