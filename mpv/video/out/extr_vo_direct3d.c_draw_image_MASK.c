
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct vo {TYPE_3__* priv; } ;
struct mp_image {int dummy; } ;
struct TYPE_12__ {int pts; } ;
typedef TYPE_2__ mp_image_t ;
struct TYPE_13__ {int plane_count; int have_image; int osd_pts; TYPE_1__* planes; scalar_t__ use_textures; int d3d_device; } ;
typedef TYPE_3__ d3d_priv ;
struct TYPE_11__ {int texture; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,struct mp_image*) ;
 int FUNC_4 (struct mp_image*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct vo *VAR_0, mp_image_t *VAR_1)
{
    d3d_priv *VAR_2 = VAR_0->priv;
    if (!VAR_2->d3d_device)
        goto done;

    struct mp_image VAR_3;
    if (!FUNC_3(VAR_2, &VAR_3))
        goto done;

    FUNC_4(&VAR_3, VAR_1);

    FUNC_1(VAR_2);

    if (VAR_2->use_textures) {
        for (int VAR_4 = 0; VAR_4 < VAR_2->plane_count; VAR_4++) {
            FUNC_2(VAR_2, &VAR_2->planes[VAR_4].texture);
        }
    }

    VAR_2->have_image = 1;
    VAR_2->osd_pts = VAR_1->pts;

    FUNC_0(VAR_2);

done:
    FUNC_5(VAR_1);
}
