
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rawfb_image {int dummy; } ;
struct nk_color {int a; unsigned char r; unsigned char g; unsigned char b; } ;


 struct nk_color FUNC_0 (struct rawfb_image const*,int const,int const) ;
 int FUNC_1 (struct rawfb_image const*,int const,int const,struct nk_color) ;

__attribute__((used)) static void
FUNC_2(const struct rawfb_image *VAR_0,
    const int VAR_1, const int VAR_2, struct nk_color VAR_3)
{
    struct nk_color VAR_4;
    unsigned char VAR_5;
    if (VAR_3.a == 0)
        return;

    VAR_5 = 0xff - VAR_3.a;
    VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
    VAR_3.r = (VAR_3.r * VAR_3.a + VAR_4 * VAR_5) >> 8;
    VAR_3.g = (VAR_3.g * VAR_3.a + VAR_4 * VAR_5) >> 8;
    VAR_3.b = (VAR_3.b * VAR_3.a + VAR_4 * VAR_5) >> 8;
    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
