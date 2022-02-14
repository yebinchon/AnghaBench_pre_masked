
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rawfb_image {int dummy; } ;
struct nk_rect {float w; float h; float x; float y; } ;
struct nk_color {scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;


 int FUNC_0 (struct rawfb_image const*,short,short,struct nk_color) ;
 struct nk_color FUNC_1 (struct rawfb_image const*,int,int) ;

__attribute__((used)) static void
FUNC_2(const struct rawfb_image *VAR_0,
    const struct rawfb_image *VAR_1, const struct nk_rect *VAR_2,
    const struct nk_rect *VAR_3, const struct nk_rect *VAR_4,
    const struct nk_color *VAR_5)
{
    short VAR_6, VAR_7;
    struct nk_color VAR_8;
    float VAR_9 = VAR_3->w / VAR_2->w;
    float VAR_10 = VAR_3->h / VAR_2->h;
    float VAR_11 = VAR_3->x, VAR_12 = VAR_3->y;



    for (VAR_7 = 0; VAR_7 < (short)VAR_2->h; VAR_7++) {
        for (VAR_6 = 0; VAR_6 < (short)VAR_2->w; VAR_6++) {
            if (VAR_4) {
                if (VAR_6 + (int)(VAR_2->x + 0.5f) < VAR_4->x || VAR_6 + (int)(VAR_2->x + 0.5f) >= VAR_4->w)
                    continue;
                if (VAR_7 + (int)(VAR_2->y + 0.5f) < VAR_4->y || VAR_7 + (int)(VAR_2->y + 0.5f) >= VAR_4->h)
                    continue;
            }
            VAR_8 = FUNC_1(VAR_1, (int)VAR_11, (int) VAR_12);
     if (VAR_8.r || VAR_8.g || VAR_8.b)
     {
  VAR_8.r = VAR_5->r;
  VAR_8.g = VAR_5->g;
  VAR_8.b = VAR_5->b;
     }
            FUNC_0(VAR_0, VAR_6 + (int)(VAR_2->x + 0.5f), VAR_7 + (int)(VAR_2->y + 0.5f), VAR_8);
            VAR_11 += VAR_9;
        }
        VAR_11 = VAR_3->x;
        VAR_12 += VAR_10;
    }
}
