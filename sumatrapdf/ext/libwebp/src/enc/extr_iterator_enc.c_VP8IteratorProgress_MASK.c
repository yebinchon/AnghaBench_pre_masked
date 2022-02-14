
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int percent_; TYPE_3__* pic_; } ;
typedef TYPE_1__ VP8Encoder ;
struct TYPE_6__ {int count_down0_; int count_down_; int percent0_; TYPE_1__* enc_; } ;
typedef TYPE_2__ VP8EncIterator ;
struct TYPE_7__ {int * progress_hook; } ;


 int FUNC_0 (TYPE_3__*,int const,int *) ;

int FUNC_1(const VP8EncIterator* const VAR_0, int VAR_1) {
  VP8Encoder* const VAR_2 = VAR_0->enc_;
  if (VAR_1 && VAR_2->pic_->progress_hook != ((void*)0)) {
    const int VAR_3 = VAR_0->count_down0_ - VAR_0->count_down_;
    const int VAR_4 = (VAR_0->count_down0_ <= 0)
                      ? VAR_0->percent0_
                      : VAR_0->percent0_ + VAR_1 * VAR_3 / VAR_0->count_down0_;
    return FUNC_0(VAR_2->pic_, VAR_4, &VAR_2->percent_);
  }
  return 1;
}
