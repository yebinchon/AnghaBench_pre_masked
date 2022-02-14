
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_7__ {int mouse_event_ts; TYPE_1__* opts; } ;
struct TYPE_6__ {int fullscreen; } ;
struct TYPE_5__ {TYPE_2__* vo; } ;
typedef TYPE_3__ MPContext ;


 int VAR_0 ;
 int FUNC_0 (struct m_property*,int,void*,int ,int*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, struct m_property *VAR_2,
                                  int VAR_3, void *VAR_4)
{
    MPContext *VAR_5 = VAR_1;
    int VAR_6 = VAR_5->opts->vo->fullscreen;
    int VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0,
                                &VAR_5->opts->vo->fullscreen, VAR_5);
    if (VAR_6 && VAR_6 != VAR_5->opts->vo->fullscreen)
        VAR_5->mouse_event_ts--;
    return VAR_7;
}
