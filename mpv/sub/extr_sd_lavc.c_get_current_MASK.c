
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sub {double pts; double endpts; int valid; } ;
struct sd_lavc_priv {struct sub* subs; } ;


 int VAR_0 ;
 double VAR_1 ;

__attribute__((used)) static struct sub *FUNC_0(struct sd_lavc_priv *VAR_2, double VAR_3)
{
    struct sub *VAR_4 = ((void*)0);
    for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        struct sub *VAR_6 = &VAR_2->subs[VAR_5];
        if (!VAR_6->valid)
            continue;
        if (VAR_3 == VAR_1 ||
            ((VAR_6->pts == VAR_1 || VAR_3 >= VAR_6->pts) &&
             (VAR_6->endpts == VAR_1 || VAR_3 < VAR_6->endpts)))
        {

            if (VAR_6->endpts == VAR_1 && VAR_3 >= VAR_6->pts + 60)
                break;
            VAR_4 = VAR_6;
            break;
        }
    }
    return VAR_4;
}
