
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WebPPicture ;
typedef int WebPMuxFrameInfo ;
struct TYPE_10__ {scalar_t__ size; } ;
typedef TYPE_2__ WebPMemoryWriter ;
typedef int WebPData ;
struct TYPE_9__ {scalar_t__ allow_mixed; } ;
struct TYPE_11__ {int last_config_reversed_; TYPE_1__ options_; int last_config_; int curr_canvas_copy_; } ;
typedef TYPE_3__ WebPAnimEncoder ;


 int FUNC_0 (int const* const,int * const) ;
 int FUNC_1 (int *,int * const,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int * const) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(WebPAnimEncoder* const VAR_0,
                             const WebPMuxFrameInfo* const VAR_1,
                             WebPData* const VAR_2) {
  WebPPicture* const VAR_3 = &VAR_0->curr_canvas_copy_;
  WebPMemoryWriter VAR_4, VAR_5;
  FUNC_4(&VAR_4);
  FUNC_4(&VAR_5);

  if (!FUNC_0(VAR_1, VAR_3)) goto Err;
  if (!FUNC_1(&VAR_0->last_config_, VAR_3, &VAR_4)) goto Err;
  FUNC_2(&VAR_4, VAR_2);

  if (VAR_0->options_.allow_mixed) {
    if (!FUNC_1(&VAR_0->last_config_reversed_, VAR_3, &VAR_5)) goto Err;
    if (VAR_5 < VAR_4) {
      FUNC_2(&VAR_5, VAR_2);
      FUNC_3(&VAR_4);
    } else {
      FUNC_3(&VAR_5);
    }
  }
  return 1;

 Err:
  FUNC_3(&VAR_4);
  FUNC_3(&VAR_5);
  return 0;
}
