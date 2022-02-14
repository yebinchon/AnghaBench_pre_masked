
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_chain {int dummy; } ;
struct MPOpts {scalar_t__ pause; } ;
struct MPContext {double time_frame; scalar_t__ video_status; struct vo_chain* vo_chain; struct MPOpts* opts; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct MPContext*,int ) ;

void FUNC_1(struct MPContext *VAR_2)
{
    struct MPOpts *VAR_3 = VAR_2->opts;
    struct vo_chain *VAR_4 = VAR_2->vo_chain;

    if (!VAR_4)
        return;


    if (VAR_3->pause || VAR_2->time_frame >= 0.5 ||
        VAR_2->video_status == VAR_1)
    {
        FUNC_0(VAR_2, VAR_0);
    }
}
