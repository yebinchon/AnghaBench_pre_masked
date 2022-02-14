
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i4x4_lf_delta_; int const simple_; int sharpness_; int level_; } ;
typedef TYPE_1__ VP8EncFilterHeader ;
typedef int VP8BitWriter ;


 scalar_t__ FUNC_0 (int * const,int const) ;
 int FUNC_1 (int * const,int ,int) ;
 int FUNC_2 (int * const,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(VP8BitWriter* const VAR_0,
                            const VP8EncFilterHeader* const VAR_1) {
  const int VAR_2 = (VAR_1->i4x4_lf_delta_ != 0);
  FUNC_0(VAR_0, VAR_1->simple_);
  FUNC_1(VAR_0, VAR_1->level_, 6);
  FUNC_1(VAR_0, VAR_1->sharpness_, 3);
  if (FUNC_0(VAR_0, VAR_2)) {

    const int VAR_3 = (VAR_1->i4x4_lf_delta_ != 0);
    if (FUNC_0(VAR_0, VAR_3)) {

      FUNC_1(VAR_0, 0, 4);

      FUNC_2(VAR_0, VAR_1->i4x4_lf_delta_, 6);
      FUNC_1(VAR_0, 0, 3);
    }
  }
}
