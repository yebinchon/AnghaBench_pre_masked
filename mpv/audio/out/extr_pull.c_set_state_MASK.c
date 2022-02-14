
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_pull_state {int state; } ;
struct ao {struct ao_pull_state* api_priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ao *VAR_1, int VAR_2)
{
    struct ao_pull_state *VAR_3 = VAR_1->api_priv;
    while (1) {
        int VAR_4 = FUNC_1(&VAR_3->state);
        if (VAR_4 == VAR_0) {

            FUNC_2(1);
            continue;
        }
        if (FUNC_0(&VAR_3->state, &VAR_4, VAR_2))
            break;
    }
}
