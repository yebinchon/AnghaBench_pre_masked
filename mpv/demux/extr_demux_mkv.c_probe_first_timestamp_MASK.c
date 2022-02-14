
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct demuxer {int start_time; TYPE_2__* priv; } ;
struct TYPE_4__ {int cluster_tc; TYPE_1__* opts; } ;
typedef TYPE_2__ mkv_demuxer_t ;
struct TYPE_3__ {int probe_start_time; } ;


 int FUNC_0 (struct demuxer*,char*,int) ;
 int FUNC_1 (struct demuxer*) ;

__attribute__((used)) static void FUNC_2(struct demuxer *VAR_0)
{
    mkv_demuxer_t *VAR_1 = VAR_0->priv;

    if (!VAR_1->opts->probe_start_time)
        return;

    FUNC_1(VAR_0);

    VAR_0->start_time = VAR_1->cluster_tc / 1e9;

    if (VAR_0->start_time > 0)
        FUNC_0(VAR_0, "Start PTS: %f\n", VAR_0->start_time);
}
