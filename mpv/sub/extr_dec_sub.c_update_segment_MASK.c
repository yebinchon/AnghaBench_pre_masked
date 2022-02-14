
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {scalar_t__ start; TYPE_1__* driver; int end; int codec; } ;
struct dec_sub {scalar_t__ last_vo_pts; scalar_t__ start; struct sd* new_segment; struct sd* sd; int end; int codec; } ;
struct TYPE_2__ {int (* decode ) (struct sd*,struct sd*) ;int (* uninit ) (struct sd*) ;} ;


 int FUNC_0 (struct dec_sub*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct dec_sub*,char*,scalar_t__,scalar_t__) ;
 struct sd* FUNC_2 (struct dec_sub*) ;
 int FUNC_3 (struct sd*) ;
 int FUNC_4 (struct sd*,struct sd*) ;
 int FUNC_5 (struct sd*) ;
 int FUNC_6 (struct dec_sub*) ;

__attribute__((used)) static void FUNC_7(struct dec_sub *VAR_1)
{
    if (VAR_1->new_segment && VAR_1->last_vo_pts != VAR_0 &&
        VAR_1->last_vo_pts >= VAR_1->new_segment->start)
    {
        FUNC_1(VAR_1, "Switch segment: %f at %f\n", VAR_1->new_segment->start,
                   VAR_1->last_vo_pts);

        VAR_1->codec = VAR_1->new_segment->codec;
        VAR_1->start = VAR_1->new_segment->start;
        VAR_1->end = VAR_1->new_segment->end;
        struct sd *VAR_2 = FUNC_2(VAR_1);
        if (VAR_2) {
            VAR_1->sd->driver->uninit(VAR_1->sd);
            FUNC_5(VAR_1->sd);
            VAR_1->sd = VAR_2;
            FUNC_6(VAR_1);
        } else {


            FUNC_0(VAR_1, "Can't change to new codec.\n");
        }
        VAR_1->sd->driver->decode(VAR_1->sd, VAR_1->new_segment);
        FUNC_5(VAR_1->new_segment);
        VAR_1->new_segment = ((void*)0);
    }
}
