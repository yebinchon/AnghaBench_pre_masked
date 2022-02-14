
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int user_data; int progress_hook; } ;
struct TYPE_5__ {scalar_t__ curr_canvas_copy_modified_; TYPE_2__* curr_canvas_; TYPE_3__ curr_canvas_copy_; } ;
typedef TYPE_1__ WebPAnimEncoder ;
struct TYPE_6__ {int user_data; int progress_hook; } ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(WebPAnimEncoder* const VAR_0) {
  if (VAR_0->curr_canvas_copy_modified_) {
    FUNC_0(VAR_0->curr_canvas_, &VAR_0->curr_canvas_copy_);
    VAR_0->curr_canvas_copy_.progress_hook = VAR_0->curr_canvas_->progress_hook;
    VAR_0->curr_canvas_copy_.user_data = VAR_0->curr_canvas_->user_data;
    VAR_0->curr_canvas_copy_modified_ = 0;
  }
}
