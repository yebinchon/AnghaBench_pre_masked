
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_2__ {int mistimed_frames_total; int display_sync_active; int vo_chain; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int FUNC_0 (int,void*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, struct m_property *VAR_2,
                                            int VAR_3, void *VAR_4)
{
    MPContext *VAR_5 = VAR_1;
    if (!VAR_5->vo_chain || !VAR_5->display_sync_active)
        return VAR_0;

    return FUNC_0(VAR_3, VAR_4, VAR_5->mistimed_frames_total);
}
