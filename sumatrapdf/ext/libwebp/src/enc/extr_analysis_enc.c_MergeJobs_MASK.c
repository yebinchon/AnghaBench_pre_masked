
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ uv_alpha; scalar_t__ alpha; scalar_t__* alphas; } ;
typedef TYPE_1__ SegmentJob ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const SegmentJob* const VAR_1, SegmentJob* const VAR_2) {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 <= VAR_0; ++VAR_3) VAR_2->alphas[VAR_3] += VAR_1->alphas[VAR_3];
  VAR_2->alpha += VAR_1->alpha;
  VAR_2->uv_alpha += VAR_1->uv_alpha;
}
