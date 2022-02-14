
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {scalar_t__ ab_loop_clip; } ;


 double VAR_0 ;
 scalar_t__ FUNC_0 (struct MPContext*,double*) ;
 double FUNC_1 (struct MPContext*) ;

double FUNC_2(struct MPContext *VAR_1)
{
    double VAR_2 = FUNC_1(VAR_1);
    double VAR_3[2];
    if (VAR_1->ab_loop_clip && FUNC_0(VAR_1, VAR_3)) {
        if (VAR_2 == VAR_0 || VAR_2 > VAR_3[1])
            VAR_2 = VAR_3[1];
    }
    return VAR_2;
}
