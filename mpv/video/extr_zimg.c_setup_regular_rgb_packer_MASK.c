
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regular_repacker {void (* pa_scanline ) (void*,void**,int,int) ;void (* un_scanline ) (void*,void**,int,int) ;int packed_width; int component_width; int num_components; int prepadding; } ;
struct mp_zimg_repack {int zimgfmt; void (* packed_repack_scanline ) (void*,void**,int,int) ;int* components; int repack; scalar_t__ pack; } ;
struct mp_regular_imgfmt_plane {int num_components; int* components; } ;
struct mp_regular_imgfmt {int num_planes; int component_size; scalar_t__ component_pad; struct mp_regular_imgfmt_plane* planes; scalar_t__ forced_csp; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct regular_repacker*) ;
 int FUNC_2 (struct mp_regular_imgfmt*) ;
 int FUNC_3 (struct mp_regular_imgfmt*,int) ;
 int VAR_0 ;
 struct regular_repacker* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct mp_zimg_repack *VAR_2)
{
    struct mp_regular_imgfmt VAR_3;
    if (!FUNC_3(&VAR_3, VAR_2->zimgfmt))
        return;

    if (VAR_3.num_planes != 1 || VAR_3.planes[0].num_components < 3)
        return;
    struct mp_regular_imgfmt_plane *VAR_4 = &VAR_3.planes[0];

    for (int VAR_5 = 0; VAR_5 < VAR_4->num_components; VAR_5++) {
        if (VAR_4->components[VAR_5] >= 4)
            return;
    }


    if (VAR_4->components[0] && VAR_4->components[3])
        return;

    int VAR_6 = VAR_3.component_size * 8 + FUNC_0(0, VAR_3.component_pad);


    struct mp_regular_imgfmt VAR_7 = VAR_3;
    VAR_7 = 0;
    if (VAR_7 > 0)
        VAR_7 = 0;
    VAR_7 = 3;
    for (int VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        VAR_7[VAR_8].num_components = 1;
        VAR_7[VAR_8].components[0] = VAR_8 + 1;
    }
    int VAR_9 = FUNC_2(&VAR_7);
    if (!VAR_9)
        return;

    for (int VAR_10 = 0; VAR_10 < FUNC_1(VAR_1); VAR_10++) {
        const struct regular_repacker *VAR_11 = &VAR_1[VAR_10];




        int VAR_12 = VAR_4->components[0] ? 0 : 8;
        int VAR_13 = VAR_4->components[0] ? 0 : 1;
        void (*VAR_14)(void *VAR_15, void *VAR_16[], int VAR_17, int VAR_18) =
            VAR_2->pack ? VAR_11->pa_scanline : VAR_11->un_scanline;

        if (VAR_11->packed_width != VAR_3.component_size * VAR_4->num_components * 8 ||
            VAR_11->component_width != VAR_6 ||
            VAR_11->num_components != 3 ||
            VAR_11->prepadding != VAR_12 ||
            !VAR_14)
            continue;

        VAR_2->repack = VAR_0;
        VAR_2->packed_repack_scanline = VAR_14;
        VAR_2->zimgfmt = VAR_9;
        for (int VAR_19 = 0; VAR_19 < 3; VAR_19++)
            VAR_2->components[VAR_19] = VAR_4->components[VAR_13 + VAR_19] - 1;
        return;
    }
}
