
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct MPContext {scalar_t__ video_pts; int next_frames; TYPE_4__* video_out; TYPE_1__* opts; TYPE_3__* vo_chain; } ;
struct TYPE_8__ {TYPE_2__* driver; } ;
struct TYPE_7__ {scalar_t__ is_sparse; } ;
struct TYPE_6__ {int caps; scalar_t__ untimed; } ;
struct TYPE_5__ {scalar_t__ video_latency_hacks; scalar_t__ untimed; } ;


 int FUNC_0 (int,int,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(struct MPContext *VAR_2, bool VAR_3)
{

    if (VAR_3)
        return 1;

    if (VAR_2->video_out->driver->caps & VAR_1)
        return 1;

    if (VAR_2->vo_chain && VAR_2->vo_chain->is_sparse)
        return 1;

    if (VAR_2->opts->untimed || VAR_2->video_out->driver->untimed)
        return 1;


    int VAR_4 = VAR_2->opts->video_latency_hacks ? 1 : 2;


    if (VAR_2->video_pts == VAR_0)
        return VAR_4;

    int VAR_5 = FUNC_2(VAR_2->video_out);
    return FUNC_0(VAR_5, VAR_4, FUNC_1(VAR_2->next_frames) - 1);
}
