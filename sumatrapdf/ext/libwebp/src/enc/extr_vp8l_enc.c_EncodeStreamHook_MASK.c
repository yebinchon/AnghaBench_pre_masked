
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int width; int height; } ;
typedef TYPE_1__ WebPPicture ;
typedef scalar_t__ WebPEncodingError ;
struct TYPE_17__ {scalar_t__ method; int near_lossless; scalar_t__ quality; } ;
typedef TYPE_2__ WebPConfig ;
struct TYPE_18__ {int lossless_features; int palette_size; int lossless_size; int lossless_hdr_size; int lossless_data_size; scalar_t__ cache_bits; int transform_bits; int histogram_bits; } ;
typedef TYPE_3__ WebPAuxStats ;
struct TYPE_19__ {int use_palette_; int use_subtract_green_; int use_predict_; int use_cross_color_; scalar_t__ argb_content_; int palette_size_; scalar_t__ cache_bits_; int transform_bits_; int histo_bits_; int current_width_; int * refs_; int hash_chain_; int argb_; } ;
typedef TYPE_4__ VP8LEncoder ;
typedef int VP8LBitWriter ;
struct TYPE_21__ {int entropy_idx_; } ;
struct TYPE_20__ {int use_cache_; int num_crunch_configs_; int red_and_blue_always_zero_; scalar_t__ err_; TYPE_3__* stats_; TYPE_6__* crunch_configs_; TYPE_4__* enc_; int * bw_; TYPE_1__* picture_; TYPE_2__* config_; } ;
typedef TYPE_5__ StreamEncodeContext ;
typedef TYPE_6__ CrunchConfig ;


 scalar_t__ FUNC_0 (TYPE_4__* const,int const,int const) ;
 scalar_t__ FUNC_1 (TYPE_4__* const,int ,int const,int const,int const,int * const) ;
 scalar_t__ FUNC_2 (TYPE_4__* const,int ,int const,int const,int const,int,int * const) ;
 int FUNC_3 (TYPE_4__* const,int ,int const,int * const) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int * const,int ,int *,int *,int ,int const,int const,int const,int const,TYPE_6__ const*,scalar_t__*,int ,size_t const,int*,int*) ;
 scalar_t__ FUNC_6 (int * const,int const,TYPE_4__* const) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (TYPE_4__* const) ;
 scalar_t__ FUNC_8 (TYPE_4__* const,int) ;
 int VAR_1 ;
 int FUNC_9 (TYPE_1__ const* const,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int * const,int *) ;
 int FUNC_12 (int *,int ) ;
 size_t FUNC_13 (int * const) ;
 int FUNC_14 (int *,int * const) ;
 int FUNC_15 (int *,int * const) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int * const,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;

__attribute__((used)) static int FUNC_18(void* VAR_11, void* VAR_12) {
  StreamEncodeContext* const VAR_13 = (StreamEncodeContext*)VAR_11;
  const WebPConfig* const VAR_14 = VAR_13->config_;
  const WebPPicture* const VAR_15 = VAR_13->picture_;
  VP8LBitWriter* const VAR_16 = VAR_13->bw_;
  VP8LEncoder* const VAR_17 = VAR_13->enc_;
  const int VAR_18 = VAR_13->use_cache_;
  const CrunchConfig* const VAR_19 = VAR_13->crunch_configs_;
  const int VAR_20 = VAR_13->num_crunch_configs_;
  const int VAR_21 = VAR_13->red_and_blue_always_zero_;

  WebPAuxStats* const VAR_22 = VAR_13->stats_;

  WebPEncodingError VAR_23 = VAR_3;
  const int VAR_24 = (int)VAR_14->quality;
  const int VAR_25 = (VAR_14->method == 0);



  const int VAR_26 = VAR_15->height;
  const size_t VAR_27 = FUNC_13(VAR_16);



  int VAR_28 = 0;
  int VAR_29 = 0;
  int VAR_30 = 0;
  int VAR_31;
  size_t VAR_32 = 0;
  VP8LBitWriter VAR_33 = *VAR_16, VAR_34;
  (void)VAR_12;

  if (!FUNC_12(&VAR_34, 0) ||
      (VAR_20 > 1 && !FUNC_11(VAR_16, &VAR_34))) {
    VAR_23 = VAR_2;
    goto Error;
  }

  for (VAR_31 = 0; VAR_31 < VAR_20; ++VAR_31) {
    const int VAR_35 = VAR_19[VAR_31].entropy_idx_;
    VAR_17->use_palette_ = (VAR_35 == VAR_7);
    VAR_17->use_subtract_green_ =
        (VAR_35 == VAR_10) || (VAR_35 == VAR_9);
    VAR_17->use_predict_ =
        (VAR_35 == VAR_8) || (VAR_35 == VAR_9);
    if (VAR_25) {
      VAR_17->use_cross_color_ = 0;
    } else {
      VAR_17->use_cross_color_ = VAR_21 ? 0 : VAR_17->use_predict_;
    }

    VAR_17->cache_bits_ = 0;
    FUNC_10(&VAR_17->refs_[0]);
    FUNC_10(&VAR_17->refs_[1]);
    VAR_17->argb_content_ = VAR_5;



    if (VAR_17->use_palette_) {
      VAR_23 = FUNC_6(VAR_16, VAR_25, VAR_17);
      if (VAR_23 != VAR_3) goto Error;
      VAR_23 = FUNC_8(VAR_17, VAR_30);
      if (VAR_23 != VAR_3) goto Error;


      if (VAR_18 && VAR_17->palette_size_ < (1 << VAR_0)) {
        VAR_17->cache_bits_ = FUNC_4(VAR_17->palette_size_) + 1;
      }
    }
    if (!VAR_30) {

      if (VAR_17->argb_content_ != VAR_4 &&
          VAR_17->argb_content_ != VAR_6) {
        VAR_23 = FUNC_7(VAR_17);
        if (VAR_23 != VAR_3) goto Error;
      }




      if (VAR_17->use_subtract_green_) {
        FUNC_3(VAR_17, VAR_17->current_width_, VAR_26, VAR_16);
      }

      if (VAR_17->use_predict_) {
        VAR_23 = FUNC_2(VAR_17, VAR_17->current_width_, VAR_26, VAR_24,
                                 VAR_25, VAR_17->use_subtract_green_, VAR_16);
        if (VAR_23 != VAR_3) goto Error;
      }

      if (VAR_17->use_cross_color_) {
        VAR_23 = FUNC_1(VAR_17, VAR_17->current_width_, VAR_26, VAR_24,
                                    VAR_25, VAR_16);
        if (VAR_23 != VAR_3) goto Error;
      }
    }

    FUNC_17(VAR_16, !VAR_1, 1);



    VAR_23 = FUNC_5(VAR_16, VAR_17->argb_, &VAR_17->hash_chain_, VAR_17->refs_,
                              VAR_17->current_width_, VAR_26, VAR_24, VAR_25,
                              VAR_18, &VAR_19[VAR_31],
                              &VAR_17->cache_bits_, VAR_17->histo_bits_,
                              VAR_27, &VAR_28, &VAR_29);
    if (VAR_23 != VAR_3) goto Error;


    if (VAR_31 == 0 || FUNC_13(VAR_16) < VAR_32) {
      VAR_32 = FUNC_13(VAR_16);

      FUNC_15(VAR_16, &VAR_34);


      if (VAR_22 != ((void*)0)) {
        VAR_22->lossless_features = 0;
        if (VAR_17->use_predict_) VAR_22->lossless_features |= 1;
        if (VAR_17->use_cross_color_) VAR_22->lossless_features |= 2;
        if (VAR_17->use_subtract_green_) VAR_22->lossless_features |= 4;
        if (VAR_17->use_palette_) VAR_22->lossless_features |= 8;
        VAR_22->histogram_bits = VAR_17->histo_bits_;
        VAR_22->transform_bits = VAR_17->transform_bits_;
        VAR_22->cache_bits = VAR_17->cache_bits_;
        VAR_22->palette_size = VAR_17->palette_size_;
        VAR_22->lossless_size = (int)(VAR_32 - VAR_27);
        VAR_22->lossless_hdr_size = VAR_28;
        VAR_22->lossless_data_size = VAR_29;
      }

    }

    if (VAR_20 > 1) FUNC_14(&VAR_33, VAR_16);
  }
  FUNC_15(&VAR_34, VAR_16);

Error:
  FUNC_16(&VAR_34);
  VAR_13->err_ = VAR_23;

  return (VAR_23 == VAR_3);
}
