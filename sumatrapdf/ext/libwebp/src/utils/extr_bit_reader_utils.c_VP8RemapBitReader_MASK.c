
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_3__ {int buf_max_; int buf_end_; int * buf_; } ;
typedef TYPE_1__ VP8BitReader ;



void FUNC_0(VP8BitReader* const VAR_0, ptrdiff_t VAR_1) {
  if (VAR_0->buf_ != ((void*)0)) {
    VAR_0->buf_ += VAR_1;
    VAR_0->buf_end_ += VAR_1;
    VAR_0->buf_max_ += VAR_1;
  }
}
