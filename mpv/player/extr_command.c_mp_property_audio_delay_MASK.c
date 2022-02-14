
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_6__ {float delay; TYPE_1__* opts; int vo_chain; int ao_chain; } ;
struct TYPE_5__ {float audio_delay; } ;
typedef TYPE_2__ MPContext ;


 int VAR_0 ;


 char* FUNC_0 (float) ;
 int FUNC_1 (TYPE_2__*,struct m_property*,int,void*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, struct m_property *VAR_2,
                                   int VAR_3, void *VAR_4)
{
    MPContext *VAR_5 = VAR_1;
    float VAR_6 = VAR_5->opts->audio_delay;
    switch (VAR_3) {
    case 129:
        *(char **)VAR_4 = FUNC_0(VAR_6);
        return VAR_0;
    case 128: {
        int VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);
        if (VAR_5->ao_chain && VAR_5->vo_chain)
            VAR_5->delay += VAR_5->opts->audio_delay - VAR_6;
        FUNC_2(VAR_5);
        return VAR_7;
    }
    }
    return FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);
}
