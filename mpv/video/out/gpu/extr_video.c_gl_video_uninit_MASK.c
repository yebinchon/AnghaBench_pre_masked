
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gl_video {int num_hwdecs; int num_dr_buffers; int osd; TYPE_4__* pass_redraw; TYPE_2__* pass_fresh; int osd_timer; int blit_timer; int upload_timer; int hdr_peak_ssbo; int ra; int lut_3d_texture; int sc; int * hwdecs; } ;
struct TYPE_7__ {struct gl_video* start; } ;
struct TYPE_8__ {TYPE_3__ desc; } ;
struct TYPE_5__ {struct gl_video* start; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gl_video*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct gl_video*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct gl_video*) ;

void FUNC_10(struct gl_video *VAR_1)
{
    if (!VAR_1)
        return;

    FUNC_9(VAR_1);

    for (int VAR_2 = 0; VAR_2 < VAR_1->num_hwdecs; VAR_2++)
        FUNC_5(VAR_1->hwdecs[VAR_2]);
    VAR_1->num_hwdecs = 0;

    FUNC_2(VAR_1->sc);

    FUNC_6(VAR_1->ra, &VAR_1->lut_3d_texture);
    FUNC_4(VAR_1->ra, &VAR_1->hdr_peak_ssbo);

    FUNC_8(VAR_1->upload_timer);
    FUNC_8(VAR_1->blit_timer);
    FUNC_8(VAR_1->osd_timer);

    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        FUNC_7(VAR_1->pass_fresh[VAR_3].desc.start);
        FUNC_7(VAR_1->pass_redraw[VAR_3].desc.start);
    }

    FUNC_3(VAR_1->osd);



    FUNC_1(VAR_1, 1);


    FUNC_0(!VAR_1->num_dr_buffers);

    FUNC_7(VAR_1);
}
