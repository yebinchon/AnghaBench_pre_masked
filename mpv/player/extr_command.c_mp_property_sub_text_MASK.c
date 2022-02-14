
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct track {struct dec_sub* d_sub; } ;
struct m_property {int dummy; } ;
struct dec_sub {int dummy; } ;
struct TYPE_2__ {double playback_pts; struct track*** current_track; } ;
typedef TYPE_1__ MPContext ;


 double VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,void*,char*) ;
 char* FUNC_1 (struct dec_sub*,double) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, struct m_property *VAR_4,
                                int VAR_5, void *VAR_6)
{
    MPContext *VAR_7 = VAR_3;
    struct track *VAR_8 = VAR_7->current_track[0][VAR_2];
    struct dec_sub *VAR_9 = VAR_8 ? VAR_8->d_sub : ((void*)0);
    double VAR_10 = VAR_7->playback_pts;
    if (!VAR_9 || VAR_10 == VAR_0)
        return VAR_1;

    char *VAR_11 = FUNC_1(VAR_9, VAR_10);
    if (!VAR_11)
        VAR_11 = "";

    return FUNC_0(VAR_5, VAR_6, VAR_11);
}
