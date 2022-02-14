
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ max_value; scalar_t__ last_non_zero; } ;
typedef TYPE_1__ VP8Histogram ;



__attribute__((used)) static void FUNC_0(const VP8Histogram* const VAR_0,
                            VP8Histogram* const VAR_1) {
  if (VAR_0->max_value > VAR_1->max_value) {
    VAR_1->max_value = VAR_0->max_value;
  }
  if (VAR_0->last_non_zero > VAR_1->last_non_zero) {
    VAR_1->last_non_zero = VAR_0->last_non_zero;
  }
}
