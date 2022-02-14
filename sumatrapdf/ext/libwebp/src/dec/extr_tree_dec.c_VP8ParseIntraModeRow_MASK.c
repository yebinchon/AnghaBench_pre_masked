
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int eof_; } ;
struct TYPE_6__ {int mb_w_; TYPE_1__ br_; } ;
typedef TYPE_2__ VP8Decoder ;
typedef int VP8BitReader ;


 int FUNC_0 (int * const,TYPE_2__* const,int) ;

int FUNC_1(VP8BitReader* const VAR_0, VP8Decoder* const VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->mb_w_; ++VAR_2) {
    FUNC_0(VAR_0, VAR_1, VAR_2);
  }
  return !VAR_1->br_.eof_;
}
