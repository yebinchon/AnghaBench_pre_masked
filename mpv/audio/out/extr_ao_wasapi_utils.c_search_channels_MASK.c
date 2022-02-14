
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wasapi_state {int opt_exclusive; } ;
struct mp_chmap_sel {struct wasapi_state* tmp; } ;
struct mp_chmap {int dummy; } ;
struct ao {struct mp_chmap channels; struct wasapi_state* priv; } ;
struct TYPE_7__ {scalar_t__ nSamplesPerSec; } ;
struct TYPE_8__ {TYPE_1__ Format; } ;
typedef TYPE_2__ WAVEFORMATEXTENSIBLE ;


 int FUNC_0 (struct ao*,char*) ;
 scalar_t__ FUNC_1 (struct ao*,struct mp_chmap_sel*,struct mp_chmap*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,struct mp_chmap*) ;
 int FUNC_4 (struct mp_chmap*,int ) ;
 int FUNC_5 (struct mp_chmap_sel*,struct mp_chmap*) ;
 scalar_t__ FUNC_6 (struct ao*,TYPE_2__*,struct mp_chmap*) ;
 scalar_t__ FUNC_7 (struct ao*,TYPE_2__*) ;

__attribute__((used)) static bool FUNC_8(struct ao *VAR_0, WAVEFORMATEXTENSIBLE *VAR_1)
{
    struct wasapi_state *VAR_2 = VAR_0->priv;
    struct mp_chmap_sel VAR_3 = {.tmp = VAR_2};
    struct mp_chmap VAR_4;

    char *VAR_5[] =
        {"stereo", "5.1", "7.1", "6.1", "mono", "2.1", "4.0", "5.0",
         "3.0", "3.0(back)",
         "quad", "quad(side)", "3.1",
         "5.0(side)", "4.1",
         "5.1(side)", "6.0", "6.0(front)", "hexagonal"
         "6.1(back)", "6.1(front)", "7.0", "7.0(front)",
         "7.1(wide)", "7.1(wide-side)", "7.1(rear)", "octagonal", ((void*)0)};

    VAR_1->Format.nSamplesPerSec = 0;
    for (int VAR_6 = 0; VAR_5[VAR_6]; VAR_6++) {
        FUNC_4(&VAR_4, FUNC_2(VAR_5[VAR_6]));
        if (!VAR_1->Format.nSamplesPerSec) {
            if (FUNC_6(VAR_0, VAR_1, &VAR_4))
                FUNC_5(&VAR_3, &VAR_4);
        } else {
            FUNC_3(VAR_1, &VAR_4);
            if (FUNC_7(VAR_0, VAR_1))
                FUNC_5(&VAR_3, &VAR_4);
        }
    }

    VAR_4 = VAR_0->channels;
    if (FUNC_1(VAR_0, &VAR_3, &VAR_4, !VAR_2->opt_exclusive)){
        FUNC_3(VAR_1, &VAR_4);
        return 1;
    }

    FUNC_0(VAR_0, "No suitable audio format found\n");
    return 0;
}
