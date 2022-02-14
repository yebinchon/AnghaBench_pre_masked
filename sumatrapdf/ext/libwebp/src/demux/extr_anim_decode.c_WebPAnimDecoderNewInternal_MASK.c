
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int WebPData ;
typedef int WebPAnimDecoderOptions ;
struct TYPE_7__ {unsigned long long canvas_width; int canvas_height; void* frame_count; void* bgcolor; void* loop_count; } ;
struct TYPE_8__ {int * prev_frame_disposed_; TYPE_1__ info_; int * curr_frame_; int * demux_; } ;
typedef TYPE_2__ WebPAnimDecoder ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 unsigned long long VAR_0 ;
 scalar_t__ FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (int const*) ;
 void* FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (unsigned long long,int) ;

WebPAnimDecoder* FUNC_8(
    const WebPData* VAR_7, const WebPAnimDecoderOptions* VAR_8,
    int VAR_9) {
  WebPAnimDecoderOptions VAR_10;
  WebPAnimDecoder* VAR_11 = ((void*)0);
  if (VAR_7 == ((void*)0) ||
      FUNC_2(VAR_9, VAR_1)) {
    return ((void*)0);
  }


  VAR_11 = (WebPAnimDecoder*)FUNC_7(1ULL, sizeof(*VAR_11));
  if (VAR_11 == ((void*)0)) goto Error;

  if (VAR_8 != ((void*)0)) {
    VAR_10 = *VAR_8;
  } else {
    FUNC_1(&VAR_10);
  }
  if (!FUNC_0(&VAR_10, VAR_11)) goto Error;

  VAR_11->demux_ = FUNC_5(VAR_7);
  if (VAR_11->demux_ == ((void*)0)) goto Error;

  VAR_11->info_.canvas_width = FUNC_6(VAR_11->demux_, VAR_4);
  VAR_11->info_.canvas_height = FUNC_6(VAR_11->demux_, VAR_3);
  VAR_11->info_.loop_count = FUNC_6(VAR_11->demux_, VAR_6);
  VAR_11->info_.bgcolor = FUNC_6(VAR_11->demux_, VAR_2);
  VAR_11->info_.frame_count = FUNC_6(VAR_11->demux_, VAR_5);


  VAR_11->curr_frame_ = (uint8_t*)FUNC_7(
      VAR_11->info_.canvas_width * VAR_0, VAR_11->info_.canvas_height);
  if (VAR_11->curr_frame_ == ((void*)0)) goto Error;
  VAR_11->prev_frame_disposed_ = (uint8_t*)FUNC_7(
      VAR_11->info_.canvas_width * VAR_0, VAR_11->info_.canvas_height);
  if (VAR_11->prev_frame_disposed_ == ((void*)0)) goto Error;

  FUNC_4(VAR_11);
  return VAR_11;

 Error:
  FUNC_3(VAR_11);
  return ((void*)0);
}
