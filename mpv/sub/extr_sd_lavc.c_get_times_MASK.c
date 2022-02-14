
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sub {double pts; double endpts; } ;
struct sd_times {double start; double end; } ;
struct sd_lavc_priv {int dummy; } ;
struct sd {struct sd_lavc_priv* priv; } ;


 double VAR_0 ;
 struct sub* FUNC_0 (struct sd_lavc_priv*,double) ;

__attribute__((used)) static struct sd_times FUNC_1(struct sd *VAR_1, double VAR_2)
{
    struct sd_lavc_priv *VAR_3 = VAR_1->priv;
    struct sd_times VAR_4 = { .start = VAR_0, .end = VAR_0 };

    if (VAR_2 == VAR_0)
        return VAR_4;

    struct sub *VAR_5 = FUNC_0(VAR_3, VAR_2);

    if (!VAR_5)
        return VAR_4;

    VAR_4.start = VAR_5->pts;
    VAR_4.end = VAR_5->endpts;

    return VAR_4;
}
