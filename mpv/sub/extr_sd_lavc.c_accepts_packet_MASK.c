
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sub {double pts; double endpts; int valid; } ;
struct sd_lavc_priv {double current_pts; struct sub* subs; } ;
struct sd {struct sd_lavc_priv* priv; } ;


 int VAR_0 ;
 double VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct sd *VAR_2, double VAR_3)
{
    struct sd_lavc_priv *VAR_4 = VAR_2->priv;

    double VAR_5 = VAR_4->current_pts;
    if (VAR_3 != VAR_1) {

        if (VAR_5 == VAR_1 || VAR_3 < VAR_5)
            VAR_5 = VAR_3;


        if (VAR_5 + 1 < VAR_3)
            VAR_5 = VAR_3;
    }

    int VAR_6 = -1;
    for (int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        struct sub *VAR_8 = &VAR_4->subs[VAR_7];
        if (!VAR_8->valid)
            continue;
        if (VAR_5 == VAR_1 ||
            ((VAR_8->pts == VAR_1 || VAR_8->pts >= VAR_5) ||
             (VAR_8->endpts == VAR_1 || VAR_5 < VAR_8->endpts)))
        {
            VAR_6 = VAR_7;
        }
    }


    return VAR_6 + 1 < VAR_0;
}
