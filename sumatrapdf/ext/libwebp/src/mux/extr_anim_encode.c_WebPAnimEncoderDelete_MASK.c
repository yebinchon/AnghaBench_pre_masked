
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size_; int mux_; struct TYPE_5__* encoded_frames_; int prev_canvas_disposed_; int prev_canvas_; int curr_canvas_copy_; } ;
typedef TYPE_1__ WebPAnimEncoder ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(WebPAnimEncoder* VAR_0) {
  if (VAR_0 != ((void*)0)) {
    FUNC_2(&VAR_0->curr_canvas_copy_);
    FUNC_2(&VAR_0->prev_canvas_);
    FUNC_2(&VAR_0->prev_canvas_disposed_);
    if (VAR_0->encoded_frames_ != ((void*)0)) {
      size_t VAR_1;
      for (VAR_1 = 0; VAR_1 < VAR_0->size_; ++VAR_1) {
        FUNC_0(&VAR_0->encoded_frames_[VAR_1]);
      }
      FUNC_3(VAR_0->encoded_frames_);
    }
    FUNC_1(VAR_0->mux_);
    FUNC_3(VAR_0);
  }
}
