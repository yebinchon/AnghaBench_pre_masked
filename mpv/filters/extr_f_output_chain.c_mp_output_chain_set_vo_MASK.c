
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vo {TYPE_1__* driver; int * osd; int * hwdec_devs; } ;
struct mp_output_chain {TYPE_2__* f; } ;
struct TYPE_6__ {int rotate90; struct vo* dr_vo; int * osd; int * hwdec_devs; } ;
struct chain {struct vo* vo; TYPE_3__ stream_info; } ;
struct TYPE_5__ {struct chain* priv; } ;
struct TYPE_4__ {int caps; } ;


 int VAR_0 ;
 int FUNC_0 (struct chain*) ;

void FUNC_1(struct mp_output_chain *VAR_1, struct vo *VAR_2)
{
    struct chain *VAR_3 = VAR_1->f->priv;

    VAR_3->stream_info.hwdec_devs = VAR_2 ? VAR_2->hwdec_devs : ((void*)0);
    VAR_3->stream_info.osd = VAR_2 ? VAR_2->osd : ((void*)0);
    VAR_3->stream_info.rotate90 = VAR_2 ? VAR_2->driver->caps & VAR_0 : 0;
    VAR_3->stream_info.dr_vo = VAR_2;
    VAR_3->vo = VAR_2;
    FUNC_0(VAR_3);
}
