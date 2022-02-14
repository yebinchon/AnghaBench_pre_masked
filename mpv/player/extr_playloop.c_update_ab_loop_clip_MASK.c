
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int ab_loop_clip; double play_dir; } ;


 double VAR_0 ;
 scalar_t__ FUNC_0 (struct MPContext*,double*) ;
 double FUNC_1 (struct MPContext*) ;

void FUNC_2(struct MPContext *VAR_1)
{
    double VAR_2 = FUNC_1(VAR_1);
    double VAR_3[2];
    VAR_1->ab_loop_clip = VAR_2 != VAR_0 &&
                          FUNC_0(VAR_1, VAR_3) &&
                          VAR_2 * VAR_1->play_dir <= VAR_3[1] * VAR_1->play_dir;
}
