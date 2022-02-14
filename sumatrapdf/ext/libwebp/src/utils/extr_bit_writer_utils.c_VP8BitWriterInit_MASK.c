
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int range_; int nb_bits_; int * buf_; scalar_t__ error_; scalar_t__ max_pos_; scalar_t__ pos_; scalar_t__ run_; scalar_t__ value_; } ;
typedef TYPE_1__ VP8BitWriter ;


 int FUNC_0 (TYPE_1__* const,size_t) ;

int FUNC_1(VP8BitWriter* const VAR_0, size_t VAR_1) {
  VAR_0->range_ = 255 - 1;
  VAR_0->value_ = 0;
  VAR_0->run_ = 0;
  VAR_0->nb_bits_ = -8;
  VAR_0->pos_ = 0;
  VAR_0->max_pos_ = 0;
  VAR_0->error_ = 0;
  VAR_0->buf_ = ((void*)0);
  return (VAR_1 > 0) ? FUNC_0(VAR_0, VAR_1) : 1;
}
