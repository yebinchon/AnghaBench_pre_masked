
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* quantizer_; int absolute_delta_; scalar_t__ use_segment_; } ;
typedef TYPE_1__ VP8SegmentHeader ;
struct TYPE_6__ {int* y1_mat_; int* y2_mat_; int* uv_mat_; int uv_quant_; } ;
typedef TYPE_2__ VP8QuantMatrix ;
struct TYPE_7__ {TYPE_2__* dqm_; TYPE_1__ segment_hdr_; int br_; } ;
typedef TYPE_3__ VP8Decoder ;
typedef int VP8BitReader ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int * const,char*) ;
 int FUNC_1 (int * const,int,char*) ;
 int FUNC_2 (int * const,int,char*) ;
 size_t FUNC_3 (int,int) ;
 int* VAR_1 ;
 int* VAR_2 ;

void FUNC_4(VP8Decoder* const VAR_3) {
  VP8BitReader* const VAR_4 = &VAR_3->br_;
  const int VAR_5 = FUNC_2(VAR_4, 7, "global-header");
  const int VAR_6 = FUNC_0(VAR_4, "global-header") ?
       FUNC_1(VAR_4, 4, "global-header") : 0;
  const int VAR_7 = FUNC_0(VAR_4, "global-header") ?
       FUNC_1(VAR_4, 4, "global-header") : 0;
  const int VAR_8 = FUNC_0(VAR_4, "global-header") ?
       FUNC_1(VAR_4, 4, "global-header") : 0;
  const int VAR_9 = FUNC_0(VAR_4, "global-header") ?
       FUNC_1(VAR_4, 4, "global-header") : 0;
  const int VAR_10 = FUNC_0(VAR_4, "global-header") ?
       FUNC_1(VAR_4, 4, "global-header") : 0;

  const VP8SegmentHeader* const VAR_11 = &VAR_3->segment_hdr_;
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < VAR_0; ++VAR_12) {
    int VAR_13;
    if (VAR_11->use_segment_) {
      VAR_13 = VAR_11->quantizer_[VAR_12];
      if (!VAR_11->absolute_delta_) {
        VAR_13 += VAR_5;
      }
    } else {
      if (VAR_12 > 0) {
        VAR_3->dqm_[VAR_12] = VAR_3->dqm_[0];
        continue;
      } else {
        VAR_13 = VAR_5;
      }
    }
    {
      VP8QuantMatrix* const VAR_14 = &VAR_3->dqm_[VAR_12];
      VAR_14->y1_mat_[0] = VAR_2[FUNC_3(VAR_13 + VAR_6, 127)];
      VAR_14->y1_mat_[1] = VAR_1[FUNC_3(VAR_13 + 0, 127)];

      VAR_14->y2_mat_[0] = VAR_2[FUNC_3(VAR_13 + VAR_7, 127)] * 2;



      VAR_14->y2_mat_[1] = (VAR_1[FUNC_3(VAR_13 + VAR_8, 127)] * 101581) >> 16;
      if (VAR_14->y2_mat_[1] < 8) VAR_14->y2_mat_[1] = 8;

      VAR_14->uv_mat_[0] = VAR_2[FUNC_3(VAR_13 + VAR_9, 117)];
      VAR_14->uv_mat_[1] = VAR_1[FUNC_3(VAR_13 + VAR_10, 127)];

      VAR_14->uv_quant_ = VAR_13 + VAR_10;
    }
  }
}
