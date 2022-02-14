
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_2__ {scalar_t__ video_status; scalar_t__ audio_status; int playback_initialized; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,void*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, struct m_property *VAR_3,
                                   int VAR_4, void *VAR_5)
{
    MPContext *VAR_6 = VAR_2;
    if (!VAR_6->playback_initialized)
        return VAR_0;
    bool VAR_7 = VAR_6->video_status == VAR_1 &&
               VAR_6->audio_status == VAR_1;
    return FUNC_0(VAR_4, VAR_5, VAR_7);
}
