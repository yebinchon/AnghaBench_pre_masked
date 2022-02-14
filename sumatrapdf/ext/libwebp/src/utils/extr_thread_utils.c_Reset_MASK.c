
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int condition_; int mutex_; int thread_; } ;
typedef TYPE_1__ WebPWorkerImpl ;
struct TYPE_8__ {scalar_t__ status_; int * impl_; scalar_t__ had_error; } ;
typedef TYPE_2__ WebPWorker ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__* const) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__* const) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int ,TYPE_2__* const) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(WebPWorker* const VAR_2) {
  int VAR_3 = 1;
  VAR_2->had_error = 0;
  if (VAR_2->status_ < VAR_0) {
    VAR_2->status_ = VAR_0;

  } else if (VAR_2->status_ > VAR_0) {
    VAR_3 = FUNC_0(VAR_2);
  }
  FUNC_3(!VAR_3 || (VAR_2->status_ == VAR_0));
  return VAR_3;
}
