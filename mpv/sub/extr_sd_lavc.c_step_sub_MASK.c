
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seekpoint {double pts; double endpts; } ;
struct sd_lavc_priv {scalar_t__ num_seekpoints; struct seekpoint* seekpoints; } ;
struct sd {struct sd_lavc_priv* priv; } ;


 double VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seekpoint*,scalar_t__,int,int ) ;

__attribute__((used)) static double FUNC_1(struct sd *VAR_3, double VAR_4, int VAR_5)
{
    struct sd_lavc_priv *VAR_6 = VAR_3->priv;
    int VAR_7 = -1;
    double VAR_8 = VAR_4;
    int VAR_9 = (VAR_5 > 0 ? 1 : -1) * !!VAR_5;

    if (VAR_6->num_seekpoints == 0)
        return VAR_1;

    FUNC_0(VAR_6->seekpoints, VAR_6->num_seekpoints, sizeof(VAR_6->seekpoints[0]),
          VAR_2);

    do {
        int VAR_10 = -1;
        double VAR_11 = 0;
        for (int VAR_12 = 0; VAR_12 < VAR_6->num_seekpoints; VAR_12++) {
            struct seekpoint *VAR_13 = &VAR_6->seekpoints[VAR_12];
            double VAR_14 = VAR_13->pts;
            if (VAR_9 < 0) {
                double VAR_15 = VAR_13->endpts == VAR_1 ? VAR_0 : VAR_13->endpts;
                if (VAR_15 < VAR_8) {
                    if (VAR_10 < 0 || VAR_15 > VAR_11) {
                        VAR_10 = VAR_12;
                        VAR_11 = VAR_15;
                    }
                }
            } else if (VAR_9 > 0) {
                if (VAR_14 > VAR_8) {
                    if (VAR_10 < 0 || VAR_14 < VAR_11) {
                        VAR_10 = VAR_12;
                        VAR_11 = VAR_14;
                    }
                }
            } else {
                if (VAR_14 < VAR_8) {
                    if (VAR_10 < 0 || VAR_14 >= VAR_11) {
                        VAR_10 = VAR_12;
                        VAR_11 = VAR_14;
                    }
                }
            }
        }
        if (VAR_10 < 0)
            break;
        VAR_8 = VAR_11 + VAR_9;
        VAR_7 = VAR_10;
        VAR_5 -= VAR_9;
    } while (VAR_5);

    return VAR_7 < 0 ? VAR_4 : VAR_6->seekpoints[VAR_7].pts;
}
