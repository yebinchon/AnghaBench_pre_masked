
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int candidates ;
typedef int const WebPPicture ;
typedef scalar_t__ WebPEncodingError ;
struct TYPE_20__ {int lossless; int quality; } ;
typedef TYPE_2__ WebPConfig ;
struct TYPE_19__ {scalar_t__ minimize_size; scalar_t__ allow_mixed; } ;
struct TYPE_21__ {int is_first_frame_; TYPE_1__ options_; int prev_rect_; int const prev_canvas_disposed_; TYPE_2__ last_config_reversed_; TYPE_2__ last_config_; int prev_candidate_undecided_; int const prev_canvas_; int const curr_canvas_copy_; } ;
typedef TYPE_3__ WebPAnimEncoder ;
struct TYPE_23__ {int mem_; scalar_t__ evaluate_; } ;
struct TYPE_22__ {int should_try_; int rect_lossy_; int rect_ll_; } ;
typedef TYPE_4__ SubFrameParams ;
typedef int EncodedFrame ;
typedef TYPE_5__ Candidate ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int const* const) ;
 scalar_t__ FUNC_1 (TYPE_3__* const,TYPE_5__*,int ,int const,int,TYPE_4__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int const* const,int const* const,int,int const,int ,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__* const,TYPE_5__*,int,int * const) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int,int const) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int const* const,int const* const) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int const) ;
 int FUNC_11 (TYPE_5__*,int ,int) ;

__attribute__((used)) static WebPEncodingError FUNC_12(WebPAnimEncoder* const VAR_5,
                                  const WebPConfig* const VAR_6,
                                  int VAR_7,
                                  EncodedFrame* const VAR_8,
                                  int* const VAR_9) {
  int VAR_10;
  WebPEncodingError VAR_11 = VAR_2;
  const WebPPicture* const VAR_12 = &VAR_5->curr_canvas_copy_;
  const WebPPicture* const VAR_13 = &VAR_5->prev_canvas_;
  Candidate VAR_14[VAR_0];
  const int VAR_15 = VAR_6->lossless;
  const int VAR_16 = VAR_15 || VAR_5->options_.allow_mixed;
  const int VAR_17 = !VAR_15 || VAR_5->options_.allow_mixed;
  const int VAR_18 = VAR_5->is_first_frame_;



  const int VAR_19 = !VAR_18;





  const int VAR_20 = 0;







  const int VAR_21 =
      !VAR_7 && !VAR_5->prev_candidate_undecided_;

  SubFrameParams VAR_22;
  SubFrameParams VAR_23;

  WebPConfig VAR_24 = *VAR_6;
  WebPConfig VAR_25 = *VAR_6;
  VAR_24.lossless = 1;
  VAR_25.lossless = 0;
  VAR_5->last_config_ = *VAR_6;
  VAR_5->last_config_reversed_ = VAR_6->lossless ? VAR_25 : VAR_24;
  *VAR_9 = 0;

  if (!FUNC_7(&VAR_22, 1, VAR_19) ||
      !FUNC_7(&VAR_23, 0, VAR_20)) {
    return VAR_1;
  }

  FUNC_11(VAR_14, 0, sizeof(VAR_14));


  if (!FUNC_2(VAR_13, VAR_12, VAR_7, VAR_18,
                   VAR_25.quality, &VAR_22)) {
    VAR_11 = VAR_1;
    goto Err;
  }

  if ((VAR_16 && FUNC_3(&VAR_22.rect_ll_)) ||
      (VAR_17 && FUNC_3(&VAR_22.rect_lossy_))) {


    FUNC_10(VAR_19);
    *VAR_9 = 1;
    goto End;
  }

  if (VAR_21) {

    WebPPicture* const VAR_26 = &VAR_5->prev_canvas_disposed_;
    FUNC_8(VAR_13, VAR_26);
    FUNC_0(VAR_3, &VAR_5->prev_rect_,
                          VAR_26);

    if (!FUNC_2(VAR_26, VAR_12, VAR_7,
                     VAR_18, VAR_25.quality,
                     &VAR_23)) {
      VAR_11 = VAR_1;
      goto Err;
    }
    FUNC_10(!FUNC_3(&VAR_23.rect_ll_));
    FUNC_10(!FUNC_3(&VAR_23.rect_lossy_));

    if (VAR_5->options_.minimize_size) {
      VAR_23.should_try_ = 1;
      VAR_22.should_try_ = 1;
    } else if ((VAR_15 &&
                FUNC_5(&VAR_23.rect_ll_) <
                    FUNC_5(&VAR_22.rect_ll_)) ||
               (!VAR_15 &&
                FUNC_5(&VAR_23.rect_lossy_) <
                    FUNC_5(&VAR_22.rect_lossy_))) {
      VAR_23.should_try_ = 1;
      VAR_22.should_try_ = 0;
    }
  }

  if (VAR_22.should_try_) {
    VAR_11 = FUNC_1(
        VAR_5, VAR_14, VAR_4, VAR_15, VAR_7,
        &VAR_22, &VAR_24, &VAR_25);
    if (VAR_11 != VAR_2) goto Err;
  }

  if (VAR_23.should_try_) {
    FUNC_10(!VAR_5->is_first_frame_);
    FUNC_10(VAR_21);
    VAR_11 = FUNC_1(
        VAR_5, VAR_14, VAR_3, VAR_15, VAR_7,
        &VAR_23, &VAR_24, &VAR_25);
    if (VAR_11 != VAR_2) goto Err;
  }

  FUNC_4(VAR_5, VAR_14, VAR_7, VAR_8);

  goto End;

 Err:
  for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
    if (VAR_14[VAR_10].evaluate_) {
      FUNC_9(&VAR_14[VAR_10].mem_);
    }
  }

 End:
  FUNC_6(&VAR_22);
  FUNC_6(&VAR_23);
  return VAR_11;
}
