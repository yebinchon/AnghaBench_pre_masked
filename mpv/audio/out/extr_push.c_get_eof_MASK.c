
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_push_state {int lock; int still_playing; } ;
struct ao {struct ao_push_state* api_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct ao *VAR_0)
{
    struct ao_push_state *VAR_1 = VAR_0->api_priv;
    FUNC_0(&VAR_1->lock);
    bool VAR_2 = !VAR_1->still_playing;
    FUNC_1(&VAR_1->lock);
    return VAR_2;
}
