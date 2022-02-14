
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* pixels; short const pitch; int pl; } ;
struct rawfb_context {TYPE_1__ fb; } ;
struct nk_color {int dummy; } ;
typedef int c ;


 int FUNC_0 (void*,unsigned int*,int) ;
 unsigned int FUNC_1 (struct nk_color const,int ) ;

__attribute__((used)) static void
FUNC_2(const struct rawfb_context *VAR_0,
    const short VAR_1, const short VAR_2, const short VAR_3, const struct nk_color VAR_4)
{



    unsigned int VAR_5, VAR_6;
    unsigned int VAR_7[16];
    unsigned char *VAR_8 = VAR_0->fb.pixels;
    unsigned int *VAR_9;

    VAR_8 += VAR_2 * VAR_0->fb.pitch;
    VAR_9 = (unsigned int *)VAR_8 + VAR_1;

    VAR_6 = VAR_3 - VAR_1;
    for (VAR_5 = 0; VAR_5 < sizeof(VAR_7) / sizeof(VAR_7[0]); VAR_5++)
        VAR_7[VAR_5] = FUNC_1(VAR_4, VAR_0->fb.pl);

    while (VAR_6 > 16) {
        FUNC_0((void *)VAR_9, VAR_7, sizeof(VAR_7));
        VAR_6 -= 16; VAR_9 += 16;
    } for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
        VAR_9[VAR_5] = VAR_7[VAR_5];
}
