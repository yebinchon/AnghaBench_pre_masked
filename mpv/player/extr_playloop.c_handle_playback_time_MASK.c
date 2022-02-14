
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {scalar_t__ video_status; scalar_t__ audio_status; int playback_pts; int video_pts; TYPE_1__* vo_chain; } ;
struct TYPE_2__ {int is_sparse; int is_coverart; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct MPContext*) ;

__attribute__((used)) static void FUNC_1(struct MPContext *VAR_2)
{
    if (VAR_2->vo_chain &&
        !VAR_2->vo_chain->is_coverart &&
        !VAR_2->vo_chain->is_sparse &&
        VAR_2->video_status >= VAR_1 &&
        VAR_2->video_status < VAR_0)
    {
        VAR_2->playback_pts = VAR_2->video_pts;
    } else if (VAR_2->audio_status >= VAR_1 &&
               VAR_2->audio_status < VAR_0)
    {
        VAR_2->playback_pts = FUNC_0(VAR_2);
    }
}
