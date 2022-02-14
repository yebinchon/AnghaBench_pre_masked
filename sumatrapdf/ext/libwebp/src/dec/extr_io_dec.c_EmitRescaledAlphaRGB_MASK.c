
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int src_y; } ;
typedef TYPE_1__ WebPRescaler ;
struct TYPE_9__ {int last_y; scalar_t__ (* emit_alpha_row ) (TYPE_2__* const,int const,int) ;TYPE_1__* scaler_a; } ;
typedef TYPE_2__ WebPDecParams ;
struct TYPE_10__ {int mb_y; int mb_h; int const width; int * a; } ;
typedef TYPE_3__ VP8Io ;


 int FUNC_0 (TYPE_1__* const,int,int *,int const) ;
 scalar_t__ FUNC_1 (TYPE_2__* const,int const,int) ;

__attribute__((used)) static int FUNC_2(const VP8Io* const VAR_0, WebPDecParams* const VAR_1,
                                int VAR_2) {
  if (VAR_0->a != ((void*)0)) {
    WebPRescaler* const VAR_3 = VAR_1->scaler_a;
    int VAR_4 = VAR_2;
    const int VAR_5 = VAR_1->last_y + VAR_4;
    while (VAR_4 > 0) {
      const int VAR_6 = VAR_3->src_y - VAR_0->mb_y;
      FUNC_0(VAR_3, VAR_0->mb_h + VAR_0->mb_y - VAR_3->src_y,
                         VAR_0->a + VAR_6 * VAR_0->width, VAR_0->width);
      VAR_4 -= VAR_1->emit_alpha_row(VAR_1, VAR_5 - VAR_4, VAR_4);
    }
  }
  return 0;
}
