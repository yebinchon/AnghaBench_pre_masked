
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {double playback_pts; } ;


 double FUNC_0 (double,int ,double) ;
 double VAR_0 ;
 double FUNC_1 (struct MPContext*) ;
 double FUNC_2 (struct MPContext*) ;

double FUNC_3(struct MPContext *VAR_1)
{
    double VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 == VAR_0)
        return VAR_2;


    if (VAR_1->playback_pts == VAR_0) {
        double VAR_3 = FUNC_2(VAR_1);
        if (VAR_3 >= 0)
            VAR_2 = FUNC_0(VAR_2, 0, VAR_3);
    }
    return VAR_2;
}
