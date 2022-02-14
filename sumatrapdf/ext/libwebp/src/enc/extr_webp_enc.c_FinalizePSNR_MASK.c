
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {float* PSNR; } ;
typedef TYPE_2__ WebPAuxStats ;
struct TYPE_7__ {int sse_count_; int* sse_; TYPE_1__* pic_; } ;
typedef TYPE_3__ VP8Encoder ;
struct TYPE_5__ {TYPE_2__* stats; } ;


 scalar_t__ FUNC_0 (int const,int const) ;

__attribute__((used)) static void FUNC_1(const VP8Encoder* const VAR_0) {
  WebPAuxStats* VAR_1 = VAR_0->pic_->stats;
  const uint64_t VAR_2 = VAR_0->sse_count_;
  const uint64_t* const VAR_3 = VAR_0->sse_;
  VAR_1->PSNR[0] = (float)FUNC_0(VAR_3[0], VAR_2);
  VAR_1->PSNR[1] = (float)FUNC_0(VAR_3[1], VAR_2 / 4);
  VAR_1->PSNR[2] = (float)FUNC_0(VAR_3[2], VAR_2 / 4);
  VAR_1->PSNR[3] = (float)FUNC_0(VAR_3[0] + VAR_3[1] + VAR_3[2], VAR_2 * 3 / 2);
  VAR_1->PSNR[4] = (float)FUNC_0(VAR_3[3], VAR_2);
}
