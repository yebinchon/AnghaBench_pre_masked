
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ score; int nz; scalar_t__ H; scalar_t__ R; scalar_t__ SD; scalar_t__ D; } ;
typedef TYPE_1__ VP8ModeScore ;



__attribute__((used)) static void FUNC_0(VP8ModeScore* const VAR_0, const VP8ModeScore* const VAR_1) {
  VAR_0->D += VAR_1->D;
  VAR_0->SD += VAR_1->SD;
  VAR_0->R += VAR_1->R;
  VAR_0->H += VAR_1->H;
  VAR_0->nz |= VAR_1->nz;
  VAR_0->score += VAR_1->score;
}
