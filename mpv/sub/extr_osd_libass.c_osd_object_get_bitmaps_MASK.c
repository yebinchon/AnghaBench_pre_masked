
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sub_bitmaps {int dummy; } ;
struct osd_state {int dummy; } ;
struct osd_object {scalar_t__ type; int num_externals; int changed; int * ass_imgs; scalar_t__ ass_packer; int vo_res; TYPE_1__* externals; int ass; scalar_t__ osd_changed; } ;
struct TYPE_2__ {int ass; } ;


 int FUNC_0 (struct osd_object*,int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *,int *,int*) ;
 scalar_t__ FUNC_2 (struct osd_object*) ;
 int FUNC_3 (scalar_t__,int *,int,int,int,struct sub_bitmaps*) ;
 int FUNC_4 (struct osd_state*,struct osd_object*) ;

void FUNC_5(struct osd_state *VAR_1, struct osd_object *VAR_2,
                            int VAR_3, struct sub_bitmaps *VAR_4)
{
    if (VAR_2->type == VAR_0 && VAR_2->osd_changed)
        FUNC_4(VAR_1, VAR_2);

    if (!VAR_2->ass_packer)
        VAR_2->ass_packer = FUNC_2(VAR_2);

    FUNC_0(VAR_2, VAR_2->ass_imgs, VAR_2->num_externals + 1);

    FUNC_1(&VAR_2->ass, &VAR_2->vo_res, &VAR_2->ass_imgs[0], &VAR_2->changed);
    for (int VAR_5 = 0; VAR_5 < VAR_2->num_externals; VAR_5++) {
        FUNC_1(&VAR_2->externals[VAR_5].ass, &VAR_2->vo_res, &VAR_2->ass_imgs[VAR_5 + 1],
                   &VAR_2->changed);
    }

    FUNC_3(VAR_2->ass_packer, VAR_2->ass_imgs, VAR_2->num_externals + 1,
                       VAR_2->changed, VAR_3, VAR_4);

    VAR_2->changed = 0;
}
