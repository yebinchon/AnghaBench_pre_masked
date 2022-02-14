
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct track {struct dec_sub* d_sub; } ;
struct sd_times {double start; double end; } ;
struct m_property {int dummy; } ;
struct dec_sub {int dummy; } ;
struct TYPE_2__ {double playback_pts; struct track*** current_track; } ;
typedef TYPE_1__ MPContext ;


 double VAR_0 ;
 size_t VAR_1 ;
 struct sd_times FUNC_0 (struct dec_sub*,double) ;

__attribute__((used)) static struct sd_times FUNC_1(void *VAR_2, struct m_property *VAR_3,
                                int VAR_4, void *VAR_5)
{
    struct sd_times VAR_6 = { .start = VAR_0, .end = VAR_0 };
    MPContext *VAR_7 = VAR_2;
    struct track *VAR_8 = VAR_7->current_track[0][VAR_1];
    struct dec_sub *VAR_9 = VAR_8 ? VAR_8->d_sub : ((void*)0);
    double VAR_10 = VAR_7->playback_pts;
    if (!VAR_9 || VAR_10 == VAR_0)
        return VAR_6;
    return FUNC_0(VAR_9, VAR_10);
}
