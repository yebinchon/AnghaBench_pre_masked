
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPOpts {int play_length; int play_end; } ;
struct MPContext {struct MPOpts* opts; } ;


 double VAR_0 ;
 double FUNC_0 (struct MPContext*) ;
 double FUNC_1 (struct MPContext*,int ) ;

__attribute__((used)) static double FUNC_2(struct MPContext *VAR_1)
{
    struct MPOpts *VAR_2 = VAR_1->opts;
    double VAR_3 = FUNC_1(VAR_1, VAR_2->play_end);
    double VAR_4 = FUNC_1(VAR_1, VAR_2->play_length);
    if (VAR_4 != VAR_0) {
        double VAR_5 = FUNC_0(VAR_1);
        if (VAR_3 == VAR_0 || VAR_5 + VAR_4 < VAR_3)
            VAR_3 = VAR_5 + VAR_4;
    }
    return VAR_3;
}
