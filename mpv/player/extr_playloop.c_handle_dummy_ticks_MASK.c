
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {scalar_t__ video_status; double last_idle_tick; scalar_t__ paused; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct MPContext*,int ,int *) ;
 double FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct MPContext *VAR_3)
{
    if ((VAR_3->video_status != VAR_2 &&
         VAR_3->video_status != VAR_1) ||
         VAR_3->paused)
    {
        if (FUNC_1() - VAR_3->last_idle_tick > 0.050) {
            VAR_3->last_idle_tick = FUNC_1();
            FUNC_0(VAR_3, VAR_0, ((void*)0));
        }
    }
}
