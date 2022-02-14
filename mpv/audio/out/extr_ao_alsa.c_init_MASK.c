
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {TYPE_1__* opts; } ;
struct mp_chmap {int num; } ;
struct ao {struct mp_chmap channels; int format; int global; struct priv* priv; } ;
struct TYPE_2__ {int ni; } ;


 int VAR_0 ;
 int FUNC_0 (struct ao*,char*,...) ;
 int FUNC_1 (struct ao*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct ao*,int) ;
 scalar_t__ FUNC_4 (struct mp_chmap*) ;
 int FUNC_5 (struct mp_chmap*) ;
 TYPE_1__* FUNC_6 (struct ao*,int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (struct ao*) ;

__attribute__((used)) static int FUNC_9(struct ao *VAR_5)
{
    struct priv *VAR_6 = VAR_5->priv;
    VAR_6->opts = FUNC_6(VAR_5, VAR_5->global, &VAR_4);

    if (!VAR_6->opts->ni)
        VAR_5->format = FUNC_2(VAR_5->format);

    FUNC_0(VAR_5, "using ALSA version: %s\n", FUNC_7());

    int VAR_7 = 0;
    int VAR_8 = FUNC_3(VAR_5, VAR_7);
    if (VAR_8 == VAR_0) {




        FUNC_1(VAR_5, "Attempting to work around even more ALSA bugs...\n");
        VAR_7 |= VAR_1 | VAR_2 |
                VAR_3;
        VAR_8 = FUNC_3(VAR_5, VAR_7);
    }
    if (VAR_8 >= 0) {
        struct mp_chmap VAR_9 = VAR_5->channels;
        FUNC_5(&VAR_9);

        if (FUNC_4(&VAR_9) && VAR_9.num <= 2 &&
            VAR_5->channels.num > 2)
        {
            FUNC_0(VAR_5, "Working around braindead dmix multichannel behavior.\n");
            FUNC_8(VAR_5);
            VAR_5->channels = VAR_9;
            VAR_8 = FUNC_3(VAR_5, VAR_7);
        }
    }

    return VAR_8;
}
