
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int base_quant_; int const mb_w_; int const mb_h_; int const num_parts_; int pic_; scalar_t__ parts_; } ;
typedef TYPE_1__ VP8Encoder ;


 int FUNC_0 (scalar_t__,int const) ;
 int FUNC_1 (TYPE_1__* const) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_3(VP8Encoder* const VAR_2) {
  int VAR_3;
  int VAR_4 = 1;
  const int VAR_5 = VAR_1[VAR_2->base_quant_ >> 4];
  const int VAR_6 =
      VAR_2->mb_w_ * VAR_2->mb_h_ * VAR_5 / VAR_2->num_parts_;

  for (VAR_3 = 0; VAR_4 && VAR_3 < VAR_2->num_parts_; ++VAR_3) {
    VAR_4 = FUNC_0(VAR_2->parts_ + VAR_3, VAR_6);
  }
  if (!VAR_4) {
    FUNC_1(VAR_2);
    FUNC_2(VAR_2->pic_, VAR_0);
  }
  return VAR_4;
}
