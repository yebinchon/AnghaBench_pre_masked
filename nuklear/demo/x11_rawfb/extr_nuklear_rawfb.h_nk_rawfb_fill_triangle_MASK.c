
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rawfb_context {int dummy; } ;
struct nk_vec2i {short x; short y; } ;
struct nk_color {int dummy; } ;


 int FUNC_0 (struct rawfb_context const*,struct nk_vec2i*,int,struct nk_color const) ;

__attribute__((used)) static void
FUNC_1(const struct rawfb_context *VAR_0,
    const short VAR_1, const short VAR_2, const short VAR_3, const short VAR_4,
    const short VAR_5, const short VAR_6, const struct nk_color VAR_7)
{
    struct nk_vec2i VAR_8[3];
    VAR_8[0].x = VAR_1;
    VAR_8[0].y = VAR_2;
    VAR_8[1].x = VAR_3;
    VAR_8[1].y = VAR_4;
    VAR_8[2].x = VAR_5;
    VAR_8[2].y = VAR_6;
    FUNC_0(VAR_0, VAR_8, 3, VAR_7);
}
