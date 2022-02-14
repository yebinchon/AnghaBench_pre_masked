
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vo_chain {TYPE_1__* filter; } ;
struct MPContext {int num_past_frames; int num_next_frames; TYPE_3__* past_frames; TYPE_2__** next_frames; struct vo_chain* vo_chain; } ;
struct TYPE_6__ {double duration; double approx_duration; } ;
struct TYPE_5__ {double pts; } ;
struct TYPE_4__ {double container_fps; } ;


 int FUNC_0 (int ,double) ;
 double VAR_0 ;
 int FUNC_1 (struct MPContext*,char*,int ) ;
 int FUNC_2 (int) ;
 double FUNC_3 (double) ;

__attribute__((used)) static void FUNC_4(struct MPContext *VAR_1)
{
    struct vo_chain *VAR_2 = VAR_1->vo_chain;
    FUNC_2(VAR_1->num_past_frames >= 1 && VAR_1->num_next_frames >= 1);

    double VAR_3 = VAR_2->filter->container_fps > 0
                            ? 1.0 / VAR_2->filter->container_fps : -1;
    double VAR_4 = VAR_3;

    if (VAR_1->num_next_frames >= 2) {
        double VAR_5 = VAR_1->next_frames[0]->pts;
        double VAR_6 = VAR_1->next_frames[1]->pts;
        if (VAR_5 != VAR_0 && VAR_6 != VAR_0 && VAR_6 >= VAR_5)
            VAR_4 = VAR_6 - VAR_5;
    }






    double VAR_7 = 0.001 * 3 + 0.0001;

    double VAR_8 = 0;
    int VAR_9 = 0;
    for (int VAR_10 = 1; VAR_10 < VAR_1->num_past_frames; VAR_10++) {

        double VAR_11 = VAR_1->past_frames[VAR_10].duration;
        if (VAR_11 <= 0 || FUNC_3(VAR_11 - VAR_4) >= VAR_7)
            break;
        VAR_8 += VAR_11;
        VAR_9 += 1;
    }
    double VAR_12 = VAR_9 > 0 ? VAR_8 / VAR_9 : VAR_4;


    if (VAR_3 > 0) {


        if (FUNC_3(VAR_4 - VAR_3) < VAR_7 &&
            FUNC_3(VAR_8 - VAR_3 * VAR_9) < VAR_7 &&
            (VAR_9 >= 16 || VAR_9 >= VAR_1->num_past_frames - 4))
        {
            VAR_12 = VAR_3;
        }
    }

    VAR_1->past_frames[0].duration = VAR_4;
    VAR_1->past_frames[0].approx_duration = VAR_12;

    FUNC_1(VAR_1, "value %f frame-duration", FUNC_0(0, VAR_4));
    FUNC_1(VAR_1, "value %f frame-duration-approx", FUNC_0(0, VAR_12));
}
