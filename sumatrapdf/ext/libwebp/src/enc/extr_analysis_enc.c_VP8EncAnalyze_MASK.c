
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int (* Reset ) (int *) ;int (* Sync ) (int *) ;int (* End ) (int *) ;int (* Execute ) (int *) ;int (* Launch ) (int *) ;} ;
typedef TYPE_3__ WebPWorkerInterface ;
struct TYPE_15__ {int num_segments_; } ;
struct TYPE_17__ {int method_; int mb_h_; int const mb_w_; scalar_t__ thread_level_; int alpha_; int uv_alpha_; TYPE_2__ segment_hdr_; TYPE_1__* config_; } ;
typedef TYPE_4__ VP8Encoder ;
struct TYPE_18__ {int const alpha; int const uv_alpha; int alphas; int worker; } ;
struct TYPE_14__ {scalar_t__ emulate_jpeg_size; } ;
typedef TYPE_5__ SegmentJob ;


 int FUNC_0 (TYPE_4__* const,int ) ;
 int FUNC_1 (TYPE_4__* const,TYPE_5__*,int const,int const) ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_4__* const) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(VP8Encoder* const VAR_0) {
  int VAR_1 = 1;
  const int VAR_2 =
      VAR_0->config_->emulate_jpeg_size ||
      (VAR_0->segment_hdr_.num_segments_ > 1) ||
      (VAR_0->method_ <= 1);
  if (VAR_2) {
    const int VAR_3 = VAR_0->mb_h_;

    const int VAR_4 = (9 * VAR_3 + 15) >> 4;
    const int VAR_5 = VAR_3 * VAR_0->mb_w_;




    const int VAR_6 = 0;

    const WebPWorkerInterface* const VAR_7 =
        FUNC_4();
    SegmentJob VAR_8;
    if (VAR_6) {
      SegmentJob VAR_9;


      FUNC_1(VAR_0, &VAR_8, 0, VAR_4);
      FUNC_1(VAR_0, &VAR_9, VAR_4, VAR_3);


      VAR_1 &= VAR_7->Reset(&VAR_9.worker);

      if (VAR_1) {
        VAR_7->Launch(&VAR_9.worker);
        VAR_7->Execute(&VAR_8.worker);
        VAR_1 &= VAR_7->Sync(&VAR_9.worker);
        VAR_1 &= VAR_7->Sync(&VAR_8.worker);
      }
      VAR_7->End(&VAR_9.worker);
      if (VAR_1) FUNC_2(&VAR_9, &VAR_8);
    } else {

      FUNC_1(VAR_0, &VAR_8, 0, VAR_3);
      VAR_7->Execute(&VAR_8.worker);
      VAR_1 &= VAR_7->Sync(&VAR_8.worker);
    }
    VAR_7->End(&VAR_8.worker);
    if (VAR_1) {
      VAR_0->alpha_ = VAR_8.alpha / VAR_5;
      VAR_0->uv_alpha_ = VAR_8.uv_alpha / VAR_5;
      FUNC_0(VAR_0, VAR_8.alphas);
    }
  } else {
    FUNC_3(VAR_0);
  }
  return VAR_1;
}
