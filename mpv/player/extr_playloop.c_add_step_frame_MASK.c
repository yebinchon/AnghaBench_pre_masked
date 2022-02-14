
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int step_frames; int hrseek_active; int vo_chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPContext*,int ,int ,int ,int ) ;
 int FUNC_1 (struct MPContext*,int) ;

void FUNC_2(struct MPContext *VAR_2, int VAR_3)
{
    if (!VAR_2->vo_chain)
        return;
    if (VAR_3 > 0) {
        VAR_2->step_frames += 1;
        FUNC_1(VAR_2, 0);
    } else if (VAR_3 < 0) {
        if (!VAR_2->hrseek_active) {
            FUNC_0(VAR_2, VAR_0, 0, VAR_1, 0);
            FUNC_1(VAR_2, 1);
        }
    }
}
