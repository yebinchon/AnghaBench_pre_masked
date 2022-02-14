
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {size_t output_surface; struct mp_image** output_surfaces; struct mp_image** swdec_surfaces; } ;
struct mp_image {scalar_t__ imgfmt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (struct vo*) ;
 int FUNC_2 (struct mp_image*,struct mp_image*) ;
 struct mp_image* FUNC_3 (struct mp_image*) ;
 int FUNC_4 (struct mp_image*) ;
 scalar_t__ FUNC_5 (struct priv*,struct mp_image*,struct mp_image*) ;

__attribute__((used)) static void FUNC_6(struct vo *VAR_1, struct mp_image *VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;

    if (VAR_2->imgfmt != VAR_0) {
        struct mp_image *VAR_4 = VAR_3->swdec_surfaces[VAR_3->output_surface];
        if (!VAR_4 || FUNC_5(VAR_3, VAR_4, VAR_2) < 0) {
            FUNC_0(VAR_1, "Could not upload surface.\n");
            FUNC_4(VAR_2);
            return;
        }
        FUNC_2(VAR_4, VAR_2);
        FUNC_4(VAR_2);
        VAR_2 = FUNC_3(VAR_4);
    }

    FUNC_4(VAR_3->output_surfaces[VAR_3->output_surface]);
    VAR_3->output_surfaces[VAR_3->output_surface] = VAR_2;

    FUNC_1(VAR_1);
}
