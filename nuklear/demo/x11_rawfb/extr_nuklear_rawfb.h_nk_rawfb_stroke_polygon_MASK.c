
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rawfb_context {int dummy; } ;
struct nk_vec2i {int y; int x; } ;
struct nk_color {int dummy; } ;


 int FUNC_0 (struct rawfb_context const*,int ,int ,int ,int ,unsigned short const,struct nk_color const) ;

__attribute__((used)) static void
FUNC_1(const struct rawfb_context *VAR_0,
    const struct nk_vec2i *VAR_1, const int VAR_2,
    const unsigned short VAR_3, const struct nk_color VAR_4)
{
    int VAR_5;
    for (VAR_5 = 1; VAR_5 < VAR_2; ++VAR_5)
        FUNC_0(VAR_0, VAR_1[VAR_5-1].x, VAR_1[VAR_5-1].y, VAR_1[VAR_5].x,
                VAR_1[VAR_5].y, VAR_3, VAR_4);
    FUNC_0(VAR_0, VAR_1[VAR_2-1].x, VAR_1[VAR_2-1].y,
            VAR_1[0].x, VAR_1[0].y, VAR_3, VAR_4);
}
