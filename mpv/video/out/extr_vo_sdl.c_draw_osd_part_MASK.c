
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {int renderer; struct osd_bitmap_surface* osd_surfaces; } ;
struct osd_target {int dest; int source; scalar_t__ tex2; scalar_t__ tex; } ;
struct osd_bitmap_surface {int num_targets; struct osd_target* targets; } ;


 int FUNC_0 (int ,scalar_t__,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_0, int VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;
    struct osd_bitmap_surface *VAR_3 = &VAR_2->osd_surfaces[VAR_1];
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3->num_targets; VAR_4++) {
        struct osd_target *VAR_5 = VAR_3->targets + VAR_4;
        if (VAR_5->tex)
            FUNC_0(VAR_2->renderer, VAR_5->tex,
                           &VAR_5->source, &VAR_5->dest);
        if (VAR_5->tex2)
            FUNC_0(VAR_2->renderer, VAR_5->tex2,
                           &VAR_5->source, &VAR_5->dest);
    }
}
