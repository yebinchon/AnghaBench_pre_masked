
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int uint64_t ;
typedef int VP8RDLevel ;
struct TYPE_15__ {scalar_t__ D; scalar_t__ H; scalar_t__ R; } ;
typedef TYPE_2__ VP8ModeScore ;
struct TYPE_13__ {int nb_skip_; } ;
struct TYPE_14__ {scalar_t__ size_; } ;
struct TYPE_16__ {TYPE_11__ proba_; TYPE_1__ segment_hdr_; } ;
typedef TYPE_3__ VP8Encoder ;
typedef int VP8EncIterator ;
struct TYPE_17__ {double value; scalar_t__ do_size_search; int q; } ;
typedef TYPE_4__ PassStats ;


 scalar_t__ FUNC_0 (TYPE_3__* const) ;
 scalar_t__ FUNC_1 (TYPE_11__*) ;
 double FUNC_2 (int,int const) ;
 int VAR_0 ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__* const,int ) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_3__* const,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static uint64_t FUNC_11(VP8Encoder* const VAR_1, VP8RDLevel VAR_2,
                            int VAR_3, int VAR_4,
                            PassStats* const VAR_5) {
  VP8EncIterator VAR_6;
  uint64_t VAR_7 = 0;
  uint64_t VAR_8 = 0;
  uint64_t VAR_9 = 0;
  const uint64_t VAR_10 = VAR_3 * 384;

  FUNC_7(VAR_1, &VAR_6);
  FUNC_4(VAR_1, VAR_5->q);
  do {
    VP8ModeScore VAR_11;
    FUNC_6(&VAR_6, ((void*)0));
    if (FUNC_5(&VAR_6, &VAR_11, VAR_2)) {

      ++VAR_1->proba_.nb_skip_;
    }
    FUNC_3(&VAR_6, &VAR_11);
    VAR_7 += VAR_11.R + VAR_11.H;
    VAR_8 += VAR_11.H;
    VAR_9 += VAR_11.D;
    if (VAR_4 && !FUNC_9(&VAR_6, VAR_4)) {
      return 0;
    }
    FUNC_10(&VAR_6);
  } while (FUNC_8(&VAR_6) && --VAR_3 > 0);

  VAR_8 += VAR_1->segment_hdr_.size_;
  if (VAR_5->do_size_search) {
    VAR_7 += FUNC_0(VAR_1);
    VAR_7 += FUNC_1(&VAR_1->proba_);
    VAR_7 = ((VAR_7 + VAR_8 + 1024) >> 11) + VAR_0;
    VAR_5->value = (double)VAR_7;
  } else {
    VAR_5->value = FUNC_2(VAR_9, VAR_10);
  }
  return VAR_8;
}
