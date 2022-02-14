
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int bitstream; } ;
typedef TYPE_1__ WebPMuxFrameInfo ;
typedef int WebPMuxAnimDispose ;
struct TYPE_12__ {int prev_rect_; } ;
typedef TYPE_2__ WebPAnimEncoder ;
struct TYPE_15__ {size_t size; } ;
struct TYPE_14__ {scalar_t__ evaluate_; TYPE_5__ mem_; int rect_; TYPE_1__ info_; } ;
struct TYPE_13__ {TYPE_1__ sub_frame_; TYPE_1__ key_frame_; } ;
typedef TYPE_3__ EncodedFrame ;
typedef TYPE_4__ Candidate ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__* const,int const) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(WebPAnimEncoder* const VAR_5,
                              Candidate* const VAR_6, int VAR_7,
                              EncodedFrame* const VAR_8) {
  int VAR_9;
  int VAR_10 = -1;
  size_t VAR_11 = ~0;
  for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {
    if (VAR_6[VAR_9].evaluate_) {
      const size_t VAR_12 = VAR_6[VAR_9].mem_.size;
      if (VAR_12 < VAR_11) {
        VAR_10 = VAR_9;
        VAR_11 = VAR_12;
      }
    }
  }
  FUNC_3(VAR_10 != -1);
  for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {
    if (VAR_6[VAR_9].evaluate_) {
      if (VAR_9 == VAR_10) {
        WebPMuxFrameInfo* const VAR_13 = VAR_7
                                      ? &VAR_8->key_frame_
                                      : &VAR_8->sub_frame_;
        *VAR_13 = VAR_6[VAR_9].info_;
        FUNC_0(&VAR_6[VAR_9].mem_, &VAR_13->bitstream);
        if (!VAR_7) {



          const WebPMuxAnimDispose VAR_14 =
              (VAR_10 == VAR_1 || VAR_10 == VAR_2)
                  ? VAR_4
                  : VAR_3;
          FUNC_1(VAR_5, VAR_14);
        }
        VAR_5->prev_rect_ = VAR_6[VAR_9].rect_;
      } else {
        FUNC_2(&VAR_6[VAR_9].mem_);
        VAR_6[VAR_9].evaluate_ = 0;
      }
    }
  }
}
