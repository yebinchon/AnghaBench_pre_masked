
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rawfb_image {int const h; int const w; unsigned char* pixels; int const pitch; scalar_t__ format; int pl; } ;
struct nk_color {unsigned char a; } ;


 int FUNC_0 (struct rawfb_image const*) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 (struct nk_color const,int ) ;

__attribute__((used)) static void
FUNC_2(const struct rawfb_image *VAR_1,
    const int VAR_2, const int VAR_3, const struct nk_color VAR_4)
{
    unsigned int VAR_5 = FUNC_1(VAR_4, VAR_1->pl);
    unsigned char *VAR_6;
    unsigned int *VAR_7;
    FUNC_0(VAR_1);
    if (VAR_3 < VAR_1->h && VAR_3 >= 0 && VAR_2 >= 0 && VAR_2 < VAR_1->w) {
        VAR_6 = VAR_1->pixels + (VAR_1->pitch * VAR_3);
 VAR_7 = (unsigned int *)VAR_6;

        if (VAR_1->format == VAR_0) {
            VAR_6[VAR_2] = VAR_4.a;
        } else {
     VAR_7[VAR_2] = VAR_5;
        }
    }
}
