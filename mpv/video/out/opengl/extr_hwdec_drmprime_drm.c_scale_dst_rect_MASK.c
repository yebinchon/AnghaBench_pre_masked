
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec {struct priv* priv; } ;
struct priv {double display_w; double display_h; } ;
struct mp_rect {double x0; double x1; double y0; double y1; } ;



__attribute__((used)) static void FUNC_0(struct ra_hwdec *VAR_0, int VAR_1, int VAR_2 ,struct mp_rect *VAR_3, struct mp_rect *VAR_4)
{
    struct priv *VAR_5 = VAR_0->priv;



    double VAR_6 = VAR_5->display_w / (double)VAR_1;
    double VAR_7 = VAR_5->display_h / (double)VAR_2;
    double VAR_8 = VAR_6 <= VAR_7 ? VAR_6 : VAR_7;

    VAR_4->x0 = VAR_3->x0 * VAR_8;
    VAR_4->x1 = VAR_3->x1 * VAR_8;
    VAR_4->y0 = VAR_3->y0 * VAR_8;
    VAR_4->y1 = VAR_3->y1 * VAR_8;

    int VAR_9 = (VAR_5->display_w - VAR_8 * VAR_1) / 2;
    int VAR_10 = (VAR_5->display_h - VAR_8 * VAR_2) / 2;

    VAR_4->x0 += VAR_9;
    VAR_4->x1 += VAR_9;
    VAR_4->y0 += VAR_10;
    VAR_4->y1 += VAR_10;
}
