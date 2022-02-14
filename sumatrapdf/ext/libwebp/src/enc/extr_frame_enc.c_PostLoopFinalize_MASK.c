
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int num_parts_; int** residual_bytes_; TYPE_1__* pic_; TYPE_5__* parts_; } ;
typedef TYPE_2__ VP8Encoder ;
struct TYPE_10__ {int** bit_count_; TYPE_2__* enc_; } ;
typedef TYPE_3__ VP8EncIterator ;
struct TYPE_11__ {int error_; } ;
struct TYPE_8__ {int * stats; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__* const) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_2__* const) ;

__attribute__((used)) static int FUNC_3(VP8EncIterator* const VAR_1, int VAR_2) {
  VP8Encoder* const VAR_3 = VAR_1->enc_;
  if (VAR_2) {
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_3->num_parts_; ++VAR_4) {
      FUNC_1(VAR_3->parts_ + VAR_4);
      VAR_2 &= !VAR_3->parts_[VAR_4].error_;
    }
  }

  if (VAR_2) {

    if (VAR_3->pic_->stats != ((void*)0)) {
      int VAR_5, VAR_6;
      for (VAR_5 = 0; VAR_5 <= 2; ++VAR_5) {
        for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
          VAR_3->residual_bytes_[VAR_5][VAR_6] = (int)((VAR_1->bit_count_[VAR_6][VAR_5] + 7) >> 3);
        }
      }
    }

    FUNC_0(VAR_1);
  } else {

    FUNC_2(VAR_3);
  }
  return VAR_2;
}
