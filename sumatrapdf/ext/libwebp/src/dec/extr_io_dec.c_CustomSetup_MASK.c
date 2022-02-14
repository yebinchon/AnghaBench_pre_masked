
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int * emit_alpha; int * emit; int * tmp_u; int * tmp_v; int * tmp_y; int * memory; int options; int * emit_alpha_row; TYPE_1__* output; } ;
typedef TYPE_2__ WebPDecParams ;
typedef scalar_t__ WEBP_CSP_MODE ;
struct TYPE_12__ {int mb_w; scalar_t__ fancy_upsampling; scalar_t__ use_scaling; scalar_t__ opaque; } ;
typedef TYPE_3__ VP8Io ;
struct TYPE_10__ {scalar_t__ colorspace; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__* const) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__* const) ;
 scalar_t__ const VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ const VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_3__*,int ) ;
 int FUNC_6 (scalar_t__ const) ;
 scalar_t__ FUNC_7 (scalar_t__ const) ;
 int FUNC_8 (scalar_t__ const) ;
 int * FUNC_9 (unsigned long long,size_t) ;

__attribute__((used)) static int FUNC_10(VP8Io* VAR_10) {
  WebPDecParams* const VAR_11 = (WebPDecParams*)VAR_10->opaque;
  const WEBP_CSP_MODE VAR_12 = VAR_11->output->colorspace;
  const int VAR_13 = FUNC_8(VAR_12);
  const int VAR_14 = FUNC_6(VAR_12);

  VAR_11->memory = ((void*)0);
  VAR_11->emit = ((void*)0);
  VAR_11->emit_alpha = ((void*)0);
  VAR_11->emit_alpha_row = ((void*)0);
  if (!FUNC_5(VAR_11->options, VAR_10, VAR_14 ? VAR_7 : VAR_8)) {
    return 0;
  }
  if (VAR_14 && FUNC_7(VAR_12)) {
    FUNC_4();
  }
  if (VAR_10->use_scaling) {

    const int VAR_15 = VAR_13 ? FUNC_0(VAR_10, VAR_11) : FUNC_1(VAR_10, VAR_11);
    if (!VAR_15) {
      return 0;
    }



  } else {
    if (VAR_13) {
      FUNC_3();
      VAR_11->emit = VAR_4;
      if (VAR_10->fancy_upsampling) {
      }
    } else {
      VAR_11->emit = VAR_5;
    }
    if (VAR_14) {
      VAR_11->emit_alpha =
          (VAR_12 == VAR_6 || VAR_12 == VAR_9) ?
              VAR_1
          : VAR_13 ? VAR_0
          : VAR_2;
      if (VAR_13) {
        FUNC_2();
      }
    }
  }

  return 1;
}
