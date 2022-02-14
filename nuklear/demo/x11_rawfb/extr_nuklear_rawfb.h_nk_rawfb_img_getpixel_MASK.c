
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rawfb_image {int const h; int const w; unsigned char* pixels; int const pitch; scalar_t__ format; int pl; } ;
struct nk_color {unsigned char a; int b; int g; int r; int member_3; int member_2; int member_1; int member_0; } ;


 int FUNC_0 (struct rawfb_image const*) ;
 scalar_t__ VAR_0 ;
 struct nk_color FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static struct nk_color
FUNC_2(const struct rawfb_image *VAR_1, const int VAR_2, const int VAR_3)
{
    struct nk_color VAR_4 = {0, 0, 0, 0};
    unsigned char *VAR_5;
    unsigned int VAR_6;
    FUNC_0(VAR_1);
    if (VAR_3 < VAR_1->h && VAR_3 >= 0 && VAR_2 >= 0 && VAR_2 < VAR_1->w) {
        VAR_5 = VAR_1->pixels + (VAR_1->pitch * VAR_3);

        if (VAR_1->format == VAR_0) {
            VAR_4.a = VAR_5[VAR_2];
            VAR_4.b = VAR_4.g = VAR_4.r = 0xff;
        } else {
     VAR_6 = ((unsigned int *)VAR_5)[VAR_2];
     VAR_4 = FUNC_1(VAR_6, VAR_1->pl);
        }
    } return VAR_4;
}
