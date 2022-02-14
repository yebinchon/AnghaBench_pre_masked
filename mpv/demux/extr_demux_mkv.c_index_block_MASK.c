
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct block_info {int timecode; int duration; int track; scalar_t__ keyframe; } ;
struct TYPE_5__ {int tc_scale; int cluster_start; } ;
typedef TYPE_1__ mkv_demuxer_t ;
struct TYPE_6__ {scalar_t__ priv; } ;
typedef TYPE_2__ demuxer_t ;


 int FUNC_0 (TYPE_2__*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(demuxer_t *VAR_0, struct block_info *VAR_1)
{
    mkv_demuxer_t *VAR_2 = (mkv_demuxer_t *) VAR_0->priv;
    if (VAR_1->keyframe) {
        FUNC_0(VAR_0, VAR_1->track, VAR_2->cluster_start,
                           VAR_1->timecode / VAR_2->tc_scale,
                           VAR_1->duration / VAR_2->tc_scale);
    }
}
