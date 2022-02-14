
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* emit ) (TYPE_2__ const*,TYPE_1__* const) ;int last_y; int (* emit_alpha ) (TYPE_2__ const*,TYPE_1__* const,int) ;} ;
typedef TYPE_1__ WebPDecParams ;
struct TYPE_9__ {int mb_w; int mb_h; int mb_y; scalar_t__ opaque; } ;
typedef TYPE_2__ VP8Io ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__ const*,TYPE_1__* const) ;
 int FUNC_2 (TYPE_2__ const*,TYPE_1__* const,int) ;

__attribute__((used)) static int FUNC_3(const VP8Io* VAR_0) {
  WebPDecParams* const VAR_1 = (WebPDecParams*)VAR_0->opaque;
  const int VAR_2 = VAR_0->mb_w;
  const int VAR_3 = VAR_0->mb_h;
  int VAR_4;
  FUNC_0(!(VAR_0->mb_y & 1));

  if (VAR_2 <= 0 || VAR_3 <= 0) {
    return 0;
  }
  VAR_4 = VAR_1->emit(VAR_0, VAR_1);
  if (VAR_1->emit_alpha != ((void*)0)) {
    VAR_1->emit_alpha(VAR_0, VAR_1, VAR_4);
  }
  VAR_1->last_y += VAR_4;
  return 1;
}
