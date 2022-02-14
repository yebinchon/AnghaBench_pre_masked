
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int palette_code_bits_; } ;
typedef TYPE_1__ VP8LHistogram ;
typedef int VP8LBackwardRefs ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (int const* const,TYPE_1__* const) ;

void FUNC_2(VP8LHistogram* const VAR_0,
                         const VP8LBackwardRefs* const VAR_1,
                         int VAR_2) {
  if (VAR_2 >= 0) {
    VAR_0->palette_code_bits_ = VAR_2;
  }
  FUNC_0(VAR_0);
  FUNC_1(VAR_1, VAR_0);
}
