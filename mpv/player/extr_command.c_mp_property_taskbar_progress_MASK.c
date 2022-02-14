
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_8__ {scalar_t__ video_out; TYPE_2__* opts; } ;
struct TYPE_7__ {TYPE_1__* vo; } ;
struct TYPE_6__ {int taskbar_progress; } ;
typedef TYPE_3__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,struct m_property*,int,void*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, struct m_property *VAR_3,
                             int VAR_4, void *VAR_5)
{
    MPContext *VAR_6 = VAR_2;
    if (VAR_4 == VAR_1) {
        int VAR_7 = !!*(int *) VAR_5;
        if (VAR_6->opts->vo->taskbar_progress == VAR_7)
            return VAR_0;
        VAR_6->opts->vo->taskbar_progress = VAR_7;
        if (VAR_6->video_out)
            FUNC_1(VAR_6);
        return VAR_0;
    }
    return FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5);
}
