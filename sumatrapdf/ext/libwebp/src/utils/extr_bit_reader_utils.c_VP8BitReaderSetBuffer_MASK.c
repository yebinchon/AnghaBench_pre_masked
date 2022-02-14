
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lbit_t ;
struct TYPE_3__ {int * buf_max_; int * buf_end_; int * buf_; } ;
typedef TYPE_1__ VP8BitReader ;



void FUNC_0(VP8BitReader* const VAR_0,
                           const uint8_t* const VAR_1,
                           size_t VAR_2) {
  VAR_0->buf_ = VAR_1;
  VAR_0->buf_end_ = VAR_1 + VAR_2;
  VAR_0->buf_max_ =
      (VAR_2 >= sizeof(lbit_t)) ? VAR_1 + VAR_2 - sizeof(lbit_t) + 1
                               : VAR_1;
}
