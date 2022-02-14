
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_15__ {int width; int height; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_16__ {scalar_t__ filter_strength; scalar_t__ autofilter; float quality; int pass; int partitions; int filter_type; } ;
typedef TYPE_2__ WebPConfig ;
typedef int VP8SegmentInfo ;
typedef int VP8ModeScore ;
typedef int VP8MBInfo ;
struct TYPE_17__ {int num_parts_; int mb_w_; int mb_h_; int preds_w_; int profile_; int tokens_; scalar_t__ percent_; TYPE_1__* pic_; TYPE_2__* config_; int * top_derr_; int * y_top_; int * uv_top_; int * lf_stats_; int * nz_; int * preds_; int * mb_info_; } ;
typedef TYPE_3__ VP8Encoder ;
typedef int VP8EncProba ;
typedef int VP8EncIterator ;
typedef int LFStats ;
typedef int DError ;


 float VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (int *) ;
 int const VAR_2 ;
 int FUNC_10 (TYPE_1__* const,int ) ;
 scalar_t__ FUNC_11 (int const,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_3__*,int ,int) ;
 int FUNC_14 (char*,...) ;

__attribute__((used)) static VP8Encoder* FUNC_15(const WebPConfig* const VAR_3,
                                  WebPPicture* const VAR_4) {
  VP8Encoder* VAR_5;
  const int VAR_6 =
      (VAR_3->filter_strength > 0) || (VAR_3->autofilter > 0);
  const int VAR_7 = (VAR_4->width + 15) >> 4;
  const int VAR_8 = (VAR_4->height + 15) >> 4;
  const int VAR_9 = 4 * VAR_7 + 1;
  const int VAR_10 = 4 * VAR_8 + 1;
  const size_t VAR_11 = VAR_9 * VAR_10 * sizeof(*VAR_5->preds_);
  const int VAR_12 = VAR_7 * 16;
  const size_t VAR_13 = (VAR_7 + 1) * sizeof(*VAR_5->nz_) + VAR_2;
  const size_t VAR_14 = VAR_7 * VAR_8 * sizeof(*VAR_5->mb_info_);
  const size_t VAR_15 =
      2 * VAR_12 * sizeof(*VAR_5->y_top_)
      + VAR_2;
  const size_t VAR_16 =
      VAR_3->autofilter ? sizeof(*VAR_5->lf_stats_) + VAR_2 : 0;
  const size_t VAR_17 =
      (VAR_3->quality <= VAR_0 || VAR_3->pass > 1) ?
          VAR_7 * sizeof(*VAR_5->top_derr_) : 0;
  uint8_t* VAR_18;
  const uint64_t VAR_19 = (uint64_t)sizeof(*VAR_5)
                      + VAR_2
                      + VAR_14
                      + VAR_11
                      + VAR_15
                      + VAR_17
                      + VAR_13
                      + VAR_16;
  VAR_18 = (uint8_t*)FUNC_11(VAR_19, sizeof(*VAR_18));
  if (VAR_18 == ((void*)0)) {
    FUNC_10(VAR_4, VAR_1);
    return ((void*)0);
  }
  VAR_5 = (VP8Encoder*)VAR_18;
  VAR_18 = (uint8_t*)FUNC_9(VAR_18 + sizeof(*VAR_5));
  FUNC_13(VAR_5, 0, sizeof(*VAR_5));
  VAR_5->num_parts_ = 1 << VAR_3->partitions;
  VAR_5->mb_w_ = VAR_7;
  VAR_5->mb_h_ = VAR_8;
  VAR_5->preds_w_ = VAR_9;
  VAR_5->mb_info_ = (VP8MBInfo*)VAR_18;
  VAR_18 += VAR_14;
  VAR_5->preds_ = VAR_18 + 1 + VAR_5->preds_w_;
  VAR_18 += VAR_11;
  VAR_5->nz_ = 1 + (uint32_t*)FUNC_9(VAR_18);
  VAR_18 += VAR_13;
  VAR_5->lf_stats_ = VAR_16 ? (LFStats*)FUNC_9(VAR_18) : ((void*)0);
  VAR_18 += VAR_16;


  VAR_18 = (uint8_t*)FUNC_9(VAR_18);
  VAR_5->y_top_ = VAR_18;
  VAR_5->uv_top_ = VAR_5->y_top_ + VAR_12;
  VAR_18 += 2 * VAR_12;
  VAR_5->top_derr_ = VAR_17 ? (DError*)VAR_18 : ((void*)0);
  VAR_18 += VAR_17;
  FUNC_12(VAR_18 <= (uint8_t*)VAR_5 + VAR_19);

  VAR_5->config_ = VAR_3;
  VAR_5->profile_ = VAR_6 ? ((VAR_3->filter_type == 1) ? 0 : 1) : 2;
  VAR_5->pic_ = VAR_4;
  VAR_5->percent_ = 0;

  FUNC_0(VAR_5);
  FUNC_6();
  FUNC_4(VAR_5);
  FUNC_3(VAR_5);
  FUNC_2(VAR_5);
  FUNC_1(VAR_5);
  FUNC_5();
  FUNC_7(VAR_5);



  {
    const float VAR_20 = 1.f + VAR_3->quality * 5.f / 100.f;
    FUNC_8(&VAR_5->tokens_, (int)(VAR_7 * VAR_8 * 4 * VAR_20));
  }
  return VAR_5;
}
