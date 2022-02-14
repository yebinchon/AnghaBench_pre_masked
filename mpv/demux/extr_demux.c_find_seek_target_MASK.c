
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct demux_queue {struct demux_packet* head; TYPE_2__* ds; } ;
struct demux_packet {int keyframe; struct demux_packet* next; } ;
struct TYPE_4__ {TYPE_1__* sh; } ;
struct TYPE_3__ {scalar_t__ seek_preroll; } ;


 double VAR_0 ;
 int VAR_1 ;
 struct demux_packet* FUNC_0 (struct demux_packet*,double*,int *) ;
 struct demux_packet* FUNC_1 (struct demux_queue*,double) ;

__attribute__((used)) static struct demux_packet *FUNC_2(struct demux_queue *VAR_2,
                                             double VAR_3, int VAR_4)
{
    VAR_3 -= VAR_2->ds->sh->seek_preroll;

    struct demux_packet *VAR_5 = FUNC_1(VAR_2, VAR_3);
    if (!VAR_5)
        VAR_5 = VAR_2->head;

    struct demux_packet *VAR_6 = ((void*)0);
    struct demux_packet *VAR_7 = ((void*)0);
    for (struct demux_packet *VAR_8 = VAR_5; VAR_8; VAR_8 = VAR_7) {
        VAR_7 = VAR_8->next;
        if (!VAR_8->keyframe)
            continue;

        double VAR_9;
        VAR_7 = FUNC_0(VAR_8, &VAR_9, ((void*)0));

        if (VAR_9 == VAR_0)
            continue;

        if (VAR_4 & VAR_1) {

            if (VAR_6)
                break;
            if (VAR_9 < VAR_3)
                continue;
        } else {


            if (VAR_6 && VAR_9 > VAR_3)
                break;
        }

        VAR_6 = VAR_8;
    }

    return VAR_6;
}
