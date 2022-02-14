
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; scalar_t__ num_stops; int stops; } ;
struct MPContext {TYPE_1__ osd_progbar; int osd; } ;


 double VAR_0 ;
 int FUNC_0 (struct MPContext*,int ,scalar_t__,float) ;
 double FUNC_1 (struct MPContext*,int) ;
 int FUNC_2 (struct MPContext*,double*) ;
 int FUNC_3 (struct MPContext*) ;
 double FUNC_4 (struct MPContext*) ;
 int FUNC_5 (struct MPContext*) ;
 int FUNC_6 (int ,TYPE_1__*) ;

void FUNC_7(struct MPContext *VAR_1, int VAR_2)
{
    if (VAR_1->osd_progbar.type != VAR_2)
        return;

    VAR_1->osd_progbar.num_stops = 0;
    double VAR_3 = FUNC_4(VAR_1);
    if (VAR_3 > 0) {

        double VAR_4[2];
        bool VAR_5 = FUNC_2(VAR_1, VAR_4);
        for (int VAR_6 = 0; VAR_6 < 2; VAR_6++) {
            if (VAR_4[VAR_6] != VAR_0) {
                FUNC_0(VAR_1, VAR_1->osd_progbar.stops,
                                 VAR_1->osd_progbar.num_stops, VAR_4[VAR_6] / VAR_3);
            }
        }
        if (!VAR_5) {
            int VAR_7 = FUNC_3(VAR_1);
            for (int VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
                double VAR_9 = FUNC_1(VAR_1, VAR_8);
                if (VAR_9 >= 0) {
                    float VAR_10 = VAR_9 / VAR_3;
                    FUNC_0(VAR_1, VAR_1->osd_progbar.stops,
                                     VAR_1->osd_progbar.num_stops, VAR_10);
                }
            }
        }
    }
    FUNC_6(VAR_1->osd, &VAR_1->osd_progbar);
    FUNC_5(VAR_1);
}
