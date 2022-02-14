
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct sub_bitmaps {int num_parts; TYPE_1__* packed; struct sub_bitmap* parts; } ;
struct sub_bitmap {int src_y; int src_x; int stride; void* bitmap; int h; int w; } ;
struct mp_ass_packer {int dummy; } ;
struct TYPE_2__ {int* stride; scalar_t__* planes; } ;


 int VAR_0 ;
 int FUNC_0 (void*,void*,int ,int ,int,int) ;
 int FUNC_1 (struct mp_ass_packer*,struct sub_bitmaps*,int ) ;

__attribute__((used)) static bool FUNC_2(struct mp_ass_packer *VAR_1, struct sub_bitmaps *VAR_2)
{
    if (!FUNC_1(VAR_1, VAR_2, VAR_0))
        return 0;

    for (int VAR_3 = 0; VAR_3 < VAR_2->num_parts; VAR_3++) {
        struct sub_bitmap *VAR_4 = &VAR_2->parts[VAR_3];

        int VAR_5 = VAR_2->packed->stride[0];
        void *VAR_6 =
            (uint8_t *)VAR_2->packed->planes[0] + VAR_4->src_y * VAR_5 + VAR_4->src_x;
        FUNC_0(VAR_6, VAR_4->bitmap, VAR_4->w, VAR_4->h, VAR_5, VAR_4->stride);

        VAR_4->bitmap = VAR_6;
        VAR_4->stride = VAR_5;
    }

    return 1;
}
