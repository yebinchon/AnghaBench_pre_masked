
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {scalar_t__ width; scalar_t__ height; int * argb; int * v; int * u; int * y; scalar_t__ use_argb; int * stats; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_28__ {int preprocessing; float quality; int exact; scalar_t__ use_sharp_yuv; int lossless; } ;
typedef TYPE_2__ WebPConfig ;
struct TYPE_29__ {int use_tokens_; } ;
typedef TYPE_3__ VP8Encoder ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__ const*,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_2__ const*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,int ,float) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_2__ const*) ;
 int FUNC_18 (int *,int ,int) ;

int FUNC_19(const WebPConfig* VAR_6, WebPPicture* VAR_7) {
  int VAR_8 = 0;
  if (VAR_7 == ((void*)0)) return 0;

  FUNC_13(VAR_7, VAR_3);
  if (VAR_6 == ((void*)0)) {
    return FUNC_13(VAR_7, VAR_2);
  }
  if (!FUNC_17(VAR_6)) {
    return FUNC_13(VAR_7, VAR_1);
  }
  if (VAR_7->width <= 0 || VAR_7->height <= 0) {
    return FUNC_13(VAR_7, VAR_0);
  }
  if (VAR_7->width > VAR_4 || VAR_7->height > VAR_4) {
    return FUNC_13(VAR_7, VAR_0);
  }

  if (VAR_7->stats != ((void*)0)) FUNC_18(VAR_7->stats, 0, sizeof(*VAR_7->stats));

  if (!VAR_6->lossless) {
    VP8Encoder* VAR_9 = ((void*)0);

    if (VAR_7->use_argb || VAR_7->y == ((void*)0) || VAR_7->u == ((void*)0) || VAR_7->v == ((void*)0)) {

      if (VAR_6->use_sharp_yuv || (VAR_6->preprocessing & 4)) {
        if (!FUNC_15(VAR_7)) {
          return 0;
        }
      } else {
        float VAR_10 = 0.f;
        if (VAR_6->preprocessing & 2) {
          const float VAR_11 = VAR_6->quality / 100.f;
          const float VAR_12 = VAR_11 * VAR_11;


          VAR_10 = 1.0f + (0.5f - 1.0f) * VAR_12 * VAR_12;
        }
        if (!FUNC_14(VAR_7, VAR_5, VAR_10)) {
          return 0;
        }
      }
    }

    if (!VAR_6->exact) {
      FUNC_11(VAR_7);
    }

    VAR_9 = FUNC_1(VAR_6, VAR_7);
    if (VAR_9 == ((void*)0)) return 0;

    VAR_8 = FUNC_3(VAR_9);


    VAR_8 = VAR_8 && FUNC_7(VAR_9);
    if (!VAR_9->use_tokens_) {
      VAR_8 = VAR_8 && FUNC_6(VAR_9);
    } else {
      VAR_8 = VAR_8 && FUNC_8(VAR_9);
    }
    VAR_8 = VAR_8 && FUNC_4(VAR_9);

    VAR_8 = VAR_8 && FUNC_9(VAR_9);
    FUNC_2(VAR_9);
    if (!VAR_8) {
      FUNC_5(VAR_9);
    }
    VAR_8 &= FUNC_0(VAR_9);
  } else {

    if (VAR_7->argb == ((void*)0) && !FUNC_16(VAR_7)) {
      return 0;
    }

    if (!VAR_6->exact) {
      FUNC_12(VAR_7);
    }

    VAR_8 = FUNC_10(VAR_6, VAR_7);
  }

  return VAR_8;
}
