
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct m_rel_time {int type; double pos; } ;
struct MPContext {TYPE_2__* demuxer; TYPE_1__* opts; } ;
struct TYPE_4__ {double start_time; } ;
struct TYPE_3__ {int rebase_start_time; } ;


 int FUNC_0 (int ,double) ;
 double VAR_0 ;




 double FUNC_1 (struct MPContext*,double) ;
 double FUNC_2 (struct MPContext*) ;

double FUNC_3(struct MPContext *VAR_1, struct m_rel_time VAR_2)
{
    double VAR_3 = FUNC_2(VAR_1);

    double VAR_4 = 0;
    if (VAR_1->demuxer && !VAR_1->opts->rebase_start_time)
        VAR_4 = VAR_1->demuxer->start_time;

    switch (VAR_2.type) {
    case 131:
        return VAR_2.pos;
    case 128:
        if (VAR_2.pos >= 0) {
            return VAR_4 + VAR_2.pos;
        } else {
            if (VAR_3 >= 0)
                return VAR_4 + FUNC_0(VAR_3 + VAR_2.pos, 0.0);
        }
        break;
    case 129:
        if (VAR_3 >= 0)
            return VAR_4 + VAR_3 * (VAR_2.pos / 100.0);
        break;
    case 130:
        return FUNC_1(VAR_1, VAR_2.pos);
    }

    return VAR_0;
}
