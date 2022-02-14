
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ status_; } ;
typedef TYPE_1__ WebPWorker ;
struct TYPE_12__ {scalar_t__ mb_y_; int filter_row_; scalar_t__ id_; int * f_info_; int * mb_data_; int io_; } ;
typedef TYPE_2__ VP8ThreadContext ;
typedef int VP8MBData ;
typedef int VP8Io ;
typedef int VP8FInfo ;
struct TYPE_13__ {scalar_t__ filter_type_; scalar_t__ mb_y_; scalar_t__ tl_mb_y_; scalar_t__ br_mb_y_; int mt_method_; scalar_t__ cache_id_; scalar_t__ num_caches_; int * f_info_; int * mb_data_; TYPE_1__ worker_; TYPE_2__ thread_ctx_; } ;
typedef TYPE_3__ VP8Decoder ;
struct TYPE_14__ {int (* Sync ) (TYPE_1__* const) ;int (* Launch ) (TYPE_1__* const) ;} ;


 int FUNC_0 (TYPE_3__* const,int * const) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__* const,TYPE_2__* const) ;
 TYPE_6__* FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__* const) ;
 int FUNC_5 (TYPE_1__* const) ;

int FUNC_6(VP8Decoder* const VAR_1, VP8Io* const VAR_2) {
  int VAR_3 = 1;
  VP8ThreadContext* const VAR_4 = &VAR_1->thread_ctx_;
  const int VAR_5 =
      (VAR_1->filter_type_ > 0) &&
      (VAR_1->mb_y_ >= VAR_1->tl_mb_y_) && (VAR_1->mb_y_ <= VAR_1->br_mb_y_);
  if (VAR_1->mt_method_ == 0) {

    VAR_4->mb_y_ = VAR_1->mb_y_;
    VAR_4->filter_row_ = VAR_5;
    FUNC_1(VAR_1, VAR_4);
    VAR_3 = FUNC_0(VAR_1, VAR_2);
  } else {
    WebPWorker* const VAR_6 = &VAR_1->worker_;

    VAR_3 &= FUNC_2()->Sync(VAR_6);
    FUNC_3(VAR_6->status_ == VAR_0);
    if (VAR_3) {
      VAR_4->io_ = *VAR_2;
      VAR_4->id_ = VAR_1->cache_id_;
      VAR_4->mb_y_ = VAR_1->mb_y_;
      VAR_4->filter_row_ = VAR_5;
      if (VAR_1->mt_method_ == 2) {
        VP8MBData* const VAR_7 = VAR_4->mb_data_;
        VAR_4->mb_data_ = VAR_1->mb_data_;
        VAR_1->mb_data_ = VAR_7;
      } else {

        FUNC_1(VAR_1, VAR_4);
      }
      if (VAR_5) {
        VP8FInfo* const VAR_8 = VAR_4->f_info_;
        VAR_4->f_info_ = VAR_1->f_info_;
        VAR_1->f_info_ = VAR_8;
      }

      FUNC_2()->Launch(VAR_6);
      if (++VAR_1->cache_id_ == VAR_1->num_caches_) {
        VAR_1->cache_id_ = 0;
      }
    }
  }
  return VAR_3;
}
