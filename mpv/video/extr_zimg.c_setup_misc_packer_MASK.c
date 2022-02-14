
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_zimg_repack {scalar_t__ zimgfmt; int* components; scalar_t__ pack; int packed_repack_scanline; int repack; } ;
struct mp_regular_imgfmt {int component_size; int component_pad; int num_planes; int chroma_w; int chroma_h; int planes; int component_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mp_regular_imgfmt*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct mp_zimg_repack *VAR_5)
{


    if (VAR_5->zimgfmt == VAR_0) {
        struct mp_regular_imgfmt VAR_6 = {
            .component_type = VAR_1,
            .component_size = 2,
            .component_pad = -6,
            .num_planes = 3,
            .planes = {
                {1, {1}},
                {1, {2}},
                {1, {3}},
            },
            .chroma_w = 1,
            .chroma_h = 1,
        };
        int VAR_7 = FUNC_0(&VAR_6);
        if (!VAR_7)
            return;
        VAR_5->zimgfmt = VAR_7;
        VAR_5->repack = VAR_3;
        VAR_5->packed_repack_scanline = VAR_5->pack ? VAR_2 : VAR_4;
        static int VAR_8[] = {3, 2, 1};
        for (int VAR_9 = 0; VAR_9 < 3; VAR_9++)
            VAR_5->components[VAR_9] = VAR_8[VAR_9] - 1;
    }
}
