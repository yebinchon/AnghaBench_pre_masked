
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct vertex {int dummy; } ;
struct TYPE_2__ {int color; } ;
struct sub_bitmap {scalar_t__ h; scalar_t__ src_y; scalar_t__ w; scalar_t__ src_x; scalar_t__ dh; scalar_t__ y; scalar_t__ dw; scalar_t__ x; TYPE_1__ libass; } ;
struct mpgl_osd_part {int num_vertices; int num_subparts; int h; int w; struct vertex* vertices; struct sub_bitmap* subparts; } ;
struct gl_transform {int dummy; } ;


 int FUNC_0 (struct mpgl_osd_part*,struct vertex*,int) ;
 int FUNC_1 (struct vertex*,struct gl_transform,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct mpgl_osd_part *VAR_0, struct gl_transform VAR_1)
{
    FUNC_0(VAR_0, VAR_0->vertices,
                   VAR_0->num_vertices + VAR_0->num_subparts * 6);

    for (int VAR_2 = 0; VAR_2 < VAR_0->num_subparts; VAR_2++) {
        struct sub_bitmap *VAR_3 = &VAR_0->subparts[VAR_2];
        struct vertex *VAR_4 = &VAR_0->vertices[VAR_0->num_vertices];



        uint32_t VAR_5 = VAR_3->libass.color;
        uint8_t VAR_6[4] = { VAR_5 >> 24, (VAR_5 >> 16) & 0xff,
                            (VAR_5 >> 8) & 0xff, 255 - (VAR_5 & 0xff) };

        FUNC_1(VAR_4, VAR_1,
                   VAR_3->x, VAR_3->y, VAR_3->x + VAR_3->dw, VAR_3->y + VAR_3->dh,
                   VAR_3->src_x, VAR_3->src_y, VAR_3->src_x + VAR_3->w, VAR_3->src_y + VAR_3->h,
                   VAR_0->w, VAR_0->h, VAR_6);

        VAR_0->num_vertices += 6;
    }
}
