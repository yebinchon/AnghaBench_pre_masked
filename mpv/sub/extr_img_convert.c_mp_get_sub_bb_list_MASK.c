
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sub_bitmaps {int num_parts; struct sub_bitmap* parts; } ;
struct sub_bitmap {scalar_t__ dh; scalar_t__ y; scalar_t__ dw; scalar_t__ x; } ;
struct mp_rect {int x0; int x1; int y0; int y1; scalar_t__ member_3; scalar_t__ member_2; scalar_t__ member_1; scalar_t__ member_0; } ;


 int VAR_0 ;
 int FUNC_0 (struct mp_rect*,struct mp_rect*) ;
 int FUNC_1 (struct mp_rect*,int*) ;

int FUNC_2(struct sub_bitmaps *VAR_1, struct mp_rect *VAR_2,
                       int VAR_3)
{
    int VAR_4 = VAR_0;
    int VAR_5 = 0;
    for (int VAR_6 = 0; VAR_6 < VAR_1->num_parts; VAR_6++) {
        struct sub_bitmap *VAR_7 = &VAR_1->parts[VAR_6];
        struct mp_rect VAR_8 = {VAR_7->x, VAR_7->y, VAR_7->x + VAR_7->dw, VAR_7->y + VAR_7->dh};
        bool VAR_9 = 0;
        for (int VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
            struct mp_rect *VAR_11 = &VAR_2[VAR_10];
            if ((VAR_8.x0 - VAR_4 <= VAR_11->x1 && VAR_8.x1 + VAR_4 >= VAR_11->x0 &&
                 VAR_8.y0 - VAR_4 <= VAR_11->y1 && VAR_8.y1 + VAR_4 >= VAR_11->y0) ||
                VAR_5 == VAR_3)
            {
                FUNC_0(VAR_11, &VAR_8);
                VAR_9 = 1;
                break;
            }
        }
        if (!VAR_9) {
            VAR_2[VAR_5++] = VAR_8;
            FUNC_1(VAR_2, &VAR_5);
        }
    }
    FUNC_1(VAR_2, &VAR_5);
    return VAR_5;
}
