
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_push_state {int silence_samples; int * silence; } ;
struct TYPE_2__ {int num; } ;
struct ao {int format; TYPE_1__ channels; struct ao_push_state* api_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ao_push_state*,int) ;

__attribute__((used)) static bool FUNC_5(struct ao *VAR_1, int VAR_2)
{
    struct ao_push_state *VAR_3 = VAR_1->api_priv;

    if (VAR_2 <= 0 || !FUNC_1(VAR_1->format))
        return 0;

    if (VAR_2 > VAR_3->silence_samples) {
        FUNC_3(VAR_3->silence[0]);

        int VAR_4 = FUNC_2(VAR_1->format) * VAR_2 * VAR_1->channels.num;
        VAR_3->silence[0] = FUNC_4(VAR_3, VAR_4);
        for (int VAR_5 = 1; VAR_5 < VAR_0; VAR_5++)
            VAR_3->silence[VAR_5] = VAR_3->silence[0];
        VAR_3->silence_samples = VAR_2;

        FUNC_0(VAR_3->silence[0], VAR_4, VAR_1->format);
    }

    return 1;
}
