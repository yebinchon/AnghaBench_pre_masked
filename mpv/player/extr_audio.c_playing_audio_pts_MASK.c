
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {double audio_speed; int ao; } ;


 double VAR_0 ;
 double FUNC_0 (int ) ;
 double FUNC_1 (struct MPContext*) ;

double FUNC_2(struct MPContext *VAR_1)
{
    double VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 == VAR_0 || !VAR_1->ao)
        return VAR_2;
    return VAR_2 - VAR_1->audio_speed * FUNC_0(VAR_1->ao);
}
