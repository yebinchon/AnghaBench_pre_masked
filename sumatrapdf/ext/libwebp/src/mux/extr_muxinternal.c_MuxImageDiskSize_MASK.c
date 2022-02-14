
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * unknown_; int * img_; int * alpha_; int * header_; } ;
typedef TYPE_1__ WebPMuxImage ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

size_t FUNC_2(const WebPMuxImage* const VAR_0) {
  size_t VAR_1 = 0;
  if (VAR_0->header_ != ((void*)0)) VAR_1 += FUNC_0(VAR_0->header_);
  if (VAR_0->alpha_ != ((void*)0)) VAR_1 += FUNC_0(VAR_0->alpha_);
  if (VAR_0->img_ != ((void*)0)) VAR_1 += FUNC_0(VAR_0->img_);
  if (VAR_0->unknown_ != ((void*)0)) VAR_1 += FUNC_1(VAR_0->unknown_);
  return VAR_1;
}
