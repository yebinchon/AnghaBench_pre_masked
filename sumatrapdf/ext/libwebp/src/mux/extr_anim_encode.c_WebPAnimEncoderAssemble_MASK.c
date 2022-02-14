
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef double uint32_t ;
typedef scalar_t__ WebPMuxError ;
typedef int WebPMux ;
typedef int WebPData ;
struct TYPE_10__ {int anim_params; } ;
struct TYPE_11__ {int in_frame_count_; scalar_t__ count_; double first_timestamp_; scalar_t__ flush_count_; int out_frame_count_; TYPE_1__ options_; int canvas_height_; int canvas_width_; int * mux_; scalar_t__ prev_timestamp_; int got_null_frame_; } ;
typedef TYPE_2__ WebPAnimEncoder ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int const) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;

int FUNC_9(WebPAnimEncoder* VAR_1, WebPData* VAR_2) {
  WebPMux* VAR_3;
  WebPMuxError VAR_4;

  if (VAR_1 == ((void*)0)) {
    return 0;
  }
  FUNC_4(VAR_1);

  if (VAR_2 == ((void*)0)) {
    FUNC_2(VAR_1, "ERROR assembling: NULL input");
    return 0;
  }

  if (VAR_1->in_frame_count_ == 0) {
    FUNC_2(VAR_1, "ERROR: No frames to assemble");
    return 0;
  }

  if (!VAR_1->got_null_frame_ && VAR_1->in_frame_count_ > 1 && VAR_1->count_ > 0) {

    const double VAR_5 =
        (uint32_t)VAR_1->prev_timestamp_ - VAR_1->first_timestamp_;
    const int VAR_6 = (int)(VAR_5 / (VAR_1->in_frame_count_ - 1));
    if (!FUNC_1(VAR_1, VAR_6)) {
      return 0;
    }
  }


  VAR_1->flush_count_ = VAR_1->count_;
  if (!FUNC_0(VAR_1)) {
    return 0;
  }


  VAR_3 = VAR_1->mux_;
  VAR_4 = FUNC_8(VAR_3, VAR_1->canvas_width_, VAR_1->canvas_height_);
  if (VAR_4 != VAR_0) goto Err;

  VAR_4 = FUNC_7(VAR_3, &VAR_1->options_.anim_params);
  if (VAR_4 != VAR_0) goto Err;


  VAR_4 = FUNC_6(VAR_3, VAR_2);
  if (VAR_4 != VAR_0) goto Err;

  if (VAR_1->out_frame_count_ == 1) {
    VAR_4 = FUNC_5(VAR_1, VAR_2);
    if (VAR_4 != VAR_0) goto Err;
  }
  return 1;

 Err:
  FUNC_3(VAR_1, "ERROR assembling WebP", VAR_4);
  return 0;
}
