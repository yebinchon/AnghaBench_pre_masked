
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int VP8EncIterator ;
struct TYPE_2__ {int delta_progress; int uv_alpha; int alpha; int alphas; } ;
typedef TYPE_1__ SegmentJob ;


 int FUNC_0 (int * const,int ,int *,int *) ;
 int FUNC_1 (int * const,int * const) ;
 int FUNC_2 (int * const) ;
 scalar_t__ FUNC_3 (int * const) ;
 int FUNC_4 (int * const,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(void* VAR_1, void* VAR_2) {
  SegmentJob* const VAR_3 = (SegmentJob*)VAR_1;
  VP8EncIterator* const VAR_4 = (VP8EncIterator*)VAR_2;
  int VAR_5 = 1;
  if (!FUNC_2(VAR_4)) {
    uint8_t VAR_6[32 + VAR_0];
    uint8_t* const VAR_7 = (uint8_t*)FUNC_5(VAR_6);
    do {

      FUNC_1(VAR_4, VAR_7);
      FUNC_0(VAR_4, VAR_3->alphas, &VAR_3->alpha, &VAR_3->uv_alpha);
      VAR_5 = FUNC_4(VAR_4, VAR_3->delta_progress);
    } while (VAR_5 && FUNC_3(VAR_4));
  }
  return VAR_5;
}
