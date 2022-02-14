
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {short const h; short const y; short const x; short const w; } ;
struct TYPE_4__ {unsigned char* pixels; short const pitch; int pl; } ;
struct rawfb_context {TYPE_1__ scissors; TYPE_2__ fb; } ;
struct nk_color {int dummy; } ;


 unsigned int FUNC_0 (struct nk_color const,int ) ;

__attribute__((used)) static void
FUNC_1(const struct rawfb_context *VAR_0,
    const short VAR_1, const short VAR_2, const struct nk_color VAR_3)
{
    unsigned int VAR_4 = FUNC_0(VAR_3, VAR_0->fb.pl);
    unsigned char *VAR_5 = VAR_0->fb.pixels;
    unsigned int *VAR_6;

    VAR_5 += VAR_2 * VAR_0->fb.pitch;
    VAR_6 = (unsigned int *)VAR_5 + VAR_1;

    if (VAR_2 < VAR_0->scissors.h && VAR_2 >= VAR_0->scissors.y &&
        VAR_1 >= VAR_0->scissors.x && VAR_1 < VAR_0->scissors.w)
        *VAR_6 = VAR_4;
}
