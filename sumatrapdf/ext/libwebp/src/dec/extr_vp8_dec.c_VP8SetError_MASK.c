
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ VP8StatusCode ;
struct TYPE_3__ {scalar_t__ status_; char* error_msg_; scalar_t__ ready_; } ;
typedef TYPE_1__ VP8Decoder ;


 scalar_t__ VAR_0 ;

int FUNC_0(VP8Decoder* const VAR_1,
                VP8StatusCode VAR_2, const char* const VAR_3) {

  if (VAR_1->status_ == VAR_0) {
    VAR_1->status_ = VAR_2;
    VAR_1->error_msg_ = VAR_3;
    VAR_1->ready_ = 0;
  }
  return 0;
}
