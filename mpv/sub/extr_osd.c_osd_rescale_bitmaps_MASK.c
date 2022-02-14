
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sub_bitmaps {int num_parts; struct sub_bitmap* parts; } ;
struct sub_bitmap {int x; int y; int dw; double w; int dh; double h; } ;
struct mp_osd_res {int w; int ml; int mr; int h; int mt; int mb; double display_par; } ;



void FUNC_0(struct sub_bitmaps *VAR_0, int VAR_1, int VAR_2,
                         struct mp_osd_res VAR_3, double VAR_4)
{
    int VAR_5 = VAR_3.w - VAR_3.ml - VAR_3.mr;
    int VAR_6 = VAR_3.h - VAR_3.mt - VAR_3.mb;
    double VAR_7 = (double)VAR_5 / VAR_1;
    double VAR_8 = (double)VAR_6 / VAR_2;
    if (VAR_4 < 0)
        VAR_4 = VAR_7 / VAR_8 / VAR_3.display_par;
    if (VAR_4 > 0)
        VAR_7 /= VAR_4;
    int VAR_9 = VAR_5 / 2 - (int)(VAR_1 * VAR_7) / 2;
    int VAR_10 = VAR_6 / 2 - (int)(VAR_2 * VAR_8) / 2;
    for (int VAR_11 = 0; VAR_11 < VAR_0->num_parts; VAR_11++) {
        struct sub_bitmap *VAR_12 = &VAR_0->parts[VAR_11];
        VAR_12->x = (int)(VAR_12->x * VAR_7) + VAR_9 + VAR_3.ml;
        VAR_12->y = (int)(VAR_12->y * VAR_8) + VAR_10 + VAR_3.mt;
        VAR_12->dw = (int)(VAR_12->w * VAR_7 + 0.5);
        VAR_12->dh = (int)(VAR_12->h * VAR_8 + 0.5);
    }
}
