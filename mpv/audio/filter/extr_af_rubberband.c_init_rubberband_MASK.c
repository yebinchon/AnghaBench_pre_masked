
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int pending; int pitch; int speed; int cur_format; scalar_t__ rubber; TYPE_1__* opts; } ;
struct mp_filter {struct priv* priv; } ;
struct TYPE_2__ {int transients; int detector; int phase; int window; int smoothing; int formant; int pitch; int channels; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mp_filter*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int,int,double,double) ;
 int FUNC_7 (struct priv*,int ) ;
 int FUNC_8 (struct priv*,int ) ;

__attribute__((used)) static bool FUNC_9(struct mp_filter *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;

    FUNC_1(!VAR_3->rubber);
    FUNC_1(VAR_3->pending);

    int VAR_4 = VAR_3->opts->transients | VAR_3->opts->detector | VAR_3->opts->phase |
               VAR_3->opts->window | VAR_3->opts->smoothing | VAR_3->opts->formant |
               VAR_3->opts->pitch | VAR_3-> opts->channels |
               VAR_1;

    int VAR_5 = FUNC_5(VAR_3->pending);
    int VAR_6 = FUNC_3(VAR_3->pending);
    if (FUNC_4(VAR_3->pending) != VAR_0)
        return 0;

    VAR_3->rubber = FUNC_6(VAR_5, VAR_6, VAR_4, 1.0, 1.0);
    if (!VAR_3->rubber) {
        FUNC_0(VAR_2, "librubberband initialization failed.\n");
        return 0;
    }

    FUNC_2(VAR_3->cur_format, VAR_3->pending);

    FUNC_8(VAR_3, VAR_3->speed);
    FUNC_7(VAR_3, VAR_3->pitch);

    return 1;
}
