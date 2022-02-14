
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_parts_; int * parts_; int bw_; } ;
typedef TYPE_1__ VP8Encoder ;


 int FUNC_0 (int *) ;

void FUNC_1(VP8Encoder* const VAR_0) {
  int VAR_1;
  FUNC_0(&VAR_0->bw_);
  for (VAR_1 = 0; VAR_1 < VAR_0->num_parts_; ++VAR_1) {
    FUNC_0(VAR_0->parts_ + VAR_1);
  }
}
