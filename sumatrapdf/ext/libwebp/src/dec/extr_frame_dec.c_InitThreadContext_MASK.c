
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int hook; void* data2; TYPE_3__* data1; } ;
typedef TYPE_2__ WebPWorker ;
struct TYPE_8__ {int io_; } ;
struct TYPE_10__ {scalar_t__ mt_method_; scalar_t__ filter_type_; scalar_t__ num_caches_; TYPE_1__ thread_ctx_; TYPE_2__ worker_; scalar_t__ cache_id_; } ;
typedef TYPE_3__ VP8Decoder ;
struct TYPE_11__ {int (* Reset ) (TYPE_2__* const) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__* const,int ,char*) ;
 int VAR_3 ;
 TYPE_5__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__* const) ;

__attribute__((used)) static int FUNC_3(VP8Decoder* const VAR_4) {
  VAR_4->cache_id_ = 0;
  if (VAR_4->mt_method_ > 0) {
    WebPWorker* const VAR_5 = &VAR_4->worker_;
    if (!FUNC_1()->Reset(VAR_5)) {
      return FUNC_0(VAR_4, VAR_3,
                         "thread initialization failed.");
    }
    VAR_5->data1 = VAR_4;
    VAR_5->data2 = (void*)&VAR_4->thread_ctx_.io_;
    VAR_5->hook = VAR_0;
    VAR_4->num_caches_ =
      (VAR_4->filter_type_ > 0) ? VAR_1 : VAR_1 - 1;
  } else {
    VAR_4->num_caches_ = VAR_2;
  }
  return 1;
}
