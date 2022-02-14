
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int * buf_; scalar_t__ nb_bits_; } ;
typedef TYPE_1__ VP8BitWriter ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (TYPE_1__* const,int ,scalar_t__) ;

uint8_t* FUNC_2(VP8BitWriter* const VAR_0) {
  FUNC_1(VAR_0, 0, 9 - VAR_0->nb_bits_);
  VAR_0->nb_bits_ = 0;
  FUNC_0(VAR_0);
  return VAR_0->buf_;
}
