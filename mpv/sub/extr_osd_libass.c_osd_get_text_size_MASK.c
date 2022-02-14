
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct osd_state {int lock; struct osd_object** objs; } ;
struct TYPE_5__ {TYPE_2__* track; } ;
struct osd_object {TYPE_1__ ass; } ;
struct TYPE_7__ {int MarginV; int FontSize; } ;
struct TYPE_6__ {int PlayResY; } ;
typedef TYPE_3__ ASS_Style ;


 size_t VAR_0 ;
 TYPE_3__* FUNC_0 (struct osd_state*,struct osd_object*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct osd_state *VAR_1, int *VAR_2, int *VAR_3)
{
    FUNC_1(&VAR_1->lock);
    struct osd_object *VAR_4 = VAR_1->objs[VAR_0];
    ASS_Style *VAR_5 = FUNC_0(VAR_1, VAR_4);
    *VAR_2 = VAR_4->ass.track->PlayResY - VAR_5->MarginV;
    *VAR_3 = VAR_5->FontSize;
    FUNC_2(&VAR_1->lock);
}
