
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {TYPE_1__* config_; } ;
typedef TYPE_2__ VP8Encoder ;
struct TYPE_8__ {int is_first; float dq; double target; int value; int last_value; int do_size_search; int last_q; int q; } ;
struct TYPE_6__ {float target_PSNR; int quality; int target_size; } ;
typedef TYPE_3__ PassStats ;



__attribute__((used)) static int FUNC_0(const VP8Encoder* const VAR_0, PassStats* const VAR_1) {
  const uint64_t VAR_2 = (uint64_t)VAR_0->config_->target_size;
  const int VAR_3 = (VAR_2 != 0);
  const float VAR_4 = VAR_0->config_->target_PSNR;

  VAR_1->is_first = 1;
  VAR_1->dq = 10.f;
  VAR_1->q = VAR_1->last_q = VAR_0->config_->quality;
  VAR_1->target = VAR_3 ? (double)VAR_2
            : (VAR_4 > 0.) ? VAR_4
            : 40.;
  VAR_1->value = VAR_1->last_value = 0.;
  VAR_1->do_size_search = VAR_3;
  return VAR_3;
}
