
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {int dummy; } ;
struct MPContext {scalar_t__ playback_pts; double play_dir; scalar_t__ last_seek_pts; struct demuxer* demuxer; } ;


 scalar_t__ VAR_0 ;

double FUNC_0(struct MPContext *VAR_1)
{
    struct demuxer *VAR_2 = VAR_1->demuxer;
    if (VAR_2) {
        if (VAR_1->playback_pts != VAR_0)
            return VAR_1->playback_pts * VAR_1->play_dir;
        if (VAR_1->last_seek_pts != VAR_0)
            return VAR_1->last_seek_pts;
    }
    return VAR_0;
}
