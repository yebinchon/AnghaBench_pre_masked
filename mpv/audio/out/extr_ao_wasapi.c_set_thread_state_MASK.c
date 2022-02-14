
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wasapi_state {int thread_state; } ;
struct ao {struct wasapi_state* priv; } ;
typedef enum wasapi_thread_state { ____Placeholder_wasapi_thread_state } wasapi_thread_state ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ao*) ;

__attribute__((used)) static void FUNC_2(struct ao *VAR_0,
                             enum wasapi_thread_state VAR_1)
{
    struct wasapi_state *VAR_2 = VAR_0->priv;
    FUNC_0(&VAR_2->thread_state, VAR_1);
    FUNC_1(VAR_0);
}
